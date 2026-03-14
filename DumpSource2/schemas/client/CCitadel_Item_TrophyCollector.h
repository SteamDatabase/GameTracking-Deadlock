// MNetworkVarNames = "int m_iTrophyCount"
class CCitadel_Item_TrophyCollector : public CCitadel_Item
{
	// MNetworkEnable
	int32 m_iTrophyCount;
	int32 m_iInitialKills;
	int32 m_iInitialAssists;
	int32 m_iPrevCount;
	bool m_bMaxStacksReached;
};
