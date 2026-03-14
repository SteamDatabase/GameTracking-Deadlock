// MGetKV3ClassDefaults = {
//	"m_unRequiredGold": 0,
//	"m_mapBonusCurrencies":
//	{
//	},
//	"m_bUseStandardUpgrade": false,
//	"m_vecBonusUpgrades":
//	[
//	]
//}
class HeroLevel_t
{
	uint32 m_unRequiredGold;
	CUtlOrderedMap< ECurrencyType, int32 > m_mapBonusCurrencies;
	bool m_bUseStandardUpgrade;
	CUtlVector< BonusUpgrade_t > m_vecBonusUpgrades;
};
