// MGetKV3ClassDefaults = {
//	"_class": "CNavLinkMotor_Legacy_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_tNavLinkTarget": null
//}
class CNavLinkMotor_Legacy_GraphController : public CAnimGraphControllerBase
{
	CAnimGraph2ParamRef< CTransform > m_tNavLinkTarget;
};
