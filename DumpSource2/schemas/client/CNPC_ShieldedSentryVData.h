// MGetKV3ClassDefaults = {
//	"_class": "CNPC_ShieldedSentryVData",
//	"m_sModelName": "",
//	"m_flZShootPostionOffset": 0.000000,
//	"m_LaserSightParticle": "",
//	"m_KillExplosionParticle": "",
//	"m_AutoDestructParticle": "",
//	"m_DeployProgressModifier":
//	{
//	},
//	"m_NearDeathModifier":
//	{
//	},
//	"m_IntrinsicModifier":
//	{
//	},
//	"m_sSpawnSound": "",
//	"m_sKillExplosionSound": "",
//	"m_sLastHitSound": "",
//	"m_sTargetAcquiredLocalSound": "",
//	"m_sTargetAcquiredSound": "",
//	"m_flIdleTurnSpeed": 30.000000,
//	"m_flIdleTurnAngles": 45.000000,
//	"m_flTrooperTakeDamageMult": 1.000000,
//	"m_flNeutralTakeDamageMulti": 1.500000,
//	"m_flNotifyEventTime": 1.500000,
//	"m_flNearDeathDuration": 0.800000,
//	"m_flMinimapRevealTime": 3.000000,
//	"m_flMinLifetime": 0.000000,
//	"m_flAttackThinkTime": 0.010000
//}
class CNPC_ShieldedSentryVData : public CNPC_SimpleAnimatingAIVData
{
	float32 m_flZShootPostionOffset;
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillExplosionParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AutoDestructParticle;
	// MPropertyGroupName = "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DeployProgressModifier;
	CEmbeddedSubclass< CCitadelModifier > m_NearDeathModifier;
	CEmbeddedSubclass< CCitadelModifier > m_IntrinsicModifier;
	// MPropertyStartGroup = "Sounds"
	CSoundEventName m_sSpawnSound;
	CSoundEventName m_sKillExplosionSound;
	CSoundEventName m_sLastHitSound;
	CSoundEventName m_sTargetAcquiredLocalSound;
	CSoundEventName m_sTargetAcquiredSound;
	// MPropertyStartGroup = "Stats"
	float32 m_flIdleTurnSpeed;
	float32 m_flIdleTurnAngles;
	float32 m_flTrooperTakeDamageMult;
	float32 m_flNeutralTakeDamageMulti;
	float32 m_flNotifyEventTime;
	float32 m_flNearDeathDuration;
	float32 m_flMinimapRevealTime;
	float32 m_flMinLifetime;
	float32 m_flAttackThinkTime;
};
