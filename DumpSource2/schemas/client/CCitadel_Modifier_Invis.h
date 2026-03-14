class CCitadel_Modifier_Invis : public CCitadelModifier
{
	bool m_bInvis;
	GameTime_t m_flStartInvisTime;
	bool m_bFullyInvis;
	GameTime_t m_flLastDamageTaken;
	GameTime_t m_flLastSpotted;
	ParticleIndex_t m_nDetectionRangeRing;
	ParticleIndex_t m_nFullInvisEffect;
};
