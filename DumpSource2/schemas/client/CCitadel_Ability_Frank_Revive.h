// MNetworkVarNames = "bool m_bReviveIsActive"
// MNetworkVarNames = "GameTime_t m_TimeOfDeath"
// MNetworkVarNames = "GameTime_t m_TimeOfRevive"
// MNetworkVarNames = "float m_flTotalPendingHeal"
class CCitadel_Ability_Frank_Revive : public C_CitadelBaseAbility
{
	// MNetworkEnable
	bool m_bReviveIsActive;
	// MNetworkEnable
	GameTime_t m_TimeOfDeath;
	// MNetworkEnable
	GameTime_t m_TimeOfRevive;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flTotalPendingHeal;
};
