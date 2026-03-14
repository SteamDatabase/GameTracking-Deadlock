// MNetworkVarNames = "bool m_bPlayingIdle"
// MNetworkVarNames = "bool m_bShieldActive"
class C_NPC_TrooperNeutral : public C_AI_CitadelNPC
{
	// MNetworkEnable
	// MNetworkChangeCallback = "OnPlayingIdleChanged"
	bool m_bPlayingIdle;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnShieldActiveChanged"
	bool m_bShieldActive;
};
