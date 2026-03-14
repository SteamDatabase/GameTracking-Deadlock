// MGetKV3ClassDefaults = {
//	"_class": "CAI_BaseNPCGraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_sCurrScheduleName": null,
//	"m_sCurrTaskName": null,
//	"m_sMovementBodySection": null,
//	"m_sActionBodySection": null,
//	"m_sNavLinkSelection": null,
//	"m_vecNavLinkTarget": null,
//	"m_vecNavLinkUp": null,
//	"m_sMovementTransitionForceFacingDisabled": "Movement_Transition_Disable_Force_Facing",
//	"m_flEnemyDistance": null,
//	"m_flEnemyDirection": null,
//	"m_bCanSeeEnemy": null,
//	"m_bEnemyFacingMe": null,
//	"m_bHitTrigger": null,
//	"m_pszNPCState": null,
//	"m_bStunned": null,
//	"m_sBodyIdle": null,
//	"m_sFlashlightMode": null,
//	"m_flFlightSpeedNormalized": null,
//	"m_bMoveSolveNudgeActive": null,
//	"m_flMoveSolveNudgeYaw": null,
//	"m_pszDoorOpenAction": null,
//	"m_flDistanceToDoor": null,
//	"m_bDoorLeft": null,
//	"m_bIsNonZUp": null,
//	"m_bEnemyInVehicle": null,
//	"m_eVehicleMeleeSide": null,
//	"m_bEnableMLLocomotion": null,
//	"m_nNavLinkExternalGraphSlot": 0
//}
class CAI_BaseNPCGraphController : public CAnimGraphControllerBase
{
	CAnimGraphParamRef< CGlobalSymbol > m_sCurrScheduleName;
	CAnimGraphParamRef< CGlobalSymbol > m_sCurrTaskName;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementBodySection;
	CAnimGraphParamRef< CGlobalSymbol > m_sActionBodySection;
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_sNavLinkSelection;
	CAnimGraphParamRef< Vector > m_vecNavLinkTarget;
	CAnimGraphParamRef< Vector > m_vecNavLinkUp;
	CAnimGraphTagOptionalRef m_sMovementTransitionForceFacingDisabled;
	CAnimGraphParamRef< float32 > m_flEnemyDistance;
	CAnimGraphParamRef< float32 > m_flEnemyDirection;
	CAnimGraphParamRef< bool > m_bCanSeeEnemy;
	CAnimGraphParamRef< bool > m_bEnemyFacingMe;
	CAnimGraphParamRef< bool > m_bHitTrigger;
	CAnimGraphParamRef< CGlobalSymbol > m_pszNPCState;
	CAnimGraphParamRef< bool > m_bStunned;
	CAnimGraphParamRef< CGlobalSymbol > m_sBodyIdle;
	CAnimGraphParamRef< CGlobalSymbol > m_sFlashlightMode;
	CAnimGraphParamRef< float32 > m_flFlightSpeedNormalized;
	CAnimGraphParamRef< bool > m_bMoveSolveNudgeActive;
	CAnimGraphParamRef< float32 > m_flMoveSolveNudgeYaw;
	CAnimGraphParamRef< CGlobalSymbol > m_pszDoorOpenAction;
	CAnimGraphParamRef< float32 > m_flDistanceToDoor;
	CAnimGraphParamRef< bool > m_bDoorLeft;
	CAnimGraphParamRef< bool > m_bIsNonZUp;
	CAnimGraphParamRef< bool > m_bEnemyInVehicle;
	CAnimGraphParamRef< CGlobalSymbol > m_eVehicleMeleeSide;
	CAnimGraphParamRef< bool > m_bEnableMLLocomotion;
	int32 m_nNavLinkExternalGraphSlot;
};
