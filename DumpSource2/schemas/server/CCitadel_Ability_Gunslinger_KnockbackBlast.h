class CCitadel_Ability_Gunslinger_KnockbackBlast : public CCitadelBaseAbility
{
	Vector m_vecKnockbackDirection;
	CUtlVector< CHandle< CBaseEntity > > m_vecKnockbackedUnits;
};
