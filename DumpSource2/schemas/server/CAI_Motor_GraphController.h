// MGetKV3ClassDefaults = {
//	"_class": "CAI_Motor_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_bNavLinkIsOnPath": null,
//	"m_flPathDistanceToNavLink": null,
//	"m_sMovementGaitSetNext": null,
//	"m_sNextStance": null,
//	"m_sMovementGait": null,
//	"m_sMovementGaitSet": null,
//	"m_sMovementGaitPrevious": null,
//	"m_sMovementGaitSetPrevious": null,
//	"m_sCurrentStance": null,
//	"m_sPreviousStance": null,
//	"m_sCustomMovementGait": null,
//	"m_bWalking": null,
//	"m_sAllowMovementOffPath": "Movement_Allow_Off_Path",
//	"m_sAllowMovementOffNavMesh": "Movement_Allow_Off_Nav_Mesh",
//	"m_sRestrictMovementToNavMeshDuringCustomMove": "Movement_Restrict_To_Nav_Mesh_During_CustomMove",
//	"m_sKeepPathActiveStop": "Keep_Path_Active_Stop"
//}
class CAI_Motor_GraphController : public CAnimGraphControllerBase
{
	CAnimGraphParamRef< bool > m_bNavLinkIsOnPath;
	CAnimGraphParamRef< float32 > m_flPathDistanceToNavLink;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementGaitSetNext;
	CAnimGraphParamRef< CGlobalSymbol > m_sNextStance;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementGait;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementGaitSet;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementGaitPrevious;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementGaitSetPrevious;
	CAnimGraphParamRef< CGlobalSymbol > m_sCurrentStance;
	CAnimGraphParamRef< CGlobalSymbol > m_sPreviousStance;
	CAnimGraphParamRef< CGlobalSymbol > m_sCustomMovementGait;
	CAnimGraphParamRef< bool > m_bWalking;
	CAnimGraphTagOptionalRef m_sAllowMovementOffPath;
	CAnimGraphTagOptionalRef m_sAllowMovementOffNavMesh;
	CAnimGraphTagOptionalRef m_sRestrictMovementToNavMeshDuringCustomMove;
	CAnimGraphTagOptionalRef m_sKeepPathActiveStop;
};
