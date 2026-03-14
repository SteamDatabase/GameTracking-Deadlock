// MGetKV3ClassDefaults = {
//	"_class": "CAI_GroundLocomotion_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_stopTarget":
//	{
//		"m_transform":
//		[
//			0.000000,
//			0.000000,
//			0.000000,
//			1.000000,
//			0.000000,
//			0.000000,
//			0.000000,
//			1.000000
//		],
//		"m_hEntity": null
//	},
//	"m_idleTurnTarget":
//	{
//		"m_transform":
//		[
//			0.000000,
//			0.000000,
//			0.000000,
//			1.000000,
//			0.000000,
//			0.000000,
//			0.000000,
//			1.000000
//		],
//		"m_hEntity": null
//	},
//	"m_tStopTarget": null,
//	"m_tIdleTurnTarget": null,
//	"m_sMovementStopType": null,
//	"m_sMovementState": null,
//	"m_sMovementStrafeDirection": null,
//	"m_sMovementCustom": null,
//	"m_sMovementCustomShared": null,
//	"m_vMovementDirection": null,
//	"m_vMovementDirectionCurrent": null,
//	"m_vMovementPlantedTurnDirection": null,
//	"m_flMovementTargetSpeed": null,
//	"m_flMovementCurrentSpeed": null,
//	"m_flMovementLean": null,
//	"m_flMovementStrafeAngleForward": null,
//	"m_flMovementStrafeAngleBackward": null,
//	"m_flDistanceToStop": null,
//	"m_bMovementCustomFromMovement": null,
//	"m_bMovementStateRestart": null,
//	"m_sMovementDebugBadZoneState": null,
//	"m_sMovementRightBadZonePassAllowed": "Movement_Right_Bad_Zone_Pass_Allowed",
//	"m_sMovementLeftBadZonePassAllowed": "Movement_Left_Bad_Zone_Pass_Allowed",
//	"m_sMovementDisableStateTimeout": "Movement_Disable_State_Timeout"
//}
class CAI_GroundLocomotion_GraphController : public CAnimGraphControllerBase
{
	CRelativeTransform m_stopTarget;
	CRelativeTransform m_idleTurnTarget;
	CAnimGraph2ParamOptionalRef< CTransform > m_tStopTarget;
	CAnimGraph2ParamOptionalRef< CTransform > m_tIdleTurnTarget;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementStopType;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementState;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementStrafeDirection;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementCustom;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementCustomShared;
	CAnimGraphParamRef< Vector > m_vMovementDirection;
	CAnimGraphParamRef< Vector > m_vMovementDirectionCurrent;
	CAnimGraphParamRef< Vector > m_vMovementPlantedTurnDirection;
	CAnimGraphParamRef< float32 > m_flMovementTargetSpeed;
	CAnimGraphParamRef< float32 > m_flMovementCurrentSpeed;
	CAnimGraphParamRef< float32 > m_flMovementLean;
	CAnimGraphParamRef< float32 > m_flMovementStrafeAngleForward;
	CAnimGraphParamRef< float32 > m_flMovementStrafeAngleBackward;
	CAnimGraphParamRef< float32 > m_flDistanceToStop;
	CAnimGraphParamRef< bool > m_bMovementCustomFromMovement;
	CAnimGraphParamAutoResetRef m_bMovementStateRestart;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementDebugBadZoneState;
	CAnimGraphTagOptionalRef m_sMovementRightBadZonePassAllowed;
	CAnimGraphTagOptionalRef m_sMovementLeftBadZonePassAllowed;
	CAnimGraphTagOptionalRef m_sMovementDisableStateTimeout;
};
