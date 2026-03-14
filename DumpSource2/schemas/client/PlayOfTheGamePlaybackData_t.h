// MNetworkVarNames = "CPlayerSlot m_vecParticipants"
// MNetworkVarNames = "PlayOfTheGameTrigger_t m_vecTriggers"
// MNetworkVarNames = "GameTime_t m_tBeginTimeWithPrewarm"
// MNetworkVarNames = "GameTime_t m_tEndTime"
class PlayOfTheGamePlaybackData_t
{
	// MNetworkEnable
	C_NetworkUtlVectorBase< CPlayerSlot > m_vecParticipants;
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< PlayOfTheGameTrigger_t > m_vecTriggers;
	// MNetworkEnable
	GameTime_t m_tBeginTimeWithPrewarm;
	// MNetworkEnable
	GameTime_t m_tEndTime;
};
