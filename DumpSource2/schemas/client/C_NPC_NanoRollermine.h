// MNetworkVarNames = "float m_flForwardSpeed"
// MNetworkVarNames = "CHandle< CBaseEntity> m_hOwnerPawn"
class C_NPC_NanoRollermine : public C_AI_CitadelNPC
{
	// MNetworkEnable
	// MNotSaved
	float32 m_flForwardSpeed;
	// MNetworkEnable
	// MNotSaved
	CHandle< C_BaseEntity > m_hOwnerPawn;
};
