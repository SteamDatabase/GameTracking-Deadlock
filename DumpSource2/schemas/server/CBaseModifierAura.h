class CBaseModifierAura : public CCitadelModifier
{
	// MNotSaved
	CUtlVector< CHandle< CBaseEntity > > m_hAuraUnits;
	CUtlVector< CHandle< CBaseEntity > > m_hOldAuraUnits;
	float32 m_flOverrideRadius;
};
