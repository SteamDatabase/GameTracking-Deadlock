// MNetworkVarNames = "ESwingState_t m_eSwingState"
// MNetworkVarNames = "GameTime_t m_SwingStartTime"
// MNetworkVarNames = "GameTime_t m_SwingEndTime"
// MNetworkVarNames = "Vector m_vecSwingPoint"
// MNetworkVarNames = "float m_flIdealSpringLength"
class CCitadel_Ability_SkyRunner_SwingLine : public C_CitadelBaseAbility
{
	// MNetworkEnable
	ESwingState_t m_eSwingState;
	// MNetworkEnable
	GameTime_t m_SwingStartTime;
	// MNetworkEnable
	GameTime_t m_SwingEndTime;
	// MNetworkEnable
	Vector m_vecSwingPoint;
	Vector m_vecCurrentPosition;
	// MNetworkEnable
	float32 m_flIdealSpringLength;
};
