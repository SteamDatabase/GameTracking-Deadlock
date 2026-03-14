class CCitadel_Modifier_Containment_Victim : public CCitadelModifier
{
	float32 m_flGoalHeight;
	float32 m_flFallRate;
	ParticleIndex_t m_nFXIndex;
	ParticleIndex_t m_nFXIndexVictim;
	ParticleIndex_t m_nChainFxIndex;
	float32 m_flTetherRadius;
	Vector m_vecOrigin;
};
