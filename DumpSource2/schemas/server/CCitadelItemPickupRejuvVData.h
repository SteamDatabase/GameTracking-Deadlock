// MGetKV3ClassDefaults = {
//	"_class": "CCitadelItemPickupRejuvVData",
//	"m_AbilityProjectile": "",
//	"m_flMaxDistForHeal": 1400.000000,
//	"m_flPhysicsRadius": 60.000000,
//	"m_RebirthModifier":
//	{
//	},
//	"m_PunchPickupModifier":
//	{
//	},
//	"m_IsFrozenParticle": ""
//}
class CCitadelItemPickupRejuvVData : public CEntitySubclassVDataBase
{
	CSubclassName< 4 > m_AbilityProjectile;
	float32 m_flMaxDistForHeal;
	float32 m_flPhysicsRadius;
	// MPropertyStartGroup = "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RebirthModifier;
	CEmbeddedSubclass< CCitadelModifier > m_PunchPickupModifier;
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsFrozenParticle;
};
