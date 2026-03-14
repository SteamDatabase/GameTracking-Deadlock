// MGetKV3ClassDefaults = {
//	"_class": "CNPC_BaseDefenseSentry_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_bHasTarget": null,
//	"m_flPanel1": null,
//	"m_bUnpackInstant": null,
//	"m_flVelocity": null,
//	"m_bAlert": null
//}
class CNPC_BaseDefenseSentry_GraphController : public CNPC_SimpleAnimatingAI_GraphController
{
	CAnimGraphParamRef< float32 > m_flPanel1;
	CAnimGraphParamRef< bool > m_bUnpackInstant;
	CAnimGraphParamRef< float32 > m_flVelocity;
	CAnimGraphParamRef< bool > m_bAlert;
};
