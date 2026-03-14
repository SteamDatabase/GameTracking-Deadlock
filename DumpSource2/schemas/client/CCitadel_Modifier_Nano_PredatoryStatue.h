class CCitadel_Modifier_Nano_PredatoryStatue : public CCitadelModifier
{
	GameTime_t m_GameTimeEnabled;
	GameTime_t m_LastCatInAreaTime;
	bool m_bIsAttacking;
	int32 m_iTargetID;
};
