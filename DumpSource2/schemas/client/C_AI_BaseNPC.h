// MNetworkIncludeByName = "m_lifeState"
// MNetworkIncludeByName = "m_spawnflags"
// MNetworkVarNames = "NPC_STATE m_NPCState"
// MNetworkVarNames = "bool m_bFadeCorpse"
// MNetworkVarNames = "bool m_bImportantRagdoll"
// MNetworkVarNames = "C_AI_Motor * m_pMotor"
class C_AI_BaseNPC : public C_BaseCombatCharacter
{
	// MNetworkEnable
	// MNotSaved
	NPC_STATE m_NPCState;
	// MNetworkEnable
	// MNotSaved
	bool m_bFadeCorpse;
	// MNetworkEnable
	// MNotSaved
	bool m_bImportantRagdoll;
	// MNetworkEnable
	C_AI_Motor* m_pMotor;
};
