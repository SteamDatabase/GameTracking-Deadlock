// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_Hideout_ClockVData",
//	"m_hModel": "",
//	"m_HourParticle": "",
//	"m_MinuteParticle": "",
//	"m_strStartHourSound": "",
//	"m_strHourSound": "",
//	"m_strMinuteSound": "",
//	"m_flHourChimeInterval": 1.000000
//}
class CCitadel_Hideout_ClockVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HourParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MinuteParticle;
	// MPropertyStartGroup = "Sounds"
	CSoundEventName m_strStartHourSound;
	CSoundEventName m_strHourSound;
	CSoundEventName m_strMinuteSound;
	float32 m_flHourChimeInterval;
};
