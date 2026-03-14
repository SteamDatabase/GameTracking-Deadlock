class CCitadel_Ability_GoldenIdol : public CCitadel_Ability_BaseHeldItem
{
	int32 m_nGold;
	float32 m_flAmberTime;
	float32 m_flSapphireTime;
	GameTime_t m_tAbilityCreateTime;
	GameTime_t m_tLastDamageTime;
	VectorWS m_vHomePosition;
};
