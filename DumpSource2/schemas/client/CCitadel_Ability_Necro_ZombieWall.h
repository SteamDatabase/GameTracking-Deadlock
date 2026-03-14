// MNetworkVarNames = "GameTime_t m_tWallDeployFinishTime"
class CCitadel_Ability_Necro_ZombieWall : public C_CitadelBaseAbility
{
	// MNetworkEnable
	GameTime_t m_tWallDeployFinishTime;
	CUtlVector< CHandle< C_BaseEntity > > m_vecHitUnits;
};
