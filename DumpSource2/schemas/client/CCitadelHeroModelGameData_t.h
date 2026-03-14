// MModelGameData
// MGetKV3ClassDefaults = {
//	"m_hAmbientParticle": "",
//	"m_vecAmbientParticleSettings":
//	[
//	],
//	"m_flTurnThreshold": 90.000000,
//	"m_flTurnDuration": 1.000000,
//	"m_flStepHeight": 32.000000,
//	"m_flCollisionRadius": 20.000000,
//	"m_flCollisionHeight": 80.000000,
//	"m_vCollisionHullMins":
//	[
//		-16.000000,
//		-16.000000,
//		0.000000
//	],
//	"m_vCollisionHullMaxs":
//	[
//		16.000000,
//		16.000000,
//		72.000000
//	]
//}
class CCitadelHeroModelGameData_t
{
	// MPropertyStartGroup = "+Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hAmbientParticle;
	CUtlVector< AmbientParticleSettings_t > m_vecAmbientParticleSettings;
	// MPropertyStartGroup = "+AG2"
	float32 m_flTurnThreshold;
	float32 m_flTurnDuration;
	// MPropertyStartGroup = "+Physics / Movement"
	float32 m_flStepHeight;
	// MPropertyDescription = "Size of the capsule"
	float32 m_flCollisionRadius;
	float32 m_flCollisionHeight;
	// MPropertyDescription = "Size of the physics collison OBB"
	Vector m_vCollisionHullMins;
	Vector m_vCollisionHullMaxs;
};
