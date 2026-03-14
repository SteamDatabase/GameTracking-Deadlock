// MNetworkVarNames = "CPlayerSlot m_vecParticipants"
// MNetworkVarNames = "PlayOfTheGameTrigger_t m_vecTriggers"
// MNetworkVarNames = "GameTime_t m_tBeginTimeWithPrewarm"
// MNetworkVarNames = "GameTime_t m_tEndTime"
class PlayOfTheGamePlaybackData_t
{
	// MNetworkEnable
	CNetworkUtlVectorBase< CPlayerSlot > m_vecParticipants;
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< PlayOfTheGameTrigger_t > m_vecTriggers;
	// MNetworkEnable
	GameTime_t m_tBeginTimeWithPrewarm;
	// MNetworkEnable
	GameTime_t m_tEndTime;
};
