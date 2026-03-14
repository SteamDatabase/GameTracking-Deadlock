// MNetworkVarNames = "GameTime_t m_flDashCastStartTime"
// MNetworkVarNames = "Vector m_vDashCastDir"
class CCitadelBaseDashCastAbility : public CCitadelBaseAbility
{
	CHandle< CCitadelBaseAbility > m_hAbilityToTrigger;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDashCastStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vDashCastDir;
};
