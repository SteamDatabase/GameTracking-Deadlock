class CCitadel_Modifier_MagicBeam : public CCitadelModifier
{
	CHandle< C_Citadel_Magic_Beam_Blocker > m_hBlocker;
	ParticleIndex_t m_nParticleIndex;
	GameTime_t m_flStartTime;
	QAngle m_qAngle;
	Vector m_vOrigin;
};
