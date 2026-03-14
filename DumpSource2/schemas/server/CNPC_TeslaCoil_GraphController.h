// MGetKV3ClassDefaults = {
//	"_class": "CNPC_TeslaCoil_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_bHasTarget": null,
//	"m_flPanel1": null,
//	"m_flVelocity": null
//}
class CNPC_TeslaCoil_GraphController : public CNPC_SimpleAnimatingAI_GraphController
{
	CAnimGraphParamRef< float32 > m_flPanel1;
	CAnimGraphParamRef< float32 > m_flVelocity;
};
