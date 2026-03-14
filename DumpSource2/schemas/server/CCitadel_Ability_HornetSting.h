class CCitadel_Ability_HornetSting : public CCitadelBaseAbility
{
	int32 m_BounceCount;
	bool m_bHitHero;
	CUtlVector< CHandle< CBaseEntity > > m_vecValidBounceTargets;
};
