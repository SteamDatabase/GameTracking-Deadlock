// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_HeroTestOrbSpawnerVData",
//	"m_iGoldValue": 10,
//	"m_flSpawnRate": 2.000000,
//	"m_flFirstSpawnTime": 180.000000,
//	"m_hModel": "",
//	"m_flModelScale": 1.500000,
//	"m_flSpawnOffset": 40.000000,
//	"m_AmbientParticle": "",
//	"m_SpawnParticle": ""
//}
class CCitadel_HeroTestOrbSpawnerVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Gameplay"
	int32 m_iGoldValue;
	float32 m_flSpawnRate;
	float32 m_flFirstSpawnTime;
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel;
	float32 m_flModelScale;
	float32 m_flSpawnOffset;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpawnParticle;
};
