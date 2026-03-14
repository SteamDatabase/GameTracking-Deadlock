class CCitadel_Modifier_ExplosiveShots : public CCitadelModifier
{
	CUtlVector< CCitadel_Modifier_ExplosiveShots::BulletEntityPair_t > m_vecHitEnts;
	bool m_bExplosionCanHitMultipleTimes;
};
