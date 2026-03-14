class CCitadel_Modifier_VoidSphere : public CCitadelModifier
{
	bool m_bTeleported;
	ParticleIndex_t m_particleStart;
	ParticleIndex_t m_particleEnd;
	ParticleIndex_t m_particleTrail;
	Vector m_vecEndLocation;
	Vector m_vecStartPosition;
	Vector m_vecEndLocationCaster;
};
