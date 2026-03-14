// MNetworkVarNames = "GameTime_t m_flLastDamageTime"
// MNetworkVarNames = "GameTime_t m_flStartTime"
// MNetworkVarNames = "GameTime_t m_flEndTime"
// MNetworkVarNames = "EHANDLE m_hPlayerEntToStore"
class CCitadelRecentDamage
{
	// MNetworkEnable
	GameTime_t m_flLastDamageTime;
	// MNetworkEnable
	GameTime_t m_flStartTime;
	// MNetworkEnable
	GameTime_t m_flEndTime;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPlayerEntToStore;
};
