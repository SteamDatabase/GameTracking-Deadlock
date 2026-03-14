// MGetKV3ClassDefaults = {
//	"m_vecRespawnTimes":
//	[
//	],
//	"m_flOvertimeRespawnTimeIncrease":
//	[
//	],
//	"m_flOvertimeRespawnTimeIncreaseUrgent":
//	[
//	],
//	"m_flOvertimeTrooperHealthScale":
//	[
//	],
//	"m_flOvertimeTrooperDamageScale":
//	[
//	],
//	"m_vecPreBuyTime":
//	[
//	],
//	"m_vecBuyTime":
//	[
//	],
//	"m_vecGoldPerRound":
//	[
//	],
//	"m_vecAPPerRound":
//	[
//	],
//	"m_vecObjectiveMaxHealth":
//	[
//	],
//	"m_vecItemDraftRerollsPerRound":
//	[
//	],
//	"m_vecRoundLengthMinutes":
//	[
//	],
//	"m_vecRoundLengthMinutesUrgent":
//	[
//	],
//	"m_flTrooperSpawnTimer":
//	[
//	],
//	"m_vecItemDraftRoundsPerGameRound":
//	[
//	],
//	"m_mapItemTierToItemDraftBuckets":
//	{
//	},
//	"m_nMatchLengthMinutes": 18.000000,
//	"m_nTier2BonusHealth": 4000,
//	"m_nComebackBonusHealth": 1000,
//	"m_nComebackBonusHealthCritical": 4000,
//	"m_flTrooperNonOvertimeResist": 20.000000,
//	"m_flTrooperOvertimeResist": 20.000000,
//	"m_flActivesReductionWeightScale": 0.350000,
//	"m_flLegendaryOwnerSkipChancePct": 95.000000,
//	"m_flEnhancedOwnerSkipChancePct": 75.000000,
//	"m_flRareWeightScale": 2.000000,
//	"m_flComebackWeightScale_Trailing_2": 8.000000,
//	"m_flComebackWeightScale_Trailing_1": 2.000000,
//	"m_strAmberTrooperPickupToDrop": "",
//	"m_strSapphireTrooperPickupToDrop": "",
//	"m_strTrooperModifier": "",
//	"m_flScoringTime": 5.000000,
//	"m_flPreScoringTime": 1.000000,
//	"m_flScoringGameTimeScale": 0.500000,
//	"m_iScoreToWin": 3,
//	"m_iLaneNumber": 4,
//	"m_flTrooperSpawnBeforeRoundStartTimer": 5.000000,
//	"m_flZipBoostCooldownOnStart": 20.000000,
//	"m_flBuyTimeGracePeriod": 15.000000,
//	"m_iUltimateUnlockRound": 0,
//	"m_flTier1MaxResistTime": 4.000000,
//	"m_flTier2MaxResistTime": 4.000000
//}
class GameModeStreetBrawl_t
{
	CUtlVector< float32 > m_vecRespawnTimes;
	CUtlVector< float32 > m_flOvertimeRespawnTimeIncrease;
	CUtlVector< float32 > m_flOvertimeRespawnTimeIncreaseUrgent;
	CUtlVector< float32 > m_flOvertimeTrooperHealthScale;
	CUtlVector< float32 > m_flOvertimeTrooperDamageScale;
	CUtlVector< float32 > m_vecPreBuyTime;
	CUtlVector< float32 > m_vecBuyTime;
	CUtlVector< int32 > m_vecGoldPerRound;
	CUtlVector< int32 > m_vecAPPerRound;
	CUtlVector< int32 > m_vecObjectiveMaxHealth;
	CUtlVector< int32 > m_vecItemDraftRerollsPerRound;
	CUtlVector< float32 > m_vecRoundLengthMinutes;
	CUtlVector< float32 > m_vecRoundLengthMinutesUrgent;
	CUtlVector< float32 > m_flTrooperSpawnTimer;
	CUtlVector< StreetBrawlGameRoundDrafts_t > m_vecItemDraftRoundsPerGameRound;
	CUtlOrderedMap< EModTier_t, ItemDraftBucketing_t > m_mapItemTierToItemDraftBuckets;
	float32 m_nMatchLengthMinutes;
	int32 m_nTier2BonusHealth;
	int32 m_nComebackBonusHealth;
	int32 m_nComebackBonusHealthCritical;
	float32 m_flTrooperNonOvertimeResist;
	float32 m_flTrooperOvertimeResist;
	// MPropertyDescription = "When we own 3 actives, scale the weight of actives by this much"
	float32 m_flActivesReductionWeightScale;
	// MPropertyDescription = "If you've got more legendaries than everyone else, we'll not even consider you for another this % of the time"
	float32 m_flLegendaryOwnerSkipChancePct;
	// MPropertyDescription = "If you've got more enhanced than everyone else, we'll not even consider you for another this % of the time"
	float32 m_flEnhancedOwnerSkipChancePct;
	// MPropertyDescription = "When rolling a rare item scale up the "Good" bucket's weight by this much"
	float32 m_flRareWeightScale;
	// MPropertyDescription = "When a players' team is in comeback state, apply this weighting scale to their "Good" bucket of items"
	float32 m_flComebackWeightScale_Trailing_2;
	// MPropertyDescription = "When a players' team is in comeback state, apply this weighting scale to their "Good" bucket of items"
	float32 m_flComebackWeightScale_Trailing_1;
	CSubclassName< 0 > m_strAmberTrooperPickupToDrop;
	CSubclassName< 0 > m_strSapphireTrooperPickupToDrop;
	CSubclassName< 2 > m_strTrooperModifier;
	float32 m_flScoringTime;
	float32 m_flPreScoringTime;
	float32 m_flScoringGameTimeScale;
	int32 m_iScoreToWin;
	int32 m_iLaneNumber;
	float32 m_flTrooperSpawnBeforeRoundStartTimer;
	float32 m_flZipBoostCooldownOnStart;
	float32 m_flBuyTimeGracePeriod;
	int32 m_iUltimateUnlockRound;
	float32 m_flTier1MaxResistTime;
	float32 m_flTier2MaxResistTime;
};
