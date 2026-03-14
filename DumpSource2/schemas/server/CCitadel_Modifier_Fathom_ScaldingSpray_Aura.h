class CCitadel_Modifier_Fathom_ScaldingSpray_Aura : public CCitadelModifierAura_Cone
{
	QAngle m_playerAngles;
	bool m_bHasAnyTargets;
	GameTime_t m_flLastStackTime;
	ParticleIndex_t m_ConeParticle;
};
