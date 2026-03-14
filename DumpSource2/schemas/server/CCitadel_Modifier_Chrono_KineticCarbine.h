class CCitadel_Modifier_Chrono_KineticCarbine : public CCitadelModifier
{
	bool m_bShotAnimPlayed;
	int32 m_nBulletCount;
	float32 m_flElapsedPct;
	CHandle< CCitadelBulletTimeWarp > m_hTimeWarp;
	ParticleIndex_t m_nFullyChargedParticle;
};
