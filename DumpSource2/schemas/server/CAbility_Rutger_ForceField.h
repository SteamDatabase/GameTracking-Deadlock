class CAbility_Rutger_ForceField : public CCitadelBaseAbility
{
	ParticleIndex_t m_hChargingParticle;
	ParticleIndex_t m_hExplodeParticle;
	Vector m_vSpawnPos;
	GameTime_t m_fTimeToDestroyForceField;
	bool m_bFirstThink;
};
