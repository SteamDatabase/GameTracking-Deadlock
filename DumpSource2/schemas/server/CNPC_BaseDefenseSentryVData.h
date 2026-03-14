// MGetKV3ClassDefaults = {
//	"_class": "CNPC_BaseDefenseSentryVData",
//	"m_sModelName": "",
//	"m_AbilityWeapon": "",
//	"m_SentryExplosionParticle": "",
//	"m_flTimeToStartScale": 15.000000,
//	"m_flTimeToEndScale": 50.000000,
//	"m_flMaxScale": 2.000000
//}
class CNPC_BaseDefenseSentryVData : public CNPC_SimpleAnimatingAIVData
{
	CSubclassName< 4 > m_AbilityWeapon;
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SentryExplosionParticle;
	// MPropertyStartGroup = "Gameplay"
	float32 m_flTimeToStartScale;
	float32 m_flTimeToEndScale;
	float32 m_flMaxScale;
};
