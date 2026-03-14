// MNetworkVarNames = "ItemDraftOption_t m_vecOptions"
// MNetworkVarNames = "ItemDraftRoundID_t m_nID"
// MNetworkVarNames = "int m_nDraftsRemaining"
// MNetworkVarNames = "int m_nDraftsTotal"
// MNetworkVarNames = "int m_nRoundsRemaining"
// MNetworkVarNames = "int m_nRoundsTotal"
class ItemDraftRoundState_t
{
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< ItemDraftOption_t > m_vecOptions;
	// MNetworkEnable
	ItemDraftRoundID_t m_nID;
	// MNetworkEnable
	int32 m_nDraftsRemaining;
	// MNetworkEnable
	int32 m_nDraftsTotal;
	// MNetworkEnable
	int32 m_nRoundsRemaining;
	// MNetworkEnable
	int32 m_nRoundsTotal;
	GameTime_t m_flCompletedTime;
};
