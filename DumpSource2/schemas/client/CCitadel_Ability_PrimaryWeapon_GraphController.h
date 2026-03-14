// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_Ability_PrimaryWeapon_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_bAiming": null,
//	"m_flReloadSpeed": null,
//	"m_bReloadingSingleRoundStart": null,
//	"m_bReloadingSingleRound": null,
//	"m_bReloading": null,
//	"m_bShootAlt": null,
//	"m_bShoot": null,
//	"m_Shoot": null,
//	"m_Muzzle": null,
//	"m_ReloadState": null,
//	"m_ReloadFraction": null,
//	"m_ReloadSpeed": null,
//	"m_AmmoFraction": null,
//	"m_nShootPriority": -1,
//	"m_nReloadPriority": -1,
//	"m_flLatchedReloadSpeed": 1.000000,
//	"m_symLastMuzzle": ""
//}
class CCitadel_Ability_PrimaryWeapon_GraphController : public CCitadelBaseAbilityGraphController
{
	CAnimGraphParamRef< bool > m_bAiming;
	CAnimGraphParamRef< float32 > m_flReloadSpeed;
	CAnimGraphParamRef< bool > m_bReloadingSingleRoundStart;
	CAnimGraphParamRef< bool > m_bReloadingSingleRound;
	CAnimGraphParamRef< bool > m_bReloading;
	CAnimGraphParamRef< bool > m_bShootAlt;
	CAnimGraphParamRef< bool > m_bShoot;
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_Shoot;
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_Muzzle;
	CAnimGraphParamRef< CGlobalSymbol > m_ReloadState;
	CAnimGraphParamRef< float32 > m_ReloadFraction;
	CAnimGraphParamRef< float32 > m_ReloadSpeed;
	CAnimGraphParamRef< float32 > m_AmmoFraction;
	int32 m_nShootPriority;
	int32 m_nReloadPriority;
	float32 m_flLatchedReloadSpeed;
	CGlobalSymbol m_symLastMuzzle;
};
