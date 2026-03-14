// MNetworkVarNames = "GameTime_t m_tCooldownStartTime"
// MNetworkVarNames = "GameTime_t m_tCooldownEndTime"
// MNetworkVarNames = "bool m_bIsHelperAvailableNet"
class CNPC_FamiliarHelper : public CAI_CitadelNPC
{
	// MNetworkEnable
	GameTime_t m_tCooldownStartTime;
	// MNetworkEnable
	GameTime_t m_tCooldownEndTime;
	// MNetworkEnable
	bool m_bIsHelperAvailableNet;
};
