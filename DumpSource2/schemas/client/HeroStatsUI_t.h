// MGetKV3ClassDefaults = {
//	"m_strWeaponNameLocString": "",
//	"m_strWeaponImage": "",
//	"m_eWeaponType": "ECitadelWeapon_Invalid",
//	"m_eWeaponStatDisplay": "EStatsCount",
//	"m_vecDisplayStats":
//	[
//	]
//}
class HeroStatsUI_t
{
	// MPropertyDescription = "The loc string of the heroes weapon name"
	CUtlString m_strWeaponNameLocString;
	// MPropertyDescription = "The location of the weapon image"
	CUtlString m_strWeaponImage;
	// MPropertyDescription = "The type of weapon this hero has. This changes the generic gun image and gun name."
	ECitadelWeaponTypes m_eWeaponType;
	// MPropertyDescription = "What stat do we show in the weapon UI panel?"
	EStatsType m_eWeaponStatDisplay;
	// MPropertyDescription = "What stats do we want to show?"
	CUtlVector< StatWithCategory_t > m_vecDisplayStats;
};
