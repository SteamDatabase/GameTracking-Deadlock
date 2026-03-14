class CCitadel_Modifier_Obscured : public CCitadelModifier
{
	float32 m_flStartObscuredAmount;
	CUtlVectorFixedGrowable< ParticleIndex_t, 3 > m_AmbientParticles;
};
