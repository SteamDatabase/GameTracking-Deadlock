// MGetKV3ClassDefaults = {
//	"m_speedRange": 0.000000,
//	"m_stopDistanceRange": 0.000000,
//	"m_hopDistanceRange": 0.000000,
//	"m_flPreferredSpeed": 100.000000,
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
//	"m_bEnabled": true,
//	"m_sGaitId": ""
//}
class CAI_CustomMovementGaitSettings : public CAI_OptionalMovementGaitSettings
{
	// MPropertyFlattenIntoParentRow
	CGlobalSymbol m_sGaitId;
};
