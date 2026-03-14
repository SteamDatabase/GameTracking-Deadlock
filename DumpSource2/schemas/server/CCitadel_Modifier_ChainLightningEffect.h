class CCitadel_Modifier_ChainLightningEffect : public CCitadelModifier
{
	int32 m_nChainCount;
	CUtlVector< CHandle< CBaseEntity > > m_hHitEntities;
	CUtlVector< CHandle< CBaseEntity > > m_hUnhitEnts;
	Vector m_vLastSource;
};
