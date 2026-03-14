// MNetworkVarNames = "float m_flWidth"
// MNetworkVarNames = "GameTime_t m_tDieTime"
class CProjectile_Stomp_Projectile : public CCitadelProjectile
{
	Vector m_vLastStompPos;
	bool m_bFinished;
	// MNetworkEnable
	float32 m_flWidth;
	// MNetworkEnable
	GameTime_t m_tDieTime;
};
