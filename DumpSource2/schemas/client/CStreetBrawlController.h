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
};
