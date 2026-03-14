// MNetworkVarNames = "GameTime_t m_timeLaunch"
// MNetworkVarNames = "GameTime_t m_flAttackableTime"
// MNetworkVarNames = "GameTime_t m_flEndAttackableTime"
// MNetworkVarNames = "int m_nLaunchNum"
class CItemXP : public C_BaseModelEntity
{
	// MNetworkEnable
	// MNotSaved
	GameTime_t m_timeLaunch;
	// MNetworkEnable
	// MNotSaved
	GameTime_t m_flAttackableTime;
	// MNetworkEnable
	// MNotSaved
	GameTime_t m_flEndAttackableTime;
	// MNetworkEnable
	// MNotSaved
	int32 m_nLaunchNum;
};
