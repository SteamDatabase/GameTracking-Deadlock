class CCitadel_Modifier_GarbageAura : public CCitadelModifierAura
{
	CUtlVector< CHandle< CBaseEntity > > m_hEnemyHeroInVacuum;
	int32 m_nNumPlayersKilled;
	GameTime_t m_tLastDamageTime;
};
