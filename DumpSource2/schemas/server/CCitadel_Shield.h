// MNetworkIncludeByName = "m_fFlags"
// MNetworkVarNames = "bool m_bAllowRotatingUp"
// MNetworkVarNames = "bool m_bFixedPosition"
// MNetworkVarNames = "float m_flShieldOffset"
class CCitadel_Shield : public CCitadelModelEntity
{
	// MNetworkEnable
	bool m_bAllowRotatingUp;
	// MNetworkEnable
	bool m_bFixedPosition;
	// MNetworkEnable
	float32 m_flShieldOffset;
};
