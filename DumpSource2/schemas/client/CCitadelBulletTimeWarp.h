// MNetworkVarNames = "float m_flBulletTimeScale"
// MNetworkVarNames = "float m_flProjectileTimeScale"
// MNetworkVarNames = "GameTime_t m_flExpireTime"
// MNetworkVarNames = "float m_flStopDuration"
// MNetworkVarNames = "float m_flBulletTimeScaleFriendly"
// MNetworkVarNames = "float m_flBonusBulletBaseDamageFriendly"
class CCitadelBulletTimeWarp : public C_BaseModelEntity
{
	// MNetworkEnable
	float32 m_flBulletTimeScale;
	// MNetworkEnable
	float32 m_flProjectileTimeScale;
	// MNetworkEnable
	GameTime_t m_flExpireTime;
	// MNetworkEnable
	float32 m_flStopDuration;
	// MNetworkEnable
	float32 m_flBulletTimeScaleFriendly;
	// MNetworkEnable
	float32 m_flBonusBulletBaseDamageFriendly;
};
