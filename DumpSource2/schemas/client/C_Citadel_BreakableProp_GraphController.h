// MGetKV3ClassDefaults = {
//	"_class": "C_Citadel_BreakableProp_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_bSetInit": null,
//	"m_flDamageReceived": null,
//	"m_bOnRespawn": null,
//	"m_bHitTrigger": null
//}
class C_Citadel_BreakableProp_GraphController : public CAnimGraphControllerBase
{
	CAnimGraphParamRef< bool > m_bSetInit;
	CAnimGraphParamRef< float32 > m_flDamageReceived;
	CAnimGraphParamRef< bool > m_bOnRespawn;
	CAnimGraphParamRef< bool > m_bHitTrigger;
};
