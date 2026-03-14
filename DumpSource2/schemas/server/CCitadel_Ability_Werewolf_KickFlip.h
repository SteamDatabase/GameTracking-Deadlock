// MNetworkVarNames = "bool m_bIsLeaping"
// MNetworkVarNames = "GameTime_t m_tLeapStartTime"
// MNetworkVarNames = "GameTime_t m_tLeapOffTime"
class CCitadel_Ability_Werewolf_KickFlip : public CCitadelBaseAbility
{
	// MNetworkEnable
	bool m_bIsLeaping;
	// MNetworkEnable
	GameTime_t m_tLeapStartTime;
	// MNetworkEnable
	GameTime_t m_tLeapOffTime;
};
