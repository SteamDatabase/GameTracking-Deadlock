// MNetworkVarNames = "GameTime_t m_flScopeStartTime"
// MNetworkVarNames = "int m_iSnipeKills"
class CCitadel_Ability_Hornet_Snipe : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flScopeStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int32 m_iSnipeKills;
};
