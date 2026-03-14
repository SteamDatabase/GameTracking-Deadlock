// MNetworkVarNames = "EHANDLE m_vecTagAlongVisitedAllies"
// MNetworkVarNames = "EHANDLE m_hLastAttachedTo"
class CCitadel_Ability_Familiar_Attach : public C_CitadelBaseAbility
{
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecTagAlongVisitedAllies;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hLastAttachedTo;
};
