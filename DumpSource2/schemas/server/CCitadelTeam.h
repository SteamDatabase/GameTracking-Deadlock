// MNetworkVarNames = "float32 m_flBaseObjectiveHealth"
// MNetworkVarNames = "int m_vecBaseLocationX"
// MNetworkVarNames = "int m_vecBaseLocationY"
// MNetworkVarNames = "bool m_bHasValidBaseLocation"
// MNetworkVarNames = "int m_nBossesAlive"
// MNetworkVarNames = "int m_nBossesMax"
// MNetworkVarNames = "EFlexSlotTypes_t m_nFlexSlotsUnlocked"
// MNetworkVarNames = "int m_nBaseGuardianLanesCleared"
// MNetworkVarNames = "STeamFOWEntity m_vecFOWEntities"
// MNetworkVarNames = "int m_nStreetBrawlScore"
// MNetworkVarNames = "int m_nStreetBrawlScoreLastRound"
class CCitadelTeam : public CTeam
{
	// MNetworkEnable
	float32 m_flBaseObjectiveHealth;
	// MNetworkEnable
	int32 m_vecBaseLocationX;
	// MNetworkEnable
	int32 m_vecBaseLocationY;
	// MNetworkEnable
	bool m_bHasValidBaseLocation;
	// MNetworkEnable
	int32 m_nBossesAlive;
	// MNetworkEnable
	int32 m_nBossesMax;
	// MNetworkEnable
	EFlexSlotTypes_t m_nFlexSlotsUnlocked;
	// MNetworkEnable
	int32 m_nBaseGuardianLanesCleared;
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter (UNKNOWN FOR PARSER)
	// MNetworkPriority = 32
	CUtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities;
	// MNetworkEnable
	int32 m_nStreetBrawlScore;
	// MNetworkEnable
	int32 m_nStreetBrawlScoreLastRound;
};
