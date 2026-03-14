// MNetworkVarNames = "GameTime_t m_tSpawnTime"
// MNetworkVarNames = "VectorWS m_vecCastLocation"
// MNetworkVarNames = "bool m_bDontMove"
// MNetworkVarNames = "float m_flAttackRange"
// MNetworkVarNames = "float m_flSpawnDuration"
class CNPC_NecroSkele : public C_AI_CitadelNPC
{
	// MNetworkEnable
	GameTime_t m_tSpawnTime;
	// MNetworkEnable
	VectorWS m_vecCastLocation;
	// MNetworkEnable
	bool m_bDontMove;
	// MNetworkEnable
	// MNotSaved
	float32 m_flAttackRange;
	// MNetworkEnable
	// MNotSaved
	float32 m_flSpawnDuration;
};
