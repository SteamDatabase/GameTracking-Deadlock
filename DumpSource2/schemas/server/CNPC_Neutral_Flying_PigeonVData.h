// MGetKV3ClassDefaults = {
//	"_class": "CNPC_Neutral_Flying_PigeonVData",
//	"m_flFrequencyY": 5.000000,
//	"m_flVerticalScale": 75.000000,
//	"m_flVerticalOffset": 0.000000,
//	"m_flFrequencyR": 5.000000,
//	"m_flOrbitRadius": 80.000000,
//	"m_flCollisionRadius": 15.000000,
//	"m_flParticleRadius": 1.000000,
//	"m_flLifeTime": 10.000000,
//	"m_flRespawnTime": 4.000000,
//	"m_flModelScale": 0.500000,
//	"m_hModel": "",
//	"m_SpawnParticle": "",
//	"m_AmbientParticle": "",
//	"m_DestroyParticle": "",
//	"m_strDestroySound": ""
//}
class CNPC_Neutral_Flying_PigeonVData : public CEntitySubclassVDataBase
{
	CRangeFloat m_flFrequencyY;
	CRangeFloat m_flVerticalScale;
	CRangeFloat m_flVerticalOffset;
	CRangeFloat m_flFrequencyR;
	CRangeFloat m_flOrbitRadius;
	float32 m_flCollisionRadius;
	float32 m_flParticleRadius;
	CRangeFloat m_flLifeTime;
	float32 m_flRespawnTime;
	float32 m_flModelScale;
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpawnParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyParticle;
	// MPropertyStartGroup = "Sounds"
	CSoundEventName m_strDestroySound;
};
