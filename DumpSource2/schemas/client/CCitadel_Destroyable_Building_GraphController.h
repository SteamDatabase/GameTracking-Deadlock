// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_Destroyable_Building_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_bHitTrigger": null,
//	"m_eState": null,
//	"m_flHealth": null,
//	"m_bActive": null,
//	"m_flHealthPercent": null,
//	"m_bVulnerable": null,
//	"m_bDestroyed": null,
//	"m_flExposedDurationFraction": null
//}
class CCitadel_Destroyable_Building_GraphController : public CAnimGraphControllerBase
{
	CAnimGraphParamRef< bool > m_bHitTrigger;
	CAnimGraphParamRef< char* > m_eState;
	CAnimGraphParamRef< float32 > m_flHealth;
	CAnimGraphParamRef< bool > m_bActive;
	CAnimGraphParamRef< float32 > m_flHealthPercent;
	CAnimGraphParamRef< bool > m_bVulnerable;
	CAnimGraphParamRef< bool > m_bDestroyed;
	CAnimGraphParamRef< float32 > m_flExposedDurationFraction;
};
