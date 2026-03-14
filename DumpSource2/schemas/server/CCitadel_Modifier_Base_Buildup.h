class CCitadel_Modifier_Base_Buildup : public CCitadelModifier
{
	GameTime_t m_flLastBuildupAppliedTime;
	float32 m_flDelayedDieTimeRemaining;
	bool m_bInDelayTime;
	float32 m_flBuildUpDecayDelayFromWeaponCycleTime;
};
