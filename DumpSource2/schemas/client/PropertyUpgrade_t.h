// MGetKV3ClassDefaults = {
//	"m_strPropertyName": "",
//	"m_strBonus": "",
//	"m_strStreetBrawlBonus": "",
//	"m_eUpgradeType": "EAddToBase",
//	"m_eScaleStatFilter": "EStatsCount"
//}
// MPropertyAutoExpandSelf
class PropertyUpgrade_t
{
	CUtlString m_strPropertyName;
	CUtlString m_strBonus;
	CUtlString m_strStreetBrawlBonus;
	EAbilityUpgradeType m_eUpgradeType;
	// MPropertyDescription = "If set, only applies the scaling of this upgrade to the specified stat"
	// MPropertySuppressExpr = "( m_eUpgradeType != EAddToScale && m_eUpgradeType != EMultiplyScale )"
	EStatsType m_eScaleStatFilter;
};
