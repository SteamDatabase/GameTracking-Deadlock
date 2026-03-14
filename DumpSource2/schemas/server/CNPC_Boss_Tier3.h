// MNetworkVarNames = "int m_iLane"
// MNetworkVarNames = "Vector m_vecElectricBeamTargetEnd"
// MNetworkVarNames = "ETier3State_t m_eAliveState"
// MNetworkVarNames = "ETier3Phase_t m_ePhase"
// MNetworkVarNames = "Vector m_vShrineAttackTargetPos"
class CNPC_Boss_Tier3 : public CAI_CitadelNPC
{
	// MNetworkEnable
	// MNotSaved
	int32 m_iLane;
	// MNetworkEnable
	Vector m_vecElectricBeamTargetEnd;
	CEntityIOOutput m_eventOnBossKilled;
	CEntityIOOutput m_eventOnPhase1End;
	CUtlSymbolLarge m_backdoorProtectionTrigger;
	// MNetworkEnable
	// MNotSaved
	ETier3State_t m_eAliveState;
	// MNetworkEnable
	// MNotSaved
	ETier3Phase_t m_ePhase;
	// MNetworkEnable
	Vector m_vShrineAttackTargetPos;
};
