class CBaseModifierAura : public CCitadelModifier
{
	// MNotSaved
	CUtlVector< CHandle< C_BaseEntity > > m_hAuraUnits;
	CUtlVector< CHandle< C_BaseEntity > > m_hOldAuraUnits;
	float32 m_flOverrideRadius;
};
