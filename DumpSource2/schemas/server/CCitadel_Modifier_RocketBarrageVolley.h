class CCitadel_Modifier_RocketBarrageVolley : public CCitadelModifier
{
	float32 m_flFiringInterval;
	GameTime_t m_flCastTime;
	GameTime_t m_flNextRocketTime;
	int32 m_nGrenadesLeft;
};
