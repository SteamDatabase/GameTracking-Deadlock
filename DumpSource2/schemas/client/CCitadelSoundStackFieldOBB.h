// MNetworkVarNames = "Vector m_vMins"
// MNetworkVarNames = "Vector m_vMaxs"
// MNetworkVarNames = "uint32 m_nMaxDistance"
// MNetworkVarNames = "CUtlString m_nStackName"
// MNetworkVarNames = "CUtlString m_nOperatorName"
// MNetworkVarNames = "CUtlString m_nOperatorFieldName"
// MNetworkVarNames = "uint32 m_nMusicState"
class CCitadelSoundStackFieldOBB : public C_BaseEntity
{
	// MNetworkEnable
	Vector m_vMins;
	// MNetworkEnable
	Vector m_vMaxs;
	// MNetworkEnable
	uint32 m_nMaxDistance;
	// MNetworkEnable
	CUtlString m_nStackName;
	// MNetworkEnable
	CUtlString m_nOperatorName;
	// MNetworkEnable
	CUtlString m_nOperatorFieldName;
	// MNetworkEnable
	uint32 m_nMusicState;
};
