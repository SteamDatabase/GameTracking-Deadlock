class CCitadel_Modifier_TechBurst_Proc : public CCitadel_Modifier_BaseEventProc
{
	CHandle< CBaseEntity > m_hProcAbility;
	CUtlVector< CHandle< CBaseEntity > > m_hitTargets;
};
