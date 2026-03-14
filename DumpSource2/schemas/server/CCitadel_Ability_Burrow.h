// MNetworkVarNames = "bool m_bInGround"
// MNetworkVarNames = "GameTime_t m_flLastDamageTime"
// MNetworkVarNames = "GameTime_t m_SpinEndTime"
class CCitadel_Ability_Burrow : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInGround;
	// MNetworkEnable
	GameTime_t m_flLastDamageTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_SpinEndTime;
};
