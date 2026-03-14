// MNetworkVarNames = "bool m_bWillLeapOff"
// MNetworkVarNames = "bool m_bIsLeaping"
// MNetworkVarNames = "GameTime_t m_tLeapStartTime"
// MNetworkVarNames = "GameTime_t m_tLeapOffTime"
class CCitadel_Ability_Werewolf_Leap : public C_CitadelBaseAbility
{
	// MNetworkEnable
	bool m_bWillLeapOff;
	// MNetworkEnable
	bool m_bIsLeaping;
	// MNetworkEnable
	GameTime_t m_tLeapStartTime;
	// MNetworkEnable
	GameTime_t m_tLeapOffTime;
	VectorWS m_vLaunchPosition;
	VectorWS m_vLaunchVelocity;
	QAngle m_qLaunchAngle;
};
