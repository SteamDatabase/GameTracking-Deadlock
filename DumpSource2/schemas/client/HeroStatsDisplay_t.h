// MGetKV3ClassDefaults = {
//	"m_vecWeaponHeaderStats":
//	[
//	],
//	"m_vecWeaponStats":
//	[
//	],
//	"m_vecHealthHeaderStats":
//	[
//	],
//	"m_vecHealthStats":
//	[
//	],
//	"m_vecMagicHeaderStats":
//	[
//	],
//	"m_vecMagicStats":
//	[
//	]
//}
class HeroStatsDisplay_t
{
	// MPropertyDescription = "What stats do we want to show in the weapon header area?"
	CUtlVector< EStatsType > m_vecWeaponHeaderStats;
	// MPropertyDescription = "What stats do we want to show in the weapon stats area?"
	CUtlVector< EStatsType > m_vecWeaponStats;
	// MPropertyDescription = "What stats do we want to show in the health header area?"
	CUtlVector< EStatsType > m_vecHealthHeaderStats;
	// MPropertyDescription = "What stats do we want to show in the health stats area?"
	CUtlVector< EStatsType > m_vecHealthStats;
	// MPropertyDescription = "What stats do we want to show in the magic header area?"
	CUtlVector< EStatsType > m_vecMagicHeaderStats;
	// MPropertyDescription = "What stats do we want to show in the magic stats area?"
	CUtlVector< EStatsType > m_vecMagicStats;
};
