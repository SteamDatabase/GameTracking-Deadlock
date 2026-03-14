// MNetworkVarNames = "int m_iRemainingCasts"
// MNetworkVarNames = "bool m_bIsBlinking"
// MNetworkVarNames = "GameTime_t m_RecastEndTime"
// MNetworkVarNames = "GameTime_t m_BlinkEndTime"
class CCitadel_Ability_VampireBat_BatBlink : public C_CitadelBaseAbility
{
	// MNetworkEnable
	int32 m_iRemainingCasts;
	// MNetworkEnable
	// MNetworkChangeCallback = "BlinkStateChanged"
	bool m_bIsBlinking;
	// MNetworkEnable
	GameTime_t m_RecastEndTime;
	// MNetworkEnable
	GameTime_t m_BlinkEndTime;
};
