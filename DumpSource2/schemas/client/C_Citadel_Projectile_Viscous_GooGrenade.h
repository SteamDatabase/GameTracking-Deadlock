class C_Citadel_Projectile_Viscous_GooGrenade : public C_CitadelProjectile
{
	int32 m_nBounces;
	GameTime_t m_tNextDetonateTime;
	CUtlVector< CHandle< C_BaseEntity > > m_vecLastHitTargets;
	CUtlVector< CHandle< C_BaseEntity > > m_vecProjectileHitTargets;
};
