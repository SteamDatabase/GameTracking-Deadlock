// MNetworkVarNames = "bool m_bTriggerStarted"
// MNetworkVarNames = "PlayOfTheGamePlaybackData_t m_playOfTheGameDataServer"
class CCitadelPlayOfTheGame
{
	// MNotSaved
	CNetworkVarChainer __m_pChainEntity;
	EPlayOfTheGameState m_eState;
	// MNetworkEnable
	// MNetworkChangeCallback = "triggerChanged"
	bool m_bTriggerStarted;
	// MNetworkEnable
	PlayOfTheGamePlaybackData_t m_playOfTheGameDataServer;
};
