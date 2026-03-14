// MGetKV3ClassDefaults = {
//	"m_nBehaviors": "",
//	"m_flGravityScale": 1.000000,
//	"m_flFriction": 0.000000,
//	"m_flElasticity": 0.000000,
//	"m_flSpeed": 3500.000000,
//	"m_flUpSpeed": 100.000000,
//	"m_flMaxLinearRange": 0.000000,
//	"m_flVerticalAimBias": 0.000000,
//	"m_eProjectileShape": "Sphere",
//	"m_flTriggerRadius": 1.500000,
//	"m_flPhysicsRadius": 1.500000,
//	"m_flBulletOnlyTriggerRadius": 0.000000,
//	"m_vecCapsulePhysicsCenter1":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vecCapsulePhysicsCenter2":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_flCapsulePhysicsRadius": 1.500000,
//	"m_vecCapsuleTriggerCenter1":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vecCapsuleTriggerCenter2":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_flCapsuleTriggerRadius": 1.500000,
//	"m_particle": "",
//	"m_bHideWarningParticle": false,
//	"m_warningParticle": "",
//	"m_customModel": "",
//	"m_flProjectileModelScale": 1.000000,
//	"m_HitSound": "",
//	"m_HitTargetSound": "",
//	"m_HitWorldSound": "",
//	"m_DetonateSound": "",
//	"m_LoopingSound": "",
//	"m_WarningSound": "",
//	"m_flTrackingDampingCoefficient": 0.000000,
//	"m_flTrackingDuration": 0.000000,
//	"m_flTrackingStartTime": 0.000000,
//	"m_flTrackingEndTime": 0.000000,
//	"m_AutoProjectileModifier":
//	{
//	}
//}
class ProjectileInfo_t
{
	ProjectileBehaviorFlag_t m_nBehaviors;
	// MPropertyStartGroup = "Physics"
	float32 m_flGravityScale;
	float32 m_flFriction;
	float32 m_flElasticity;
	float32 m_flSpeed;
	float32 m_flUpSpeed;
	float32 m_flMaxLinearRange;
	float32 m_flVerticalAimBias;
	ProjectileShape_t m_eProjectileShape;
	// MPropertySuppressExpr = "m_eProjectileShape != Sphere"
	float32 m_flTriggerRadius;
	// MPropertySuppressExpr = "m_eProjectileShape != Sphere"
	float32 m_flPhysicsRadius;
	// MPropertySuppressExpr = "m_eProjectileShape != Sphere"
	// MPropertyFriendlyName = "Additional Bullet Only Trigger Radius"
	// MPropertyDescription = "When > 0, creates an additional trigger volume of this radius that bullets will touch and call OnBulletHit().  Useful when we want bullets to be more generous at hitting this projectile."
	float32 m_flBulletOnlyTriggerRadius;
	// MPropertySuppressExpr = "m_eProjectileShape != Capsule"
	Vector m_vecCapsulePhysicsCenter1;
	// MPropertySuppressExpr = "m_eProjectileShape != Capsule"
	Vector m_vecCapsulePhysicsCenter2;
	// MPropertySuppressExpr = "m_eProjectileShape != Capsule"
	float32 m_flCapsulePhysicsRadius;
	// MPropertySuppressExpr = "m_eProjectileShape != Capsule"
	Vector m_vecCapsuleTriggerCenter1;
	// MPropertySuppressExpr = "m_eProjectileShape != Capsule"
	Vector m_vecCapsuleTriggerCenter2;
	// MPropertySuppressExpr = "m_eProjectileShape != Capsule"
	float32 m_flCapsuleTriggerRadius;
	// MPropertyStartGroup = "Visuals"
	// MPropertyFriendlyName = "Trail Particle"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_particle;
	bool m_bHideWarningParticle;
	// MPropertyFriendlyName = "Warning Particle"
	// MPropertySuppressExpr = "m_bHideWarningParticle == true"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_warningParticle;
	// MPropertyFriendlyName = "Projectile Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_customModel;
	float32 m_flProjectileModelScale;
	// MPropertyStartGroup = "Sounds"
	// MPropertyDescription = "Plays when a projectile hits a valid target - or the world. Not the same as detonating, just colliding."
	CSoundEventName m_HitSound;
	// MPropertyDescription = "Plays when a projectile hits a valid target ONLY. Should use a soundevent with base 'Base.Ability.Hit'."
	CSoundEventName m_HitTargetSound;
	// MPropertyDescription = "Plays when a projectile hits the world ONLY."
	CSoundEventName m_HitWorldSound;
	// MPropertyDescription = "Plays when a projectile detonates. Not all projectiles detonate."
	CSoundEventName m_DetonateSound;
	// MPropertyDescription = "Plays while a projectile is alive."
	CSoundEventName m_LoopingSound;
	// MPropertyDescription = "Plays a warning sound when a projectile hits a surface, but before it detonates. Plays ONLY if a warning particle is also created."
	CSoundEventName m_WarningSound;
	// MPropertyStartGroup = "Tracking"
	float32 m_flTrackingDampingCoefficient;
	float32 m_flTrackingDuration;
	float32 m_flTrackingStartTime;
	float32 m_flTrackingEndTime;
	// MPropertyStartGroup = "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AutoProjectileModifier;
};
