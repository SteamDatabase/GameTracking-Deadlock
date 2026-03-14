// MNetworkVarNames = "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
// MNetworkVarNames = "int m_iLane"
// MNetworkVarNames = "GameTime_t m_flFadeOutStart"
// MNetworkVarNames = "GameTime_t m_flFadeOutEnd"
class C_NPC_BarrackBoss : public C_AI_CitadelNPC
{
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelPlayerClipComponent"
	// MNetworkAlias = "CCitadelPlayerClipComponent"
	// MNetworkTypeAlias = "CCitadelPlayerClipComponent"
	CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent;
	// MNetworkEnable
	// MNotSaved
	int32 m_iLane;
	// MNetworkEnable
	// MNotSaved
	GameTime_t m_flFadeOutStart;
	// MNetworkEnable
	// MNotSaved
	GameTime_t m_flFadeOutEnd;
};
