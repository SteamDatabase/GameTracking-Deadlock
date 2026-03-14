// MGetKV3ClassDefaults = {
//	"_class": "CAI_AnimGraphServices_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_sTaskHandshakeType": null,
//	"m_sTaskHandshakeTypeShared": null,
//	"m_bTaskHandshakeRestart": null,
//	"m_sMovementHandshakeType": null,
//	"m_sMovementHandshakeTypeShared": null,
//	"m_bMovementHandshakeRestart": null,
//	"m_sNavLinkType": null,
//	"m_sNavLinkTypeShared": null,
//	"m_vecHitDirection": null,
//	"m_flHitHeading": null,
//	"m_vecHitOffset": null,
//	"m_flHitStrength": null,
//	"m_nHitBone": null
//}
class CAI_AnimGraphServices_GraphController : public CAnimGraphControllerBase
{
	CAnimGraphParamRef< CGlobalSymbol > m_sTaskHandshakeType;
	CAnimGraphParamRef< CGlobalSymbol > m_sTaskHandshakeTypeShared;
	CAnimGraphParamRef< bool > m_bTaskHandshakeRestart;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementHandshakeType;
	CAnimGraphParamRef< CGlobalSymbol > m_sMovementHandshakeTypeShared;
	CAnimGraphParamRef< bool > m_bMovementHandshakeRestart;
	CAnimGraphParamRef< CGlobalSymbol > m_sNavLinkType;
	CAnimGraphParamRef< CGlobalSymbol > m_sNavLinkTypeShared;
	CAnimGraphParamRef< Vector > m_vecHitDirection;
	CAnimGraphParamRef< float32 > m_flHitHeading;
	CAnimGraphParamRef< Vector > m_vecHitOffset;
	CAnimGraphParamRef< float32 > m_flHitStrength;
	CAnimGraphParamRef< int32 > m_nHitBone;
};
