// MNetworkVarNames = "GameTime_t m_flStateStartTime"
// MNetworkVarNames = "GameTime_t m_flDashStartTime"
// MNetworkVarNames = "EMeleeHold_AttackState m_eCurrentAttackState"
// MNetworkVarNames = "EMeleeHold_AttackType m_eCurrentAttackType"
// MNetworkVarNames = "Vector m_vAirDashDir"
// MNetworkVarNames = "bool m_bAttackStartedWhileSliding"
// MNetworkVarNames = "GameTime_t m_flLightChainEndTime"
// MNetworkVarNames = "int m_nLightChainCount"
class CCitadel_Ability_HoldMelee : public CCitadel_Ability_Melee_Base
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStateStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDashStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	EMeleeHold_AttackState m_eCurrentAttackState;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	EMeleeHold_AttackType m_eCurrentAttackType;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAirDashDir;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bAttackStartedWhileSliding;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLightChainEndTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int32 m_nLightChainCount;
	bool m_bCreatedChargeEffects;
	QAngle m_angForced;
	Vector m_vGoalDir;
};
