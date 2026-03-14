// MNetworkVarNames = "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames = "Vector m_vExitOrigin"
class CCitadelTeleportTrigger : public CTriggerModifier
{
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelMinimapComponent"
	// MNetworkAlias = "CCitadelMinimapComponent"
	// MNetworkTypeAlias = "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent;
	// MNetworkEnable
	Vector m_vExitOrigin;
	CUtlSymbolLarge m_strExitPoint;
	CEntityIOOutput m_OnTeleport;
	CUtlSymbolLarge m_strPropModel;
	float32 m_flTeleportDelay;
};
