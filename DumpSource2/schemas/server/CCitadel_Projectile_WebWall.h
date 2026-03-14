class CCitadel_Projectile_WebWall : public CCitadelProjectile
{
	bool bHasDetonatedOnTarget;
	ParticleIndex_t m_nWebWallFxIndex;
	Vector m_vecCastPosition;
	Vector m_vecCastPositionNormal;
	Vector m_vecEndPosition;
	Vector m_vecEndPositionNormal;
};
