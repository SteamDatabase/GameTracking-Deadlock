// MNetworkVarNames = "CUtlString m_strDefaultSkin"
// MNetworkVarNames = "CUtlString m_strFriendlySkin"
// MNetworkVarNames = "CUtlString m_strEnemySkin"
// MNetworkVarNames = "bool m_bIsWorld"
class CCitadel_DynamicProp : public CDynamicProp
{
	// MNetworkEnable
	CUtlString m_strDefaultSkin;
	// MNetworkEnable
	CUtlString m_strFriendlySkin;
	// MNetworkEnable
	CUtlString m_strEnemySkin;
	// MNetworkEnable
	bool m_bIsWorld;
};
