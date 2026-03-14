// MGetKV3ClassDefaults = {
//	"_class": "CNPC_Neutral_WeakpointVData",
//	"m_flBonusDamageMult": 0.600000,
//	"m_flDamageOnDeath": 0.000000,
//	"m_flGoldPercent": 0.050000,
//	"m_flMaxHealth": 100.000000,
//	"m_flCollisionRadius": 15.000000,
//	"m_flParticleRadius": 1.000000,
//	"m_flStunDuration": 1.500000,
//	"m_AmbientParticle": "",
//	"m_DestroyParticle": "",
//	"m_strDestroySound": ""
//}
class CNPC_Neutral_WeakpointVData : public CEntitySubclassVDataBase
{
	float32 m_flBonusDamageMult;
	float32 m_flDamageOnDeath;
	float32 m_flGoldPercent;
	float32 m_flMaxHealth;
	float32 m_flCollisionRadius;
	float32 m_flParticleRadius;
	float32 m_flStunDuration;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyParticle;
	CSoundEventName m_strDestroySound;
};
