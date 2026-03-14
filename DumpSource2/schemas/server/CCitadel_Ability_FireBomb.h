// MNetworkVarNames = "CCitadelAutoScaledTime m_flDetonateTime"
// MNetworkVarNames = "GameTime_t m_flStartTime"
class CCitadel_Ability_FireBomb : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CCitadelAutoScaledTime m_flDetonateTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStartTime;
};
