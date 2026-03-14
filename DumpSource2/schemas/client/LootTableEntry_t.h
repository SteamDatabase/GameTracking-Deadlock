// MGetKV3ClassDefaults = {
//	"m_eType": "ELootType_Item",
//	"m_strNestedLootTable": "",
//	"m_strItem": "",
//	"m_flWeight": 1.000000,
//	"m_nRarity": 0
//}
class LootTableEntry_t
{
	// MPropertyDescription = "What type of loot this entry references."
	// MPropertyFlattenIntoParentRow
	// MPropertyFlattenStretchFactor (UNKNOWN FOR PARSER)
	ELootTableEntryType m_eType;
	// MPropertyDescription = "If this entry is rolled, this loot table's entries will then be rolled."
	// MPropertyFlattenIntoParentRow
	// MPropertyFlattenStretchFactor (UNKNOWN FOR PARSER)
	// MPropertySuppressExpr = "m_eType != ELootType_LootTableReference"
	CSubclassName< 6 > m_strNestedLootTable;
	// MPropertyDescription = "If this entry is rolled, this item will be the loot."
	// MPropertyFlattenIntoParentRow
	// MPropertyFlattenStretchFactor (UNKNOWN FOR PARSER)
	// MPropertySuppressExpr = "m_eType != ELootType_Item"
	// MPropertyLeafChoiceProviderFn (UNKNOWN FOR PARSER)
	CSubclassName< 4 > m_strItem;
	// MPropertyDescription = "The weight of this entry.  The chance of this entry being rolled is this_weight / all_entries_weight"
	// MPropertyFlattenIntoParentRow
	// MPropertyFlattenIncludeLabel
	float32 m_flWeight;
	// MPropertyDescription = "Used by the UI to communicate how rare this entry is. 0 is not rare, 1 is rare. Nested loot tables will add their rarity to their children"
	// MPropertyFlattenIntoParentRow
	// MPropertyFlattenIncludeLabel
	int32 m_nRarity;
};
