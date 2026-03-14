// MNetworkVarNames = "GameTime_t m_tDrainLifeStopTime"
// MNetworkVarNames = "GameTime_t m_tSlowStartTime"
// MNetworkVarNames = "GameTime_t m_tSlowStopTime"
class CCitadel_Ability_LifeDrain : public CCitadelBaseAbility
{
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecModifiers;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_tDrainLifeStopTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerExclusive"
	GameTime_t m_tSlowStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerExclusive"
	GameTime_t m_tSlowStopTime;
};
