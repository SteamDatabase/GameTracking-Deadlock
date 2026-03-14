// MGetKV3ClassDefaults = {
//	"_class": "CCitadelBulletTimeWarpVData",
//	"m_TimeWallHitParticle": "",
//	"m_TimeWallHitTimerParticle": ""
//}
class CCitadelBulletTimeWarpVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitTimerParticle;
};
