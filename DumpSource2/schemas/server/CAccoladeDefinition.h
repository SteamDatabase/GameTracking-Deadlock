// MGetKV3ClassDefaults = {
//	"m_unAccoladeID": 0,
//	"m_sTrackedStatName": "",
//	"m_sFlavorName": "",
//	"m_sDescription": "",
//	"m_eThresholdType": "Manual",
//	"m_vecThresholds":
//	[
//	],
//	"m_vecEnabledGameModes":
//	[
//	]
//}
// MVDataRoot
// MVDataAssociatedFile = "scripts/accolades.vdata"
class CAccoladeDefinition
{
	// MVDataUniqueMonotonicInt = "_editor/next_accolade_id"
	// MPropertyAttributeEditor = "locked_int()"
	AccoladeID_t m_unAccoladeID;
	CUtlString m_sTrackedStatName;
	CVDataLocalizedToken m_sFlavorName;
	CVDataLocalizedToken m_sDescription;
	EAccoladeThresholdType m_eThresholdType;
	CUtlVector< TrackedStatValue_t > m_vecThresholds;
	CUtlVector< ECitadelGameMode > m_vecEnabledGameModes;
};
