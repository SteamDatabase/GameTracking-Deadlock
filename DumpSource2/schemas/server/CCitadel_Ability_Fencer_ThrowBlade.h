class CCitadel_Ability_Fencer_ThrowBlade : public CCitadelBaseAbility
{
	Vector m_vCastPosition;
	QAngle m_qCastAngles;
	ParticleIndex_t m_nMarkParticleIndex;
	ParticleIndex_t m_nLingerParticleIndex;
	ParticleIndex_t m_nExplodeParticleIndex;
	bool m_bHitEnemyPlayer;
};
