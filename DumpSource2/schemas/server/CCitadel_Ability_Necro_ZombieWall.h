// MNetworkVarNames = "GameTime_t m_tWallDeployFinishTime"
class CCitadel_Ability_Necro_ZombieWall : public CCitadelBaseAbility
{
	// MNetworkEnable
	GameTime_t m_tWallDeployFinishTime;
	CUtlVector< CHandle< CBaseEntity > > m_vecHitUnits;
};
