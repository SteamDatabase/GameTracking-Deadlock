// MGetKV3ClassDefaults = {
//	"_class": "CNPC_Trooper_GraphController",
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
//	"m_bReloading": null,
//	"m_flVariant": null,
//	"m_bExplosionReact": null,
//	"m_bMedicHeal": null,
//	"m_flExplosionReactRandomTimeScale": null,
//	"m_eTurn": null,
//	"m_eBaseAction": null,
//	"m_bZiplining": null,
//	"m_bFalling": null,
//	"m_bShouldReset": true
//}
class CNPC_Trooper_GraphController : public CAI_CitadelNPC_GraphController
{
	CAnimGraph2ParamOptionalRef< float32 > m_flVariant;
	CAnimGraph2ParamOptionalRef< bool > m_bExplosionReact;
	CAnimGraph2ParamOptionalRef< bool > m_bMedicHeal;
	CAnimGraph2ParamOptionalRef< float32 > m_flExplosionReactRandomTimeScale;
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eTurn;
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_eBaseAction;
	CAnimGraph2ParamOptionalRef< bool > m_bZiplining;
	CAnimGraph2ParamOptionalRef< bool > m_bFalling;
	bool m_bShouldReset;
};
