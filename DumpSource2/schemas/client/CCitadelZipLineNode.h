// MNetworkVarNames = "CHandle<CCitadelZipLineNode> m_vecConnections"
// MNetworkVarNames = "int m_vecConnectionDir"
// MNetworkVarNames = "Vector m_vTangentIn"
// MNetworkVarNames = "Vector m_vTangentOut"
// MNetworkVarNames = "float m_flCumulativeDistance"
// MNetworkVarNames = "int16 m_iNodeIndex"
// MNetworkVarNames = "int16 m_eCaptureState"
// MNetworkVarNames = "int16 m_iPrimaryLane"
// MNetworkVarNames = "bool m_bUseBaseLaneColor"
// MNetworkVarNames = "bool m_bIsBaseBackLane"
// MNetworkVarNames = "int16 m_nRopesParity"
// MNetworkVarNames = "bool m_bCornerNode"
// MNetworkVarNames = "bool m_bCapturable"
// MNetworkVarNames = "bool m_bAlwaysUsable"
// MNetworkVarNames = "bool m_bOneWay"
// MNetworkVarNames = "bool m_bDisableZippingToByPlayers"
// MNetworkVarNames = "bool m_bDisableZipAbilityTargeting"
// MNetworkVarNames = "bool m_bUseForMinimapDrawing"
// MNetworkVarNames = "float m_flExtraLatchDistance"
// MNetworkVarNames = "float m_flSpeedMultiplier"
// MNetworkVarNames = "float m_flSpeedMultiplierToBaseBonus"
// MNetworkVarNames = "float m_flSpeedMultiplierFromBaseBonus"
// MNetworkVarNames = "float m_flTaper"
// MNetworkVarNames = "Color m_Color"
// MNetworkVarNames = "EHANDLE m_hGuardingBoss"
// MNetworkVarNames = "float m_flRopeRadius"
// MNetworkVarNames = "bool m_bEnabled"
class CCitadelZipLineNode : public C_BaseModelEntity
{
	// MNetworkEnable
	// MNetworkChangeCallback = "connectionsChanged"
	// MNotSaved
	C_NetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections;
	// MNetworkEnable
	// MNotSaved
	C_NetworkUtlVectorBase< int32 > m_vecConnectionDir;
	// MNetworkEnable
	Vector m_vTangentIn;
	// MNetworkEnable
	Vector m_vTangentOut;
	// MNetworkEnable
	float32 m_flCumulativeDistance;
	// MNetworkEnable
	int16 m_iNodeIndex;
	// MNetworkEnable
	// MNotSaved
	int16 m_eCaptureState;
	// MNetworkEnable
	int16 m_iPrimaryLane;
	// MNetworkEnable
	bool m_bUseBaseLaneColor;
	// MNetworkEnable
	bool m_bIsBaseBackLane;
	// MNetworkEnable
	// MNotSaved
	int16 m_nRopesParity;
	// MNetworkEnable
	bool m_bCornerNode;
	// MNetworkEnable
	bool m_bCapturable;
	// MNetworkEnable
	bool m_bAlwaysUsable;
	// MNetworkEnable
	bool m_bOneWay;
	// MNetworkEnable
	bool m_bDisableZippingToByPlayers;
	// MNetworkEnable
	bool m_bDisableZipAbilityTargeting;
	// MNetworkEnable
	bool m_bUseForMinimapDrawing;
	// MNetworkEnable
	float32 m_flExtraLatchDistance;
	// MNetworkEnable
	float32 m_flSpeedMultiplier;
	// MNetworkEnable
	float32 m_flSpeedMultiplierToBaseBonus;
	// MNetworkEnable
	float32 m_flSpeedMultiplierFromBaseBonus;
	// MNetworkEnable
	float32 m_flTaper;
	// MNetworkEnable
	Color m_Color;
	// MNetworkEnable
	// MNotSaved
	CHandle< C_BaseEntity > m_hGuardingBoss;
	// MNetworkEnable
	float32 m_flRopeRadius;
	// MNetworkEnable
	bool m_bEnabled;
};
