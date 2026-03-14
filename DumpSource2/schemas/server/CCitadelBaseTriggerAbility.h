// MNetworkVarNames = "CHandle< CCitadelBaseAbility> m_hAbilityToTrigger"
// MNetworkVarNames = "GameTime_t m_SwappedToTime"
class CCitadelBaseTriggerAbility : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CCitadelBaseAbility > m_hAbilityToTrigger;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_SwappedToTime;
};
