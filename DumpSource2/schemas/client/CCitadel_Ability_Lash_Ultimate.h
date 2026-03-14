// MNetworkVarNames = "ELashGrappleState m_EGrappleState"
// MNetworkVarNames = "GameTime_t m_flStateEnterTime"
// MNetworkVarNames = "GameTime_t m_flNextStateTime"
// MNetworkVarNames = "GameTime_t m_flBoostEndTime"
class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility
{
	// MNetworkEnable
	ELashGrappleState m_EGrappleState;
	// MNetworkEnable
	GameTime_t m_flStateEnterTime;
	// MNetworkEnable
	GameTime_t m_flNextStateTime;
	// MNetworkEnable
	GameTime_t m_flBoostEndTime;
};
