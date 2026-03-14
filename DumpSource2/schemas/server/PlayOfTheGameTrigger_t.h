// MGetKV3ClassDefaults = {
//	"m_tTriggerTime": null,
//	"m_eType": "EPlayOfTheGameReplayTrigger_Invalid",
//	"m_nTarget": 0
//}
// MNetworkVarNames = "GameTime_t m_tTriggerTime"
// MNetworkVarNames = "EPlayOfTheGameReplayTrigger m_eType"
// MNetworkVarNames = "CPlayerSlot m_nTarget"
class PlayOfTheGameTrigger_t
{
	// MNetworkEnable
	GameTime_t m_tTriggerTime;
	// MNetworkEnable
	EPlayOfTheGameReplayTrigger m_eType;
	// MNetworkEnable
	CPlayerSlot m_nTarget;
};
