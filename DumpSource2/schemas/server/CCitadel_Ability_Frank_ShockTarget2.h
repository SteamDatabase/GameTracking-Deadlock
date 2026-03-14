// MNetworkVarNames = "bool m_bIsFullyCharged"
class CCitadel_Ability_Frank_ShockTarget2 : public CCitadelBaseAbility
{
	CUtlVector< CHandle< CBaseEntity > > m_vecHitTargets;
	// MNetworkEnable
	bool m_bIsFullyCharged;
	CModifierHandleBase m_hFullyChargedFXModifier;
};
