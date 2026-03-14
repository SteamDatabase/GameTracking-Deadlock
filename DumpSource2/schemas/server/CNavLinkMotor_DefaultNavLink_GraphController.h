// MGetKV3ClassDefaults = {
//	"_class": "CNavLinkMotor_DefaultNavLink_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_tNavLinkTarget": null,
//	"m_sNavLinkEntryType": null,
//	"m_sNavLinkExitType": null,
//	"m_sNavLinkState": null,
//	"m_sNavLinkEntryGait": null,
//	"m_sNavLinkExitGait": null,
//	"m_vNavLinkExitDirection": null
//}
class CNavLinkMotor_DefaultNavLink_GraphController : public CAnimGraphControllerBase
{
	CAnimGraph2ParamRef< CTransform > m_tNavLinkTarget;
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_sNavLinkEntryType;
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_sNavLinkExitType;
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_sNavLinkState;
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_sNavLinkEntryGait;
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_sNavLinkExitGait;
	CAnimGraph2ParamOptionalRef< Vector > m_vNavLinkExitDirection;
};
