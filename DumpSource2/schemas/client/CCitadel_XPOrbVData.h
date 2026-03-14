// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_XPOrbVData",
//	"m_bIsObjective": false,
//	"m_strOrbClaimed": "",
//	"m_strOrbClaimedTeammate": "",
//	"m_strOrbDenied": "",
//	"m_strOrbDeniedPlayer": "",
//	"m_strOrbHitConfirm": "",
//	"m_strOrbHitPredicted": "",
//	"m_sOrbModel": "",
//	"m_sPredictedHitLimboGlowParticle": "",
//	"m_sFriendlyHitConfirmParticle": "",
//	"m_sEnemyHitConfirmParticle": "",
//	"m_sFriendlyGlowParticle": "",
//	"m_sEnemyGlowParticle": "",
//	"m_sGoldReceivedParticle": "",
//	"m_sFriendlyOrbDeniedParticle": "",
//	"m_sEnemyOrbDeniedParticle": "",
//	"m_sFriendlyOrbEarnedParticle": "",
//	"m_sEnemyOrbEarnedParticle": "",
//	"m_flOrbSpawnDelayMin": 0.300000,
//	"m_flOrbSpawnDelayMax": 0.300000,
//	"m_flOrbSpawnOffsetZ": 48.000000,
//	"m_flOrbSpawnOffsetRandomXYZ": 0.000000,
//	"m_flGravityScale": 0.500000,
//	"m_flLateralSpeedMin": 30.000000,
//	"m_flLateralSpeedMax": 50.000000,
//	"m_flLateralMoveDuration": 4.000000,
//	"m_flUpSpeedMin": 320.000000,
//	"m_flUpSpeedMax": 320.000000,
//	"m_flDownSpeed": 50.000000,
//	"m_flBurstSpeedMultiplier": 5.000000,
//	"m_flBurstSpeedDuration": 0.200000,
//	"m_flOscillateFrequency": 0.000000,
//	"m_flLifeTime": 4.000000,
//	"m_flRadius": 1.000000,
//	"m_flCollisionRadius": 12.000000,
//	"m_flInvulDurationMin": 0.460000,
//	"m_flInvulDurationMax": 0.580000,
//	"m_bUseKillerPlaneOffsets": false,
//	"m_flKillerPlaneOffset": 20.000000,
//	"m_flKillerPlaneHorizontalDecayRate": 10.000000,
//	"m_flKillerPlaneHorizontalSpeedX": 65.000000,
//	"m_flKillerPlaneHorizontalSpeedY": 50.000000,
//	"m_flKillerPlaneVerticalSpeed": 40.000000,
//	"m_flKillerPlaneSpeedNoise": 10.000000,
//	"m_flKillerPlaneLaunchOffset": 10.000000,
//	"m_flKillerPlaneLaunchDelay": -1.000000,
//	"m_flOrbClaimWindow": 0.000000
//}
class CCitadel_XPOrbVData : public CEntitySubclassVDataBase
{
	bool m_bIsObjective;
	// MPropertyStartGroup = "Sounds"
	// MPropertyDescription = "Played to the player who claimed the orb."
	CSoundEventName m_strOrbClaimed;
	// MPropertyDescription = "Played to the teammates of the player who claimed the orb."
	CSoundEventName m_strOrbClaimedTeammate;
	// MPropertyDescription = "Played to the player when they denied an enemy orb."
	CSoundEventName m_strOrbDenied;
	// MPropertyDescription = "Played to assigned earners when an enemy denied their orb."
	CSoundEventName m_strOrbDeniedPlayer;
	// MPropertyDescription = "Played when the server receives a hit on the orb but is waiting to fully claim it."
	CSoundEventName m_strOrbHitConfirm;
	// MPropertyDescription = "Played when the client hit the orb but it isn't confirmed by the server yet."
	CSoundEventName m_strOrbHitPredicted;
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sOrbModel;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sPredictedHitLimboGlowParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyHitConfirmParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyHitConfirmParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyGlowParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyGlowParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sGoldReceivedParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyOrbDeniedParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyOrbDeniedParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyOrbEarnedParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyOrbEarnedParticle;
	// MPropertyStartGroup = "Behavior"
	float32 m_flOrbSpawnDelayMin;
	float32 m_flOrbSpawnDelayMax;
	float32 m_flOrbSpawnOffsetZ;
	float32 m_flOrbSpawnOffsetRandomXYZ;
	float32 m_flGravityScale;
	float32 m_flLateralSpeedMin;
	float32 m_flLateralSpeedMax;
	float32 m_flLateralMoveDuration;
	float32 m_flUpSpeedMin;
	float32 m_flUpSpeedMax;
	float32 m_flDownSpeed;
	float32 m_flBurstSpeedMultiplier;
	float32 m_flBurstSpeedDuration;
	float32 m_flOscillateFrequency;
	float32 m_flLifeTime;
	float32 m_flRadius;
	float32 m_flCollisionRadius;
	float32 m_flInvulDurationMin;
	float32 m_flInvulDurationMax;
	bool m_bUseKillerPlaneOffsets;
	float32 m_flKillerPlaneOffset;
	float32 m_flKillerPlaneHorizontalDecayRate;
	float32 m_flKillerPlaneHorizontalSpeedX;
	float32 m_flKillerPlaneHorizontalSpeedY;
	float32 m_flKillerPlaneVerticalSpeed;
	float32 m_flKillerPlaneSpeedNoise;
	float32 m_flKillerPlaneLaunchOffset;
	float32 m_flKillerPlaneLaunchDelay;
	float32 m_flOrbClaimWindow;
};
