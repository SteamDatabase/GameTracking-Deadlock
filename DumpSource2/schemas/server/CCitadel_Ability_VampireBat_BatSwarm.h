// MNetworkVarNames = "int m_iBonusBats"
// MNetworkVarNames = "int m_iBatCountOnCast"
// MNetworkVarNames = "float m_flChannelTime"
// MNetworkVarNames = "bool m_bPauseChannel"
// MNetworkVarNames = "float m_flLastRemainingChannelTime"
class CCitadel_Ability_VampireBat_BatSwarm : public CCitadelBaseAbility
{
	// MNetworkEnable
	int32 m_iBonusBats;
	// MNetworkEnable
	int32 m_iBatCountOnCast;
	// MNetworkEnable
	float32 m_flChannelTime;
	// MNetworkEnable
	bool m_bPauseChannel;
	// MNetworkEnable
	float32 m_flLastRemainingChannelTime;
	GameTime_t m_flNextBatTime;
};
