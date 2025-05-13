#!/bin/bash
set -euo pipefail

cd "${0%/*}"
. ../common.sh

echo "Processing Deadlock..."

DUMPER_EXIT_CODE=0

ProcessDepot ".dll"
DeduplicateStringsFrom ".dll" "game/bin/win64/engine2_strings.txt" "game/bin/win64/tier0_strings.txt"
ProcessVPK

set +e
while IFS= read -r -d '' file
do
	echo " > $file"

	# When updating vpk_extensions, also update "vpk:..." in GameTracking/files.json
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

while IFS= read -r -d '' file
do
	sed -i '/\/\/# sourceMappingURL=/d' "$file"
done <   <(find . -type f -name "*.js" -print0)

#ProcessToolAssetInfo
FixUCS2

CreateCommit "$(grep "ClientVersion=" game/citadel/steam.inf | grep -o '[0-9\.]*')" "${1:-}"

echo "Done"

exit "$DUMPER_EXIT_CODE"
