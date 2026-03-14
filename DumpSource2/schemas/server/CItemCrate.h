// MNetworkIncludeByName = "m_iHealth"
// MNetworkIncludeByName = "m_iMaxHealth"
// MNetworkVarNames = "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames = "int m_eLootType"
class CItemCrate : public CPhysicsProp
{
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelMinimapComponent"
	// MNetworkAlias = "CCitadelMinimapComponent"
	// MNetworkTypeAlias = "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent;
	CHandle< CBaseEntity > m_hSpawner;
	EObjectivePositions_t m_eObjectivePosition;
	// MNetworkEnable
	int32 m_eLootType;
};
