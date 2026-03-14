class CCitadel_Ability_Spinning_Blade : public CCitadelBaseAbility
{
	CUtlVector< CHandle< CBaseEntity > > m_vecOutgoingHits;
	CHandle< CCitadelProjectile > m_hActiveProjectile;
};
