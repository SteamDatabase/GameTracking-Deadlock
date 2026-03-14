class CCitadel_Ability_HornetSting : public C_CitadelBaseAbility
{
	int32 m_BounceCount;
	bool m_bHitHero;
	CUtlVector< CHandle< C_BaseEntity > > m_vecValidBounceTargets;
};
