// MNetworkVarNames = "int m_iLane"
// MNetworkVarNames = "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames = "float m_flHealingChargeParticlePct"
class C_NPC_Trooper : public C_AI_CitadelNPC
{
	// MNetworkEnable
	// MNotSaved
	int32 m_iLane;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnTargetedEnemyChanged"
	// MNotSaved
	CHandle< C_BaseEntity > m_hTargetedEnemy;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnHealingChargeChanged"
	// MNetworkBitCount = 8
	// MNetworkMinValue = 0.000000
	// MNetworkMaxValue = 1.000000
	// MNotSaved
	float32 m_flHealingChargeParticlePct;
};
