// MNetworkVarNames = "EHANDLE m_vecTagAlongVisitedAllies"
// MNetworkVarNames = "EHANDLE m_hLastAttachedTo"
class CCitadel_Ability_Familiar_Attach : public CCitadelBaseAbility
{
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecTagAlongVisitedAllies;
	// MNetworkEnable
	CHandle< CBaseEntity > m_hLastAttachedTo;
};
