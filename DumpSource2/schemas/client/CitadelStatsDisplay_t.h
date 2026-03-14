// MGetKV3ClassDefaults = {
//	"m_eWeaponStatsDisplay":
//	{
//		"m_strWeaponNameLocString": "",
//		"m_strWeaponDescLocString": "",
//		"m_strWeaponImage": "",
//		"m_strSecondaryWeaponDescLocString": "",
//		"m_eWeaponAttributes": "",
//		"m_vecDisplayStats":
//		[
//		],
//		"m_vecOtherDisplayStats":
//		[
//		]
//	},
//	"m_eVitalityStatsDisplay":
//	{
//		"m_vecDisplayStats":
//		[
//		],
//		"m_vecOtherDisplayStats":
//		[
//		]
//	},
//	"m_eSpiritStatsDisplay":
//	{
//		"m_vecDisplayStats":
//		[
//		]
//	}
//}
class CitadelStatsDisplay_t
{
	// MPropertyDescription = "What information do we want to display for Weapon?"
	CitadelStatsWeaponDisplay_t m_eWeaponStatsDisplay;
	// MPropertyDescription = "What information do we want to display for Vitality?"
	CitadelStatsVitalityDisplay_t m_eVitalityStatsDisplay;
	// MPropertyDescription = "What information do we want to display for Spirit?"
	CitadelStatsSpiritDisplay_t m_eSpiritStatsDisplay;
};
