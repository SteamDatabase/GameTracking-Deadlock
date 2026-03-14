// MGetKV3ClassDefaults = {
//	"_class": "AttackData_t",
//	"m_flReloadPauseDuration": 1.000000,
//	"m_flPrimaryAttackPauseDuration": 0.700000,
//	"m_flEnemySlowOnHitDuration": 0.600000,
//	"m_flEnemySlowOnHitSpeed": 50.000000,
//	"bIsHeavyAttack": false,
//	"m_bCanBeParried": true,
//	"m_flCooldownOnMiss": 0.000000,
//	"m_flCooldownOnHit": 0.000000,
//	"m_flTraceConeHalfWidth": 48.000000,
//	"m_flKnockUpStrength": 0.000000,
//	"m_bApplyScreenShake": false,
//	"m_SpeedBonusCurve":
//	{
//		"m_spline":
//		[
//		],
//		"m_tangents":
//		[
//		],
//		"m_vDomainMins":
//		[
//			0.000000,
//			0.000000
//		],
//		"m_vDomainMaxs":
//		[
//			0.000000,
//			0.000000
//		]
//	},
//	"m_MovementSpeedCurve":
//	{
//		"m_spline":
//		[
//		],
//		"m_tangents":
//		[
//		],
//		"m_vDomainMins":
//		[
//			0.000000,
//			0.000000
//		],
//		"m_vDomainMaxs":
//		[
//			0.000000,
//			0.000000
//		]
//	},
//	"m_flMovementAcc": 300.000000,
//	"m_flAttackStateTime": 0.300000,
//	"m_Trigger": "",
//	"m_strActivateSound": "",
//	"m_strHitSound": "",
//	"m_strHitHeroSound": "",
//	"m_strHitDebrisSound": "",
//	"m_strMissSound": "",
//	"m_strMeleeDashSound": "",
//	"m_MeleeActivateParticle": "particles/abilities/melee/melee_activate.vpcf",
//	"m_MeleeSwingParticle": "particles/abilities/melee_swing.vpcf",
//	"m_MeleeAttackParticle": "",
//	"m_MeleeImpactParticle": "particles/abilities/melee_impact.vpcf",
//	"m_cameraSequenceAttackStart":
//	{
//		"m_strToken": "",
//		"m_bIsEmpty": false,
//		"m_nPriority": 1,
//		"m_vecDistanceOperations":
//		[
//		],
//		"m_vecFOVOperations":
//		[
//		],
//		"m_vecTargetPosOperations":
//		[
//		],
//		"m_vecVertOffsetOperations":
//		[
//		],
//		"m_vecHorizOffsetOperations":
//		[
//		]
//	}
//}
class AttackData_t
{
	// MPropertyDescription = "When this attack is used, pause weapon reloads for this long"
	float32 m_flReloadPauseDuration;
	// MPropertyDescription = "When this attack is used, pause shooting for this long"
	float32 m_flPrimaryAttackPauseDuration;
	// MPropertyDescription = "Enemies are slowed for this duration when hit by this attack"
	float32 m_flEnemySlowOnHitDuration;
	// MPropertyDescription = "Enemies are slowed to this speed when hit by this attack"
	float32 m_flEnemySlowOnHitSpeed;
	// MPropertyDescription = "Is this a Heavy melee attack? Otherwise it's considered light."
	bool bIsHeavyAttack;
	// MPropertyDescription = "When true, this attack can be parried"
	bool m_bCanBeParried;
	// MPropertyDescription = "How long after triggering until we can perform another melee attack"
	float32 m_flCooldownOnMiss;
	float32 m_flCooldownOnHit;
	// MPropertyDescription = "Half width of the cone at the player"
	float32 m_flTraceConeHalfWidth;
	// MPropertyDescription = "How much force to apply upward on hit"
	float32 m_flKnockUpStrength;
	// MPropertyDescription = "Trigger a big screen shake when this attack hits"
	bool m_bApplyScreenShake;
	// MPropertyDescription = "The curve defining move speed bonus/penalty.  This is how we apply the post-movement controller movement slow."
	CPiecewiseCurve m_SpeedBonusCurve;
	// MPropertyDescription = "The curve defining movement controller target speed.  This is what defines the speed boost"
	CPiecewiseCurve m_MovementSpeedCurve;
	// MPropertyDescription = "How much acceleration to apply to use when following the movement speed curve"
	float32 m_flMovementAcc;
	// MPropertyDescription = "How long to be in the attacking state once the attack triggers"
	float32 m_flAttackStateTime;
	// MPropertyDescription = "Animgraph trigger parameter for this attack"
	CGlobalSymbol m_Trigger;
	// MPropertyStartGroup = "Sounds"
	// MPropertyDescription = "Sound to play when this attack activates"
	CSoundEventName m_strActivateSound;
	// MPropertyDescription = "Sound to play if this attack hits"
	CSoundEventName m_strHitSound;
	CSoundEventName m_strHitHeroSound;
	CSoundEventName m_strHitDebrisSound;
	// MPropertyDescription = "Sound to play if this attack misses"
	CSoundEventName m_strMissSound;
	// MPropertyDescription = "Sound to play when starting the movement dash of this attack"
	CSoundEventName m_strMeleeDashSound;
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeActivateParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeAttackParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeImpactParticle;
	// MPropertyStartGroup = "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceAttackStart;
};
