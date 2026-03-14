// MNetworkVarNames = "float m_flTotalPendingHeal"
class CCitadel_Ability_PassiveBeefy : public CCitadelBaseAbility
{
	GameTime_t m_flLastHealTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flTotalPendingHeal;
};
