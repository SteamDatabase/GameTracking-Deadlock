class LingeringCopiedAbility_t
{
	CHandle< C_CitadelBaseAbility > m_hAbility;
	int32 m_nBulletsStillLive;
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecModifiers;
	GameTime_t m_flLastTimeShouldKeepTrained;
};
