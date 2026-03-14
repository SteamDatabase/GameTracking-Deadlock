class CCitadel_Ability_Trappers_Bolo : public CCitadelBaseAbility
{
	CHandle< CBaseEntity > m_hProjectile;
	CHandle< CBaseEntity > m_hNextTarget;
	CUtlVector< CHandle< CBaseEntity > > m_hHitTargets;
	int32 m_iBounces;
	bool m_bReturning;
};
