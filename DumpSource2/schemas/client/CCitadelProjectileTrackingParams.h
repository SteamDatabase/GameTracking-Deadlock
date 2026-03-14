// MGetKV3ClassDefaults = {
//	"m_bDisableSolidCollisions": true,
//	"m_TrackingAmountCurve":
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
//	"m_ProjectileSpeedCurve":
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
//	"m_flMinTrackingTimeBeforeImpact": 0.000000
//}
class CCitadelProjectileTrackingParams
{
	// MPropertyDescription = "Instead of getting stuck on the world, just pass through it."
	bool m_bDisableSolidCollisions;
	// MPropertyDescription = "Determinines the amount of trackin to do, over time. 0 tracking means continue in a straight line. 1.0 tracking means the velocity will be fully turned towards the target."
	CPiecewiseCurve m_TrackingAmountCurve;
	// MPropertyDescription = "Projectile Speed over time."
	CPiecewiseCurve m_ProjectileSpeedCurve;
	// MPropertyDescription = "Projectile won't impact targets until this much time has elapsed."
	float32 m_flMinTrackingTimeBeforeImpact;
};
