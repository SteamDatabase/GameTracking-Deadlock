// MGetKV3ClassDefaults = {
//	"m_vecItemDraftRounds":
//	[
//	],
//	"m_chanceRare":
//	{
//		"m_mapOutcomesToWeights":
//		{
//		}
//	},
//	"m_chanceEnhanced":
//	{
//		"m_mapOutcomesToWeights":
//		{
//		}
//	}
//}
class StreetBrawlGameRoundDrafts_t
{
	CUtlVector< StreetBrawlItemDraftRoundParams_t > m_vecItemDraftRounds;
	WeightedChance_t m_chanceRare;
	WeightedChance_t m_chanceEnhanced;
};
