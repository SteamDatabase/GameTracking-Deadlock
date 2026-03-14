class CCitadelModifierDruidInvis : public CCitadelModifier
{
	float32 m_flCurrentObscureLevel;
	int32 m_nInvisModifierID;
	CUtlVectorFixedGrowable< ParticleIndex_t, 3 > m_AmbientParticles;
};
