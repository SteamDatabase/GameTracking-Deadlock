// MNetworkVarNames = "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
// MNetworkVarNames = "int m_iLane"
// MNetworkVarNames = "GameTime_t m_flFadeOutStart"
// MNetworkVarNames = "GameTime_t m_flFadeOutEnd"
class CNPC_BarrackBoss : public CAI_CitadelNPC
{
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelPlayerClipComponent"
	// MNetworkAlias = "CCitadelPlayerClipComponent"
	// MNetworkTypeAlias = "CCitadelPlayerClipComponent"
	CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent;
	// MNetworkEnable
	int32 m_iLane;
	CHandle< CBaseEntity > m_hTrooperSpawnPoint;
	LaneSide_t m_LaneSide;
	// MNetworkEnable
	// MNotSaved
	GameTime_t m_flFadeOutStart;
	// MNetworkEnable
	// MNotSaved
	GameTime_t m_flFadeOutEnd;
};
