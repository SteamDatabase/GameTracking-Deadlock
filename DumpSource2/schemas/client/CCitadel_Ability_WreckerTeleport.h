// MNetworkVarNames = "EHANDLE m_hProjectile"
// MNetworkVarNames = "float m_flArrowSpeed"
// MNetworkVarNames = "GameTime_t m_flSnapAnglesBackTime"
class CCitadel_Ability_WreckerTeleport : public C_CitadelBaseAbility
{
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProjectile;
	// MNetworkEnable
	float32 m_flArrowSpeed;
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime;
	float32 m_flCastTimeDamage;
	GameTime_t m_flCastTime;
	bool m_bNeedsExplosion;
	Vector m_vProjectileRemovedOrigin;
	QAngle m_angCasterAnglesAtCastTime;
	float32 m_flTravelDistance;
};
