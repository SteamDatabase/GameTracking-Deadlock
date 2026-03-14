// MNetworkVarNames = "EHANDLE m_hLocalPortalLink"
// MNetworkVarNames = "EHANDLE m_hRemotePortalLink"
// MNetworkVarNames = "CUtlString m_brushModelName"
// MNetworkVarNames = "float m_flFadeStartDist"
// MNetworkVarNames = "float m_flFadeEndDist"
// MNetworkVarNames = "float m_flFadeStartAngle"
// MNetworkVarNames = "float m_flFadeEndAngle"
// MNetworkVarNames = "float m_flRemoteViewForwardOffset"
// MNetworkVarNames = "Color m_fadeToColor"
class C_RenderPortal : public C_BaseModelEntity
{
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hLocalPortalLink;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemotePortalLink;
	// MNetworkEnable
	CUtlString m_brushModelName;
	// MNetworkEnable
	float32 m_flFadeStartDist;
	// MNetworkEnable
	float32 m_flFadeEndDist;
	// MNetworkEnable
	float32 m_flFadeStartAngle;
	// MNetworkEnable
	float32 m_flFadeEndAngle;
	// MNetworkEnable
	float32 m_flRemoteViewForwardOffset;
	// MNetworkEnable
	Color m_fadeToColor;
};
