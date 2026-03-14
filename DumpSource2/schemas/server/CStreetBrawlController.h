// MNetworkVarNames = "EStreetBrawlGameState m_eStreetBrawlState"
// MNetworkVarNames = "GameTime_t m_flStreetBrawlStateStartTime"
// MNetworkVarNames = "GameTime_t m_flNextStateTime"
// MNetworkVarNames = "float m_flStreetBrawlTotalNonCombatTime"
// MNetworkVarNames = "int m_iRound"
// MNetworkVarNames = "int m_iLastBuyCountDown"
// MNetworkVarNames = "int m_iTeamSapphireScore"
// MNetworkVarNames = "int m_iTeamAmberScore"
class CStreetBrawlController
{
	// MNetworkEnable
	// MNetworkChangeCallback = "streetBrawlStateChanged"
	EStreetBrawlGameState m_eStreetBrawlState;
	// MNetworkEnable
	GameTime_t m_flStreetBrawlStateStartTime;
	// MNetworkEnable
	GameTime_t m_flNextStateTime;
	// MNetworkEnable
	float32 m_flStreetBrawlTotalNonCombatTime;
	// MNetworkEnable
	int32 m_iRound;
	// MNetworkEnable
	int32 m_iLastBuyCountDown;
	// MNetworkEnable
	int32 m_iTeamSapphireScore;
	// MNetworkEnable
	int32 m_iTeamAmberScore;
	float32 m_tNoTrooperTime;
	bool m_bOvertime;
	int32 m_nScoringTeam;
	CUtlVector< CHandle< CBaseEntity > > m_vTeamSapphireBoss;
	CUtlVector< CHandle< CBaseEntity > > m_vTeamAmberBoss;
	CUtlOrderedMap< CUtlString, CUtlString > m_mapOriginalConVarVals;
	CUtlVector< int32 > m_vecOfferedLegendaries;
	CUtlVector< int32 > m_vecOfferedRares;
	CUtlVector< int32 > m_vecOfferedEnhanced;
	int32 m_nShuffleSeed;
};
