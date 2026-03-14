// MNetworkVarNames = "CCitadelAutoScaledTime m_flGroundDashJumpStartTime"
// MNetworkVarNames = "CCitadelAutoScaledTime m_flGroundDashJumpEndTime"
// MNetworkVarNames = "bool m_bJumped"
// MNetworkVarNames = "bool m_bCanDashJump"
// MNetworkVarNames = "int m_nDesiredAirJumpCount"
// MNetworkVarNames = "int m_nExecutedAirJumpCount"
// MNetworkVarNames = "bool m_bInSlideJump"
// MNetworkVarNames = "int8 m_nConsecutiveAirJumps"
// MNetworkVarNames = "int8 m_nConsecutiveWallJumps"
// MNetworkVarNames = "GameTime_t m_flLateralInputSuppressEndTime"
class CCitadel_Ability_Jump : public C_CitadelBaseAbility
{
	GameTime_t m_flLastTimeOnZipLine;
	GameTime_t m_flLastOnGroundTime;
	GameTime_t m_flPhaseStartTime;
	GameTime_t m_flJumpTime;
	GameTime_t m_flWallJumpFatigueStartTime;
	GameTime_t m_flLastThinkTime;
	Vector m_vCurrentWallNormal;
	Vector m_vLastWallCollidedWithNormal;
	Vector m_vLastValidWallJumpNormal;
	Vector m_vLastValidWallJumpNormal_PlayerPosition;
	GameTime_t m_flLastWallJumpTime;
	Vector m_vWallJumpFacingDir;
	EWallJumpFacing m_eWallJumpFacing;
	float32 m_flLastWallJumpFatigueStrength;
	EJumpType_t m_LastJumpType;
	bool m_bShouldCreateAirJumpEffects;
	GameTime_t m_flDoubleJumpFailTime;
	ECitadelAbilityOrders m_eDoubleJumpFailReason;
	Vector m_vWallJumpNormalUsed;
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpStartTime;
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpEndTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bJumped;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanDashJump;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int32 m_nDesiredAirJumpCount;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int32 m_nExecutedAirJumpCount;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInSlideJump;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int8 m_nConsecutiveAirJumps;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int8 m_nConsecutiveWallJumps;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLateralInputSuppressEndTime;
};
