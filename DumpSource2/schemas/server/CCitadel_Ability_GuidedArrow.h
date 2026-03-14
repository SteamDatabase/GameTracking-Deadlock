// MNetworkVarNames = "EHANDLE m_hProjectile"
// MNetworkVarNames = "float m_flArrowSpeed"
// MNetworkVarNames = "GameTime_t m_flSnapAnglesBackTime"
// MNetworkVarNames = "int m_nBonusTechPower"
// MNetworkVarNames = "bool m_bNeedsExplosion"
class CCitadel_Ability_GuidedArrow : public CCitadelBaseAbility
{
	// MNetworkEnable
	CHandle< CBaseEntity > m_hProjectile;
	// MNetworkEnable
	float32 m_flArrowSpeed;
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime;
	// MNetworkEnable
	int32 m_nBonusTechPower;
	// MNetworkEnable
	bool m_bNeedsExplosion;
	CHandle< CCitadel_GuidedArrow_OwlModel > m_hOwl;
	GameTime_t m_flCastTime;
	Vector m_vProjectileRemovedOrigin;
	QAngle m_angCasterAnglesAtCastTime;
	float32 m_flTravelDistance;
	bool m_bInKillFlow;
	float32 m_flProjectileTurnVel;
};
