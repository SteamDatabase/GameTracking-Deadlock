// MNetworkVarNames = "int32 m_nModelID"
// MNetworkVarNames = "Vector2D m_vecPanelSize"
// MNetworkVarNames = "Vector m_vecPanelVertices"
// MNetworkVarNames = "float m_flThickness"
// MNetworkVarNames = "CUtlStringToken m_SurfacePropStringToken"
class ice_path_shard_model_desc_t
{
	// MNetworkEnable
	int32 m_nModelID;
	// MNetworkEnable
	Vector2D m_vecPanelSize;
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_vecPanelVertices;
	// MNetworkEnable
	float32 m_flThickness;
	// MNetworkEnable
	CUtlStringToken m_SurfacePropStringToken;
};
