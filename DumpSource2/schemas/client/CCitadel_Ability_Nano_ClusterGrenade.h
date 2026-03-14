class CCitadel_Ability_Nano_ClusterGrenade : public C_CitadelBaseAbility
{
	CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies;
	GameTime_t m_flNextProjectileTime;
};
