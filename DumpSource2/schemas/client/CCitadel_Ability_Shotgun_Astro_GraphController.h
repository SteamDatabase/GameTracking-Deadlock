// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_Ability_Shotgun_Astro_GraphController",
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
//	"m_symLastMuzzle": "",
//	"m_bShootForward": null,
//	"m_bShootBackward": null
//}
class CCitadel_Ability_Shotgun_Astro_GraphController : public CCitadel_Ability_PrimaryWeapon_GraphController
{
	CAnimGraphParamRef< bool > m_bShootForward;
	CAnimGraphParamRef< bool > m_bShootBackward;
};
