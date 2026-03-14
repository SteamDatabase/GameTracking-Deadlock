class CCitadel_Ability_Gunslinger_KnockbackBlast : public C_CitadelBaseAbility
{
	Vector m_vecKnockbackDirection;
	CUtlVector< CHandle< C_BaseEntity > > m_vecKnockbackedUnits;
};
