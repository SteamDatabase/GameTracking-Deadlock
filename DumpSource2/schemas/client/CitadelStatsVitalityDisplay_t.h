// MGetKV3ClassDefaults = {
//	"m_vecDisplayStats":
//	[
//	],
//	"m_vecOtherDisplayStats":
//	[
//	]
//}
class CitadelStatsVitalityDisplay_t
{
	// MPropertyDescription = "What stats do we want to show in the top section?"
	CUtlVector< EStatsType > m_vecDisplayStats;
	// MPropertyDescription = "What stats do we want to show in the other stats section?"
	CUtlVector< EStatsType > m_vecOtherDisplayStats;
};
