// MNetworkVarNames = "float m_flVertOffset"
// MNetworkVarNames = "float m_flHorizGap"
// MNetworkVarNames = "Vector m_vStartPos"
// MNetworkVarNames = "Vector m_vTargetPos"
// MNetworkVarNames = "QAngle m_angFacing"
// MNetworkVarNames = "int m_nMantleTypeIndex"
// MNetworkVarNames = "GameTime_t m_flStartTime"
class CCitadel_Ability_Mantle : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flVertOffset;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flHorizGap;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStartPos;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vTargetPos;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	QAngle m_angFacing;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int32 m_nMantleTypeIndex;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStartTime;
};
