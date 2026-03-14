// MNetworkVarNames = "int m_iLane"
// MNetworkVarNames = "Vector m_vecElectricBeamTargetEnd"
// MNetworkVarNames = "ETier3State_t m_eAliveState"
// MNetworkVarNames = "ETier3Phase_t m_ePhase"
// MNetworkVarNames = "Vector m_vShrineAttackTargetPos"
class C_NPC_Boss_Tier3 : public C_AI_CitadelNPC
{
	// MNetworkEnable
	// MNotSaved
	int32 m_iLane;
	// MNetworkEnable
	Vector m_vecElectricBeamTargetEnd;
	// MNetworkEnable
	// MNotSaved
	ETier3State_t m_eAliveState;
	// MNetworkEnable
	// MNotSaved
	ETier3Phase_t m_ePhase;
	// MNetworkEnable
	Vector m_vShrineAttackTargetPos;
};
