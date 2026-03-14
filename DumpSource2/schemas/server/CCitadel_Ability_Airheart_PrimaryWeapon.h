class CCitadel_Ability_Airheart_PrimaryWeapon : public CCitadel_Ability_PrimaryWeapon
{
	CUtlVector< CHandle< CBaseEntity > > m_vecStuckTargets;
	CUtlVector< CHandle< CBaseEntity > > m_vecBombsInWorld;
};
