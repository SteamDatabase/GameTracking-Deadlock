// MGetKV3ClassDefaults = {
//	"_class": "CAI_CitadelNPC_GraphController",
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
//	"m_nNavLinkExternalGraphSlot": 0,
//	"m_flRandomSeed": null,
//	"m_flTimeScale": null,
//	"m_flHealthPct": null,
//	"m_bHasTarget": null,
//	"m_bInAir": null,
//	"m_flMoveSpeed": null,
//	"m_flForwardSpeed": null,
//	"m_flStrafeSpeed": null,
//	"m_flVerticalSpeed": null,
//	"m_flLookHeading": null,
//	"m_flLookPitch": null,
//	"m_vLookTarget": null,
//	"m_bMeleeAttack": null,
//	"m_bRangedAttack": null,
//	"m_bKill": null,
//	"m_eFlinch": null,
//	"m_nHitLayerTrigger": null,
//	"m_pszDamageState": null,
//	"m_flHealth": null,
//	"m_flTimeScale1": null,
//	"m_bBeam": null,
//	"m_bCrouching": null,
//	"m_bInAir1": null,
//	"m_bHasTarget1": null,
//	"m_bReloading": null
//}
class CAI_CitadelNPC_GraphController : public CAI_BaseNPCGraphController
{
	CAnimGraph2ParamOptionalRef< float32 > m_flRandomSeed;
	CAnimGraph2ParamOptionalRef< float32 > m_flTimeScale;
	CAnimGraph2ParamOptionalRef< float32 > m_flHealthPct;
	CAnimGraph2ParamOptionalRef< bool > m_bHasTarget;
	CAnimGraph2ParamOptionalRef< bool > m_bInAir;
	CAnimGraph2ParamOptionalRef< float32 > m_flMoveSpeed;
	CAnimGraph2ParamOptionalRef< float32 > m_flForwardSpeed;
	CAnimGraph2ParamOptionalRef< float32 > m_flStrafeSpeed;
	CAnimGraph2ParamOptionalRef< float32 > m_flVerticalSpeed;
	CAnimGraph2ParamOptionalRef< float32 > m_flLookHeading;
	CAnimGraph2ParamOptionalRef< float32 > m_flLookPitch;
	CAnimGraph2ParamOptionalRef< Vector > m_vLookTarget;
	CAnimGraph2ParamOptionalRef< bool > m_bMeleeAttack;
	CAnimGraph2ParamOptionalRef< bool > m_bRangedAttack;
	CAnimGraph2ParamOptionalRef< bool > m_bKill;
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eFlinch;
	CAnimGraphParamRef< int32 > m_nHitLayerTrigger;
	CAnimGraphParamRef< char* > m_pszDamageState;
	CAnimGraphParamRef< float32 > m_flHealth;
	CAnimGraphParamRef< float32 > m_flTimeScale1;
	CAnimGraphParamRef< bool > m_bBeam;
	CAnimGraphParamRef< bool > m_bCrouching;
	CAnimGraphParamRef< bool > m_bInAir1;
	CAnimGraphParamRef< bool > m_bHasTarget1;
	CAnimGraphParamRef< bool > m_bReloading;
};
