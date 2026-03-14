#!/bin/bash
set -euo pipefail

cd "${0%/*}"
. ../common.sh

echo "Processing Deadlock..."

set +e
../tools/dump_source2.sh DEADLOCK
DUMPER_EXIT_CODE=$?
set -e

ProcessDepot ".dll"
DeduplicateStringsFrom ".dll" "game/bin/win64/engine2_strings.txt" "game/bin/win64/tier0_strings.txt"
ProcessVPK

echo "::group::Extracting VPKs"

set +e
while IFS= read -r -d '' file
do
	echo "$file"

	# When updating vpk_extensions, also update "vpk:..." in files.json
	"$VRF_PATH" \
		--input "$file" \
		--output "$(echo "$file" | sed -e 's/\.vpk$/\//g')" \
		--vpk_cache \
		--vpk_decompile \
		--vpk_extensions "txt,lua,kv3,db,gameevents,vcss_c,vjs_c,vts_c,vxml_c,vsndevts_c,vsndstck_c,vpulse_c,vdata_c"
	if [[ "$DUMPER_EXIT_CODE" -eq 0 ]] && [[ $? -ne 0 ]]; then
		DUMPER_EXIT_CODE=$?
	fi
done <   <(find . -type f -name "pak01_dir.vpk" -print0)
set -e

echo "::endgroup::"

while IFS= read -r -d '' file
do
	sed -i '/\/\/# sourceMappingURL=/d' "$file"
done <   <(find . -type f -name "*.js" -print0)

#ProcessToolAssetInfo
FixUCS2

CreateCommit "$(grep "ClientVersion=" game/citadel/steam.inf | grep -o '[0-9\.]*')" "$(grep -o '[0-9\.]*' steam_buildid.txt)"

echo "Done"

exit "$DUMPER_EXIT_CODE"
