// MNetworkVarNames = "bool m_bIceBeaming"
// MNetworkVarNames = "CCitadelAbilityBeam_t m_beam"
class CCitadel_Ability_IceBeam : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIceBeaming;
	GameTime_t m_flNextDamageTick;
	// MNetworkEnable
	CCitadelAbilityBeam_t m_beam;
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit;
};
