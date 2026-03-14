// MGetKV3ClassDefaults = {
//	"_class": "CNPC_FieldSentryVData",
//	"m_sModelName": "",
//	"m_LaserSightParticle": "",
//	"m_KillExplosionParticle": "",
//	"m_DeployProgressModifier":
//	{
//	},
//	"m_sSpawnSound": "",
//	"m_sKillExplosionSound": "",
//	"m_sTargetAcquiredLocalSound": "",
//	"m_sTargetAcquiredSound": "",
//	"m_flIdleTurnSpeed": 30.000000,
//	"m_flIdleTurnAngles": 45.000000,
//	"m_flTrooperTakeDamageMult": 1.000000,
//	"m_flNeutralTakeDamageMulti": 1.500000,
//	"m_flNotifyEventTime": 1.500000
//}
class CNPC_FieldSentryVData : public CNPC_SimpleAnimatingAIVData
{
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillExplosionParticle;
	// MPropertyGroupName = "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DeployProgressModifier;
	// MPropertyStartGroup = "Sounds"
	CSoundEventName m_sSpawnSound;
	CSoundEventName m_sKillExplosionSound;
	CSoundEventName m_sTargetAcquiredLocalSound;
	CSoundEventName m_sTargetAcquiredSound;
	// MPropertyStartGroup = "Stats"
	float32 m_flIdleTurnSpeed;
	float32 m_flIdleTurnAngles;
	float32 m_flTrooperTakeDamageMult;
	float32 m_flNeutralTakeDamageMulti;
	float32 m_flNotifyEventTime;
};
