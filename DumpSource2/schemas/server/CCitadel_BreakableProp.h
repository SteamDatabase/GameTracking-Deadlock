// MNetworkIncludeByName = "m_lifeState"
// MNetworkIncludeByName = "m_iMaxHealth"
// MNetworkIncludeByName = "m_iHealth"
// MNetworkVarNames = "int m_nHitIndex"
class CCitadel_BreakableProp : public CBaseAnimGraph
{
	// MNetworkEnable
	// MNotSaved
	int32 m_nHitIndex;
	float32 m_flOverrideInitialSpawnTime;
	float32 m_flOverrideRespawnTime;
};
