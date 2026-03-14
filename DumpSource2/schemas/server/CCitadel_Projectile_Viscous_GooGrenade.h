class CCitadel_Projectile_Viscous_GooGrenade : public CCitadelProjectile
{
	int32 m_nBounces;
	GameTime_t m_tNextDetonateTime;
	CUtlVector< CHandle< CBaseEntity > > m_vecLastHitTargets;
	CUtlVector< CHandle< CBaseEntity > > m_vecProjectileHitTargets;
};
