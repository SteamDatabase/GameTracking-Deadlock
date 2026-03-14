// MGetKV3ClassDefaults = {
//	"_class": "CCitadelLootTableVData",
//	"m_vecEntries":
//	[
//	]
//}
// MVDataRoot
// MVDataAssociatedFile = "scripts/loot_tables.vdata"
// MVDataOverlayType = 1
class CCitadelLootTableVData : public CEntitySubclassVDataBase
{
	// MPropertyAutoExpandSelf
	CUtlVector< LootTableEntry_t > m_vecEntries;
};
