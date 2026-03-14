// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_Bounce_PadVData",
//	"m_sModelName": "",
//	"m_IdleParticle": "",
//	"m_BounceParticle": "",
//	"m_DestroyParticle": "",
//	"m_strCasterBounceSound": "",
//	"m_strOtherHeroBounceSound": "",
//	"m_strBarrelBounceSound": "",
//	"m_strExpiredSound": ""
//}
class CCitadel_Bounce_PadVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdleParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyParticle;
	// MPropertyStartGroup = "Sounds"
	CSoundEventName m_strCasterBounceSound;
	CSoundEventName m_strOtherHeroBounceSound;
	CSoundEventName m_strBarrelBounceSound;
	CSoundEventName m_strExpiredSound;
};
