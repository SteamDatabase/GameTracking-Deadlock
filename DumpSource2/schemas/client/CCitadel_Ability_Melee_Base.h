// MNetworkVarNames = "bool m_bUsingThisMelee"
// MNetworkVarNames = "bool m_bUsingMeleeTagActive"
// MNetworkVarNames = "bool m_bHitWithThisAttack"
// MNetworkVarNames = "GameTime_t m_flLastActivateTime"
// MNetworkVarNames = "GameTime_t m_flNextAttackAllowedTime"
// MNetworkVarNames = "GameTime_t m_flAttackTriggeredTime"
class CCitadel_Ability_Melee_Base : public C_CitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bUsingThisMelee;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bUsingMeleeTagActive;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bHitWithThisAttack;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastActivateTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackAllowedTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackTriggeredTime;
};
