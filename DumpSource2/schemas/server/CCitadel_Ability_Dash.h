// MNetworkVarNames = "float m_flDashAngle"
// MNetworkVarNames = "GameTime_t m_GroundDashExecuteTime"
// MNetworkVarNames = "GameTime_t m_GroundDashCancelExecuteTime"
// MNetworkVarNames = "int m_nLastGroundDashTick"
// MNetworkVarNames = "GameTime_t m_flAirDashCastTime"
// MNetworkVarNames = "Vector m_flAirDashStartPos"
// MNetworkVarNames = "GameTime_t m_flAirDashDragStartTime"
// MNetworkVarNames = "int8 m_nConsecutiveAirDashes"
// MNetworkVarNames = "int8 m_nConsecutiveDownDashes"
// MNetworkVarNames = "bool m_bDownAirDash"
class CCitadel_Ability_Dash : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flDashAngle;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_GroundDashExecuteTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_GroundDashCancelExecuteTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int32 m_nLastGroundDashTick;
	bool m_bTagCanActivateGroundDash;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAirDashCastTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_flAirDashStartPos;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAirDashDragStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int8 m_nConsecutiveAirDashes;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int8 m_nConsecutiveDownDashes;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bDownAirDash;
	GameTime_t m_flAirDashDelayedEffectsTime;
};
