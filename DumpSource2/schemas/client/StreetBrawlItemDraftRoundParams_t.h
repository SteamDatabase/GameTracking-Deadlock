// MGetKV3ClassDefaults = {
//	"m_DraftParams":
//	{
//		"m_nOptionsToRoll": 3,
//		"m_nDrafts": 1
//	},
//	"m_eNormalModTier": "EModTier_1",
//	"m_eRareModTier": "EModTier_Invalid",
//	"m_flRareWeight": 1.000000,
//	"m_flEnhancedWeight": 1.000000
//}
class StreetBrawlItemDraftRoundParams_t
{
	ItemDraftRoundParams_t m_DraftParams;
	// MPropertyDescription = "Restricts items to this tier for a normal roll."
	EModTier_t m_eNormalModTier;
	// MPropertyDescription = "When a rare is rolled, restrict items to this tier."
	EModTier_t m_eRareModTier;
	// MPropertyDescription = "The weight for this draft round to have a rare allocated to it.  The weights of all the draft rounds are used to generated the odds"
	float32 m_flRareWeight;
	// MPropertyDescription = "The weight for this draft round to have an enhanced allocated to it.  The weights of all the draft rounds are used to generated the odds"
	float32 m_flEnhancedWeight;
};
