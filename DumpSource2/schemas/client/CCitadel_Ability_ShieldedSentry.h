// MNetworkVarNames = "CHandle<C_NPC_SimpleAnimatingAI> m_vecDeployedSentries"
class CCitadel_Ability_ShieldedSentry : public C_CitadelBaseAbility
{
	int32 k_nOldestSentriesToShowInUI;
	// MNetworkEnable
	// MNetworkChangeCallback = "sentriesVecChanged"
	C_NetworkUtlVectorBase< CHandle< C_NPC_SimpleAnimatingAI > > m_vecDeployedSentries;
};
