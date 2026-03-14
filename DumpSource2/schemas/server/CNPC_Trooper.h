// MNetworkVarNames = "int m_iLane"
// MNetworkVarNames = "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames = "float m_flHealingChargeParticlePct"
class CNPC_Trooper : public CAI_CitadelNPC
{
	// MNetworkEnable
	int32 m_iLane;
	int32 m_iLaneSlot;
	CHandle< CInfoTrooperBossSpawn > m_hSpawnWaveController;
	CHandle< CInfoTrooperSpawn > m_hTrooperSpawnPoint;
	CModifierHandleTyped< CCitadelModifier > m_hNearDeathModifier;
	// MNetworkEnable
	// MNotSaved
	CHandle< CBaseEntity > m_hTargetedEnemy;
	// MNetworkEnable
	// MNetworkBitCount = 8
	// MNetworkMinValue = 0.000000
	// MNetworkMaxValue = 1.000000
	// MNotSaved
	float32 m_flHealingChargeParticlePct;
};
