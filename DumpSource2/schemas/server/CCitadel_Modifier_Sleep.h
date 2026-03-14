class CCitadel_Modifier_Sleep : public CCitadelModifier
{
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecSleepModifiers;
	bool m_bIsWakingUp;
	float32 m_flMinSleepDamageToWake;
	float32 m_flMinSleepTime;
	float32 m_flWakeUpDelay;
	float32 m_flTotalDamageTakenWhileAsleep;
};
