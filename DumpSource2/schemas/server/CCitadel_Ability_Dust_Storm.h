class CCitadel_Ability_Dust_Storm : public CCitadelBaseAbility
{
	CHandle< CCitadel_Ability_Spinning_Blade > m_hSpinningBladeAbility;
	CUtlVector< CHandle< CBaseEntity > > m_vTargets;
};
