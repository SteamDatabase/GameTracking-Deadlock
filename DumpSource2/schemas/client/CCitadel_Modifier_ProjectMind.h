class CCitadel_Modifier_ProjectMind : public CCitadelModifier
{
	ParticleIndex_t m_particleStart;
	ParticleIndex_t m_particleEnd;
	ParticleIndex_t m_particleTrail;
	VectorWS m_vecEndLocation;
	VectorWS m_vecStartPosition;
	float32 m_flStartDelay;
	Vector m_vecApplyOffset;
};
