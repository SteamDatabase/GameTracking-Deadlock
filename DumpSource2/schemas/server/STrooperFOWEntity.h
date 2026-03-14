// MNetworkVarNames = "CEntityIndex m_nEntIndex"
// MNetworkVarNames = "int8 m_nTeam"
// MNetworkVarNames = "uint16 m_nPositionXY"
class STrooperFOWEntity
{
	// MNetworkEnable
	CEntityIndex m_nEntIndex;
	// MNetworkEnable
	int8 m_nTeam;
	// MNetworkEnable
	// MNetworkPriority = 32
	// MNetworkChangeCallback = "OnFieldXYChanged"
	uint16 m_nPositionXY;
};
