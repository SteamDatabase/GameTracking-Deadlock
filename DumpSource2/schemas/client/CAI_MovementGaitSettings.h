// MGetKV3ClassDefaults = {
//	"m_speedRange": 0.000000,
//	"m_stopDistanceRange": 0.000000,
//	"m_hopDistanceRange": 0.000000,
//	"m_flPreferredSpeed": 75.000000,
//	"m_flStartDistance": 0.000000,
//	"m_flMinTurnRadius": 0.000000,
//	"m_capabilities": "",
//	"m_flAcceleration": 150.000000,
//	"m_flDeceleration": 500.000000,
//	"m_decelerationCurve":
//	{
//		"m_spline":
//		[
//			{
//				"x": 0.000000,
//				"y": 1.000000,
//				"m_flSlopeIncoming": -0.400000,
//				"m_flSlopeOutgoing": -0.400000
//			},
//			{
//				"x": 1.000000,
//				"y": 0.600000,
//				"m_flSlopeIncoming": -0.400000,
//				"m_flSlopeOutgoing": -0.400000
//			}
//		],
//		"m_tangents":
//		[
//			{
//				"m_nIncomingTangent": "CURVE_TANGENT_SPLINE",
//				"m_nOutgoingTangent": "CURVE_TANGENT_SPLINE"
//			},
//			{
//				"m_nIncomingTangent": "CURVE_TANGENT_SPLINE",
//				"m_nOutgoingTangent": "CURVE_TANGENT_SPLINE"
//			}
//		],
//		"m_vDomainMins":
//		[
//			0.000000,
//			0.600000
//		],
//		"m_vDomainMaxs":
//		[
//			1.000000,
//			1.000000
//		]
//	},
//	"m_flProceduralIdleTurnSpeed": 180.000000,
//	"m_heading":
//	{
//		"m_eMode": "eContinuous",
//		"m_bUseBadZones": true,
//		"m_badZones":
//		[
//		],
//		"m_flPredictionLookAhead": 0.000000
//	},
//	"m_flMaxIdleTurnScaleUp": 0.200000,
//	"m_flMovementPlantedTurnAngleThreshold": 120.000000,
//	"m_flBashStartDistance": 0.000000,
//	"m_flMinBashDelay": 3.000000,
//	"m_flMantleDelayRange":
//	[
//		1.000000,
//		4.000000
//	],
//	"m_flMantleStartDistance": 50.000000,
//	"m_bEnabled": true
//}
class CAI_MovementGaitSettings
{
	// MPropertySortPriority = 4
	// MPropertyFriendlyName = "Speed Range (optional)"
	// MPropertySuppressExpr = "m_bEnabled == false"
	CRangeFloat m_speedRange;
	// MPropertySortPriority = 3
	// MPropertySuppressExpr = "m_bEnabled == false"
	CRangeFloat m_stopDistanceRange;
	// MPropertySortPriority = 2
	// MPropertySuppressExpr = "m_bEnabled == false"
	CRangeFloat m_hopDistanceRange;
	// MPropertySortPriority = 5
	// MPropertyFriendlyName = "Speed (Preferred)"
	// MPropertySuppressExpr = "m_bEnabled == false"
	float32 m_flPreferredSpeed;
	// MPropertySortPriority = 1
	// MPropertySuppressExpr = "m_bEnabled == false"
	float32 m_flStartDistance;
	// MPropertySortPriority = 0
	// MPropertyFriendlyName = "Min Turn Radius"
	// MPropertySuppressExpr = "m_bEnabled == false"
	float32 m_flMinTurnRadius;
	// MPropertySortPriority = 6
	// MPropertySuppressExpr = "m_bEnabled == false"
	CBitVecEnum< MovementCapability_t > m_capabilities;
	// MPropertyGroupName = "Additional Settings"
	// MPropertySuppressExpr = "m_bEnabled == false"
	float32 m_flAcceleration;
	// MPropertyGroupName = "Additional Settings"
	// MPropertySuppressExpr = "m_bEnabled == false"
	float32 m_flDeceleration;
	// MPropertyGroupName = "Additional Settings"
	// MPropertySuppressExpr = "m_bEnabled == false"
	CPiecewiseCurve m_decelerationCurve;
	// MPropertyGroupName = "Additional Settings"
	// MPropertySuppressExpr = "m_bEnabled == false"
	float32 m_flProceduralIdleTurnSpeed;
	// MPropertyGroupName = "Additional Settings"
	// MPropertySuppressExpr = "m_bEnabled == false"
	AI_MovementHeadingSettings_t m_heading;
	// MPropertyGroupName = "Additional Settings"
	// MPropertySuppressExpr = "m_bEnabled == false"
	float32 m_flMaxIdleTurnScaleUp;
	// MPropertyGroupName = "Additional Settings"
	// MPropertySuppressExpr = "m_bEnabled == false"
	// MPropertyDescription = "What angle between the current move direction and the direction to the next waypoint will trigger a planted turn. Any value <= 0 will use the sharp angle from the vmdl movement settings."
	float32 m_flMovementPlantedTurnAngleThreshold;
	// MPropertyGroupName = "Additional Settings"
	// MPropertySuppressExpr = "m_bEnabled == false"
	float32 m_flBashStartDistance;
	// MPropertyGroupName = "Additional Settings"
	// MPropertySuppressExpr = "m_bEnabled == false"
	float32 m_flMinBashDelay;
	// MPropertyGroupName = "Additional Settings"
	// MPropertySuppressExpr = "m_bEnabled == false"
	CRangeFloat m_flMantleDelayRange;
	// MPropertyGroupName = "Additional Settings"
	// MPropertySuppressExpr = "m_bEnabled == false"
	float32 m_flMantleStartDistance;
	// MPropertyFlattenIntoParentRow
	bool m_bEnabled;
};
