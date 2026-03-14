// MGetKV3ClassDefaults = {
//	"m_strWeaponNameLocString": "",
//	"m_strWeaponDescLocString": "",
//	"m_strWeaponImage": "",
//	"m_strSecondaryWeaponDescLocString": "",
//	"m_eWeaponAttributes": "",
//	"m_vecDisplayStats":
//	[
//	],
//	"m_vecOtherDisplayStats":
//	[
//	]
//}
class CitadelStatsWeaponDisplay_t
{
	// MPropertyDescription = "The loc string of the heroes weapon name"
	CUtlString m_strWeaponNameLocString;
	// MPropertyDescription = "The loc string of the heroes weapon description"
	CUtlString m_strWeaponDescLocString;
	// MPropertyDescription = "The location of the weapon image"
	CPanoramaImageName m_strWeaponImage;
	// MPropertyDescription = "The loc string of the heroes secondary weapon description (optional)"
	CUtlString m_strSecondaryWeaponDescLocString;
	// MPropertyDescription = "The type of attributes does this weapon have?"
	ECitadelWeaponAttributes m_eWeaponAttributes;
	// MPropertyDescription = "What stats do we want to show in the top section?"
	CUtlVector< EStatsType > m_vecDisplayStats;
	// MPropertyDescription = "What stats do we want to show in the other stats section?"
	CUtlVector< EStatsType > m_vecOtherDisplayStats;
};
