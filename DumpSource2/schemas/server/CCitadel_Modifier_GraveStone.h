class CCitadel_Modifier_GraveStone : public CCitadelModifierAura
{
	CUtlVector< CHandle< CBaseEntity > > m_vecSpawnedZombies;
	ParticleIndex_t m_nParticleIndexAura;
	ParticleIndex_t m_nParticleIndex;
	GameTime_t m_flStartTime;
	GameTime_t m_flNextSummonTime;
	GameTime_t m_flSpawnBlockTime;
};
