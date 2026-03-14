class CCitadel_Modifier_SmokeGrenade : public CCitadelModifier
{
	CHandle< C_Citadel_SmokeGrenade_Blocker > m_hBlocker;
	CHandle< CPointModifierThinker > m_hFriendlyAura;
	CHandle< CPointModifierThinker > m_hEnemyAura;
	ParticleIndex_t m_nParticleIndex;
	GameTime_t m_flStartTime;
	Vector m_vOrigin;
};
