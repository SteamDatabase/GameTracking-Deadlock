class CCitadel_Modifier_PunkgoatTethered : public CCitadelModifier
{
	ParticleIndex_t m_nParticleRope1;
	SatVolumeIndex_t m_nSatVolumeIndex;
	GameTime_t m_flLastDamageTime;
	CHandle< C_BaseEntity > m_hTetheredTo;
};
