// MNetworkVarNames = "int m_iLane"
// MNetworkVarNames = "GameTime_t m_flFadeOutStart"
// MNetworkVarNames = "GameTime_t m_flFadeOutEnd"
// MNetworkVarNames = "GameTime_t m_flLastWeakpointHitTime"
// MNetworkVarNames = "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames = "int m_nElectricBeamCasts"
class C_NPC_Boss_Tier2 : public C_AI_CitadelNPC
{
	// MNetworkEnable
	// MNotSaved
	int32 m_iLane;
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
	// MNetworkChangeCallback = "OnBossTargetedEnemyChanged"
	// MNotSaved
	CHandle< C_BaseEntity > m_hTargetedEnemy;
	// MNetworkEnable
	// MNetworkEncoder = "coord"
	// MNetworkChangeCallback = "OnLookTargetChanged"
	VectorWS m_vecElectricBeamLookTarget;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnElectricBeamCastsChanged"
	int32 m_nElectricBeamCasts;
};
