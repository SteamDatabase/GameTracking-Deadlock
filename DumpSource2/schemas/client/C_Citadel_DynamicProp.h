// MNetworkVarNames = "CUtlString m_strDefaultSkin"
// MNetworkVarNames = "CUtlString m_strFriendlySkin"
// MNetworkVarNames = "CUtlString m_strEnemySkin"
// MNetworkVarNames = "bool m_bIsWorld"
class C_Citadel_DynamicProp : public C_DynamicProp
{
	// MNotSaved
	int32 m_nPlayerTeamEvent;
	// MNetworkEnable
	CUtlString m_strDefaultSkin;
	// MNetworkEnable
	CUtlString m_strFriendlySkin;
	// MNetworkEnable
	CUtlString m_strEnemySkin;
	// MNetworkEnable
	bool m_bIsWorld;
};
