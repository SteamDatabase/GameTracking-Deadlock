// MGetKV3ClassDefaults = {
//	"_class": "CNPC_Neutral_Flying_WeakpointVData",
//	"m_flBonusDamageMult": 0.600000,
//	"m_flDamageOnDeath": 0.000000,
//	"m_flGoldPercent": 0.050000,
//	"m_flMaxHealth": 100.000000,
//	"m_flCollisionRadius": 15.000000,
//	"m_flParticleRadius": 1.000000,
//	"m_flStunDuration": 1.500000,
//	"m_AmbientParticle": "",
//	"m_DestroyParticle": "",
//	"m_strDestroySound": "",
//	"m_flFrequencyY": 3.500000,
//	"m_flMinY": 75.000000,
//	"m_flMaxY": 150.000000,
//	"m_flFrequencyR": 5.000000,
//	"m_flOrbitRadius": 80.000000,
//	"m_flOffSetScaler": 1.000000
//}
class CNPC_Neutral_Flying_WeakpointVData : public CNPC_Neutral_WeakpointVData
{
	float32 m_flFrequencyY;
	float32 m_flMinY;
	float32 m_flMaxY;
	float32 m_flFrequencyR;
	float32 m_flOrbitRadius;
	float32 m_flOffSetScaler;
};
