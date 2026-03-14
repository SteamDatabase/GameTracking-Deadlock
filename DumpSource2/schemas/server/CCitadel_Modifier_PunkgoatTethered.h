class CCitadel_Modifier_PunkgoatTethered : public CCitadelModifier
{
	ParticleIndex_t m_nRangeIndicatorCaster;
	ParticleIndex_t m_nRangeIndicatorParent;
	GameTime_t m_tLastLOSTime;
	GameTime_t m_flLastDamageTime;
	CHandle< CBaseEntity > m_hTetheredTo;
};
