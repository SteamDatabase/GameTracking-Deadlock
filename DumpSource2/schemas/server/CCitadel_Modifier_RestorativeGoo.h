class CCitadel_Modifier_RestorativeGoo : public CCitadelModifier
{
	GameTime_t m_flEarliestBreakoutTime;
	float32 m_flTotalPendingHeal;
	CHandle< CCitadel_RestorativeGooCube > m_hGooCube;
	float32 m_flBreakoutPercentage;
};
