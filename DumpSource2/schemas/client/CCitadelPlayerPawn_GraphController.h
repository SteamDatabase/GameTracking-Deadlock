// MGetKV3ClassDefaults = {
//	"_class": "CCitadelPlayerPawn_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_pszSprintState": null,
//	"m_pszFullBodySequence": null,
//	"m_pszFlinchType": null,
//	"m_bShootLean": null,
//	"m_flReloadFraction": null,
//	"m_bMovementInputActive": null,
//	"m_bLowHealth": null,
//	"m_flTimeScale": null,
//	"m_bCrouching": null,
//	"m_bInAir": null,
//	"m_bShopOpen": null,
//	"m_bRespawn": null,
//	"m_sAnimClippedMovement": "AnimClippedMovement",
//	"m_sDisableGravity": "DisableGravity",
//	"m_sDirectAirControl": "DirectAirControl",
//	"m_pszMaxSpeedState": null,
//	"m_pszDeathSequence": null,
//	"m_pszWallAttach": null,
//	"m_bHardLanding": null,
//	"m_flUltCooldownProgress": null,
//	"m_bSpawn": null,
//	"m_flAmmoFraction": null,
//	"m_flLookPitchRelativeToEyes": null,
//	"m_flSlideSurfacePitch": null,
//	"m_flSlideSurfaceRoll": null
//}
class CCitadelPlayerPawn_GraphController : public CAnimGraphControllerBase
{
	CAnimGraphParamRef< char* > m_pszSprintState;
	CAnimGraphParamRef< char* > m_pszFullBodySequence;
	CAnimGraphParamRef< char* > m_pszFlinchType;
	CAnimGraphParamRef< bool > m_bShootLean;
	CAnimGraphParamRef< float32 > m_flReloadFraction;
	CAnimGraphParamRef< bool > m_bMovementInputActive;
	CAnimGraphParamRef< bool > m_bLowHealth;
	CAnimGraphParamRef< float32 > m_flTimeScale;
	CAnimGraphParamRef< bool > m_bCrouching;
	CAnimGraphParamRef< bool > m_bInAir;
	CAnimGraphParamRef< bool > m_bShopOpen;
	CAnimGraphParamRef< bool > m_bRespawn;
	CAnimGraphTagRef m_sAnimClippedMovement;
	CAnimGraphTagRef m_sDisableGravity;
	CAnimGraphTagRef m_sDirectAirControl;
	CAnimGraphParamRef< char* > m_pszMaxSpeedState;
	CAnimGraphParamRef< char* > m_pszDeathSequence;
	CAnimGraphParamRef< char* > m_pszWallAttach;
	CAnimGraphParamRef< bool > m_bHardLanding;
	CAnimGraphParamRef< float32 > m_flUltCooldownProgress;
	CAnimGraphParamRef< bool > m_bSpawn;
	CAnimGraphParamRef< float32 > m_flAmmoFraction;
	CAnimGraphParamRef< float32 > m_flLookPitchRelativeToEyes;
	CAnimGraphParamRef< float32 > m_flSlideSurfacePitch;
	CAnimGraphParamRef< float32 > m_flSlideSurfaceRoll;
};
