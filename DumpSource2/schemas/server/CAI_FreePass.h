class CAI_FreePass : public CAI_Component
{
	CHandle< CBaseEntity > m_hTarget;
	float32 m_FreePassTimeRemaining;
	CAI_MoveMonitor m_FreePassMoveMonitor;
	AI_FreePassParams_t m_Params;
};
