class CCitadel_Ability_Nano_ClusterGrenade : public CCitadelBaseAbility
{
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies;
	GameTime_t m_flNextProjectileTime;
};
