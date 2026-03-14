// MNetworkVarNames = "AbilityID_t m_unComponentID"
// MNetworkVarNames = "int m_nRefCount"
// MNetworkVarNames = "bool m_bPurchased"
class ConsumedComponentState_t
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CUtlStringToken m_unComponentID;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int32 m_nRefCount;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bPurchased;
};
