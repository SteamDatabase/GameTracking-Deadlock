// MNetworkVarNames = "CEntityIndex m_nEntIndex"
// MNetworkVarNames = "int m_nTeam"
// MNetworkVarNames = "Class_T m_eClass"
// MNetworkVarNames = "int m_iLane"
// MNetworkVarNames = "EMinimapHeight m_eHeight"
// MNetworkVarNames = "bool m_bVisibleOnMap"
// MNetworkVarNames = "bool m_bBackdoorProtectionActive"
// MNetworkVarNames = "GameTick_t m_nTickHidden"
// MNetworkVarNames = "CUtlString m_strEntityName"
// MNetworkVarNames = "uint8 m_nHealthPercent"
// MNetworkVarNames = "uint8 m_nPositionX"
// MNetworkVarNames = "uint8 m_nPositionY"
class STeamFOWEntity
{
	// MNetworkEnable
	CEntityIndex m_nEntIndex;
	// MNetworkEnable
	int32 m_nTeam;
	// MNetworkEnable
	Class_T m_eClass;
	// MNetworkEnable
	int32 m_iLane;
	// MNetworkEnable
	EMinimapHeight m_eHeight;
	// MNetworkEnable
	bool m_bVisibleOnMap;
	// MNetworkEnable
	bool m_bBackdoorProtectionActive;
	// MNetworkEnable
	GameTick_t m_nTickHidden;
	// MNetworkEnable
	CUtlString m_strEntityName;
	// MNetworkEnable
	uint8 m_nHealthPercent;
	// MNetworkEnable
	// MNetworkPriority = 32
	uint8 m_nPositionX;
	// MNetworkEnable
	// MNetworkPriority = 32
	uint8 m_nPositionY;
};
