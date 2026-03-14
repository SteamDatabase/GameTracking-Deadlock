// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_NeutralCampVData",
//	"m_iInitialSpawnDelayInSeconds": 120,
//	"m_iSpawnIntervalInSeconds": 120,
//	"m_iSpawnIntervalChange": 0,
//	"m_iSpawnIntervalMin": 300,
//	"m_eNeutralType": "NEUTRAL_TROOPER_NORMAL",
//	"m_sIdleAmbient": "",
//	"m_sAlertAmbient": ""
//}
class CCitadel_NeutralCampVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Gameplay"
	int32 m_iInitialSpawnDelayInSeconds;
	int32 m_iSpawnIntervalInSeconds;
	int32 m_iSpawnIntervalChange;
	int32 m_iSpawnIntervalMin;
	ENeutralTrooperType m_eNeutralType;
	// MPropertyStartGroup = "Sounds"
	CSoundEventName m_sIdleAmbient;
	CSoundEventName m_sAlertAmbient;
};
