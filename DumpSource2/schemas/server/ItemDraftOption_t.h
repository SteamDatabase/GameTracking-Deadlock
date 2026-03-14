// MNetworkVarNames = "ItemDraftItem_t m_Item"
// MNetworkVarNames = "ItemDraftItem_t m_BonusItem1"
// MNetworkVarNames = "ItemDraftItem_t m_BonusItem2"
// MNetworkVarNames = "bool m_bHasBeenDrafted"
// MNetworkVarNames = "bool m_bRare"
class ItemDraftOption_t
{
	// MNetworkEnable
	ItemDraftItem_t m_Item;
	// MNetworkEnable
	ItemDraftItem_t m_BonusItem1;
	// MNetworkEnable
	ItemDraftItem_t m_BonusItem2;
	// MNetworkEnable
	bool m_bHasBeenDrafted;
	// MNetworkEnable
	bool m_bRare;
};
