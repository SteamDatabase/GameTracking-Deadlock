// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_GuidedArrow_OwlModel_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_flRoll": null,
//	"m_flPitch": null,
//	"m_bFast": null
//}
class CCitadel_GuidedArrow_OwlModel_GraphController : public CAnimGraphControllerBase
{
	CAnimGraph2ParamOptionalRef< float32 > m_flRoll;
	CAnimGraph2ParamOptionalRef< float32 > m_flPitch;
	CAnimGraph2ParamOptionalRef< bool > m_bFast;
};
