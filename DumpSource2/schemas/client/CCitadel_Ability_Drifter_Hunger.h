// MNetworkVarNames = "int m_nKillsEarned"
// MNetworkVarNames = "int m_nAssistsEarned"
class CCitadel_Ability_Drifter_Hunger : public C_CitadelBaseAbility
{
	CUtlVector< CHandle< C_BaseEntity > > m_vecCurrentTargets;
	// MNetworkEnable
	int32 m_nKillsEarned;
	// MNetworkEnable
	int32 m_nAssistsEarned;
	CUtlStringToken m_TypeIDDarkness;
};
