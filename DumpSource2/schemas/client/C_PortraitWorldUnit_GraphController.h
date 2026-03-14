// MGetKV3ClassDefaults = {
//	"_class": "C_PortraitWorldUnit_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_BaseState": null,
//	"m_ShopState": null
//}
class C_PortraitWorldUnit_GraphController : public CAnimGraphControllerBase
{
	CAnimGraph2ParamRef< CGlobalSymbol > m_BaseState;
	CAnimGraph2ParamRef< CGlobalSymbol > m_ShopState;
};
