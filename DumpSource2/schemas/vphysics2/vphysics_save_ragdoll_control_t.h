// MGetKV3ClassDefaults = {
//	"m_flMinSpringFrequency": 0.000000,
//	"m_flMaxSpringFrequency": 0.000000,
//	"m_flMaxStretch": 0.000000,
//	"m_bSolidCollisionAtZeroWeight": false,
//	"m_bRequiresDynamicBodies": false,
//	"m_bIgnoreTeleport": false,
//	"m_vLinearVelocityAccumulator":
//	[
//		0.000000,
//		0.000000,
//		27085847773831706368278528.000000
//	],
//	"m_vAngularVelocityAccumulator":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vForceAccumulator":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_nBodyCount": 0
//}
class vphysics_save_ragdoll_control_t
{
	float32 m_flMinSpringFrequency;
	float32 m_flMaxSpringFrequency;
	float32 m_flMaxStretch;
	bool m_bSolidCollisionAtZeroWeight;
	bool m_bRequiresDynamicBodies;
	bool m_bIgnoreTeleport;
	Vector m_vLinearVelocityAccumulator;
	RotationVector m_vAngularVelocityAccumulator;
	Vector m_vForceAccumulator;
	int32 m_nBodyCount;
};
