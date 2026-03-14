// MGetKV3ClassDefaults = {
//	"m_StartEffect": "",
//	"m_EndEffect": "",
//	"m_strEnterSound": "",
//	"m_strStartSound": "",
//	"m_strTeleportedSound": ""
//}
class TeleporterParams_t
{
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StartEffect;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EndEffect;
	CSoundEventName m_strEnterSound;
	CSoundEventName m_strStartSound;
	CSoundEventName m_strTeleportedSound;
};
