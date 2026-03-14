// MNetworkVarNames = "AbilityID_t m_SourceItemID"
// MNetworkVarNames = "EntitySubclassID_t m_vecImbuedAbilities"
class ItemImbuementPair_t
{
	// MNetworkEnable
	CUtlStringToken m_SourceItemID;
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecImbuedAbilities;
};
