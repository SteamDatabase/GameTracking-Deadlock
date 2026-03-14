// MGetKV3ClassDefaults = {
//	"_class": "CCitadelBulletRedirectVolumeVData",
//	"m_RedirectParticle": ""
//}
class CCitadelBulletRedirectVolumeVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RedirectParticle;
};
