// MNetworkVarNames = "int m_iLane"
// MNetworkVarNames = "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames = "GameTime_t m_flFadeOutStart"
// MNetworkVarNames = "GameTime_t m_flFadeOutEnd"
// MNetworkVarNames = "GameTime_t m_flLastWeakpointHitTime"
// MNetworkVarNames = "VectorWS m_vecElectricBeamLookTarget"
// MNetworkVarNames = "int m_nElectricBeamCasts"
class CNPC_Boss_Tier2 : public CAI_CitadelNPC
{
	// MNotSaved
	Vector m_vecStartingPosition;
	// MNetworkEnable
	int32 m_iLane;
	// MNetworkEnable
	// MNotSaved
	CHandle< CBaseEntity > m_hTargetedEnemy;
	// MNetworkEnable
	// MNotSaved
	GameTime_t m_flFadeOutStart;
	// MNetworkEnable
	// MNotSaved
	GameTime_t m_flFadeOutEnd;
	// MNetworkEnable
	// MNotSaved
	GameTime_t m_flLastWeakpointHitTime;
	// MNetworkEnable
	// MNetworkEncoder = "coord"
	VectorWS m_vecElectricBeamLookTarget;
	// MNetworkEnable
	int32 m_nElectricBeamCasts;
	CEntityIOOutput m_eventOnBossKilled;
	CUtlSymbolLarge m_strBossEntityName;
};
