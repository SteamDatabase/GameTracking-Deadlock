// MNetworkVarNames = "CHandle<CNPC_SimpleAnimatingAI> m_vecDeployedSentries"
class CCitadel_Ability_ShieldedSentry : public CCitadelBaseAbility
{
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CNPC_SimpleAnimatingAI > > m_vecDeployedSentries;
};
