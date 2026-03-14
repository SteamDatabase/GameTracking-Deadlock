// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_MobileResupply_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_flDrainScale": null,
//	"m_bStartDrain": null
//}
class CCitadel_MobileResupply_GraphController : public CAnimGraphControllerBase
{
	CAnimGraphParamRef< float32 > m_flDrainScale;
	CAnimGraphParamRef< bool > m_bStartDrain;
};
