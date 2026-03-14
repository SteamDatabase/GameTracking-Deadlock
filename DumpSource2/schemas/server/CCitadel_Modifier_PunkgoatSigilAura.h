class CCitadel_Modifier_PunkgoatSigilAura : public CCitadelModifierAura
{
	CUtlVector< CHandle< CBaseEntity > > m_vecHitUnits;
	float32 m_flWaveRadius;
	ParticleIndex_t m_nWaveParticleEnemy;
	ParticleIndex_t m_nWaveParticleFriendly;
};
