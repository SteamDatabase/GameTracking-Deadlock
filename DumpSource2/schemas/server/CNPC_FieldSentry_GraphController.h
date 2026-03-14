// MGetKV3ClassDefaults = {
//	"_class": "CNPC_FieldSentry_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_bHasTarget": null,
//	"m_flPanel1": null,
//	"m_flVelocity": null,
//	"m_bShoot": null
//}
class CNPC_FieldSentry_GraphController : public CNPC_SimpleAnimatingAI_GraphController
{
	CAnimGraphParamRef< float32 > m_flPanel1;
	CAnimGraphParamRef< float32 > m_flVelocity;
	CAnimGraphParamRef< bool > m_bShoot;
};
