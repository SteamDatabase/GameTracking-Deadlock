class CCitadel_Modifier_ConeWaveProjectile : public CCitadel_Modifier_Intrinsic_Base
{
	Vector m_vInitialCastPosition;
	float32 m_flProjectileSpeed;
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities;
};
