// MGetKV3ClassDefaults = {
//	"_class": "CAI_GroundLocomotion_AG1_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_vMovementCustomTargetPosition": null,
//	"m_vMovementMantleTargetPosition": null,
//	"m_vMovementStartFacePosition": null,
//	"m_vMovementStopFacePosition": null,
//	"m_vMovementHopFacePosition": null,
//	"m_vMovementStopPosition": null,
//	"m_vMovementIdleTurnFacePosition": null,
//	"m_vMovementPlantedTurnFacePosition": null,
//	"m_vMovementDirection": null,
//	"m_flMovementStopDesiredHeading": null,
//	"m_flMovementDesiredHeading": null,
//	"m_flMovementDesiredHeadingDelta": null,
//	"m_flMovementHeading": null,
//	"m_bMovementCodeDriven": null,
//	"m_bMovementShouldMove": null,
//	"m_sMovementHeading": null,
//	"m_sMovementDesiredHeading": null,
//	"m_sMovementStateMachineActive": "Movement_StateMachine_Active",
//	"m_sMovementStopsEnabled": "Movement_Stops_Enabled",
//	"m_sMovementInstantStopsEnabled": "Movement_Stop_Instant_Enabled",
//	"m_sMovementStartsEnabled": "Movement_Starts_Enabled",
//	"m_sMovementIdleTurnsEnabled": "Movement_Stationary_Turns_Enabled",
//	"m_sMovementHopsEnabled": "Movement_Hops_Enabled",
//	"m_sMovementPlantedTurnsEnabled": "Movement_Planted_Turns_Enabled",
//	"m_sMovementStrafeSupported": "Movement_Strafe_Supported",
//	"m_sMovementTransitionBlockAll": "Movement_Transition_Block_All",
//	"m_sMovementTransitionBlockIdle": "Movement_Transition_Block_Idle",
//	"m_sMovementTransitionBlockLoop": "Movement_Transition_Block_Loop",
//	"m_sMovementTransitionBlockIdleTurn": "Movement_Transition_Block_Idle_Turn",
//	"m_sMovementTransitionBlockStart": "Movement_Transition_Block_Start",
//	"m_sMovementTransitionBlockStop": "Movement_Transition_Block_Stop",
//	"m_sMovementTransitionBlockHop": "Movement_Transition_Block_Hop",
//	"m_sMovementTransitionBlockPlantedTurn": "Movement_Transition_Block_Planted_Turn",
//	"m_sMovementRightFootDown": "Movement_Right_Foot_Down",
//	"m_sMovementLeftFootDown": "Movement_Left_Foot_Down",
//	"m_sMovementStumbleEnabled": "Movement_Stumble_Enabled",
//	"m_sMovementBashEnabled": "Movement_Bash_Enabled"
//}
class CAI_GroundLocomotion_AG1_GraphController : public CAnimGraphControllerBase
{
	CAnimGraphParamRef< Vector > m_vMovementCustomTargetPosition;
	CAnimGraphParamRef< Vector > m_vMovementMantleTargetPosition;
	CAnimGraphParamRef< Vector > m_vMovementStartFacePosition;
	CAnimGraphParamRef< Vector > m_vMovementStopFacePosition;
	CAnimGraphParamRef< Vector > m_vMovementHopFacePosition;
	CAnimGraphParamRef< Vector > m_vMovementStopPosition;
	CAnimGraphParamRef< Vector > m_vMovementIdleTurnFacePosition;
	CAnimGraphParamRef< Vector > m_vMovementPlantedTurnFacePosition;
	CAnimGraphParamRef< Vector > m_vMovementDirection;
	CAnimGraphParamRef< float32 > m_flMovementStopDesiredHeading;
	CAnimGraphParamRef< float32 > m_flMovementDesiredHeading;
	CAnimGraphParamRef< float32 > m_flMovementDesiredHeadingDelta;
	CAnimGraphParamRef< float32 > m_flMovementHeading;
	CAnimGraphParamRef< bool > m_bMovementCodeDriven;
	CAnimGraphParamRef< bool > m_bMovementShouldMove;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementHeading;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementDesiredHeading;
	CAnimGraphTagOptionalRef m_sMovementStateMachineActive;
	CAnimGraphTagOptionalRef m_sMovementStopsEnabled;
	CAnimGraphTagOptionalRef m_sMovementInstantStopsEnabled;
	CAnimGraphTagOptionalRef m_sMovementStartsEnabled;
	CAnimGraphTagOptionalRef m_sMovementIdleTurnsEnabled;
	CAnimGraphTagOptionalRef m_sMovementHopsEnabled;
	CAnimGraphTagOptionalRef m_sMovementPlantedTurnsEnabled;
	CAnimGraphTagOptionalRef m_sMovementStrafeSupported;
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockAll;
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdle;
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockLoop;
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdleTurn;
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockStart;
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockStop;
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockHop;
	CAnimGraphTagOptionalRef m_sMovementTransitionBlockPlantedTurn;
	CAnimGraphTagOptionalRef m_sMovementRightFootDown;
	CAnimGraphTagOptionalRef m_sMovementLeftFootDown;
	CAnimGraphTagOptionalRef m_sMovementStumbleEnabled;
	CAnimGraphTagOptionalRef m_sMovementBashEnabled;
};
