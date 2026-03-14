// MGetKV3ClassDefaults = {
//	"_class": "CitadelCameraHorizOffsetOperationDef_t",
//	"m_eCameraOperation": "k_ECameraOp_Approach",
//	"m_bValuesAreRelative": false,
//	"m_flDelay": 0.000000,
//	"m_flMaintainDuration": 0.000000,
//	"m_flApproachSpeed": 600.000000,
//	"m_flApproachAcceleration": 1000.000000,
//	"m_flApproachMinDuration": 0.000000,
//	"m_flApproachTarget": 0.000000,
//	"m_vApproachTarget":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_bApproachDefault": false,
//	"m_flSpringStrength": 10.000000,
//	"m_flSpringMinSpeed": 0.000000,
//	"m_flSpringMaxDuration": 0.000000,
//	"m_bSpringToDefault": true,
//	"m_flSpringTarget": 0.000000,
//	"m_vSpringTarget":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_bLerpStartAtCurrent": true,
//	"m_bLerpEndAtDefault": true,
//	"m_flLerpStart": 0.000000,
//	"m_flLerpEnd": 0.000000,
//	"m_vLerpStart":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vLerpEnd":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_flLerpBias": 0.500000,
//	"m_flLerpGain": 0.500000,
//	"m_flLerpDuration": 1.000000,
//	"m_flLagMinDuration": 0.000000,
//	"m_flLagTime": 0.000000,
//	"m_flLagMaxSpeed": 0.000000,
//	"m_flLagSpringStrength": 0.000000,
//	"m_bIncreaseSpringStrengthToKeepTargetOnScreen": true,
//	"m_nCameraParam": 6
//}
class CitadelCameraHorizOffsetOperationDef_t : public CitadelCameraOperationDef_t
{
	// MPropertyHideField
	int32 m_nCameraParam;
};
