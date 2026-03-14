// MNetworkVarNames = "CCitadelAutoScaledTime m_flBarrageEndTime"
class CCitadel_Ability_RocketBarrage : public CCitadelBaseAbility
{
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBarrageEndTime;
	float32 m_flCurrentTimeScale;
	Vector m_vecAimPos;
	Vector m_vecAimVel;
	GameTime_t m_flLastUpdateTime;
};
