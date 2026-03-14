// MGetKV3ClassDefaults = {
//	"_class": "CFacingServices_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_flFacingHeading": null,
//	"m_vFacingTarget": null,
//	"m_sMovementStrafingState": null,
//	"m_sFacingReason": null,
//	"m_sFacingModeUsePath": "Entity_Facing_Mode_Use_Path"
//}
class CFacingServices_GraphController : public CAnimGraphControllerBase
{
	CAnimGraphParamRef< float32 > m_flFacingHeading;
	CAnimGraphParamRef< Vector > m_vFacingTarget;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementStrafingState;
	CAnimGraphParamRef< CGlobalSymbol > m_sFacingReason;
	CAnimGraphTagOptionalRef m_sFacingModeUsePath;
};
