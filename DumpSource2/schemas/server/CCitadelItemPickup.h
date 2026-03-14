// MNetworkVarNames = "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames = "int32 m_eLootType"
// MNetworkVarNames = "int32 m_nCurrencyValue"
// MNetworkVarNames = "string_t m_iszModelName"
// MNetworkVarNames = "float m_flModelScale"
// MNetworkVarNames = "EHANDLE m_hTargetPlayer"
// MNetworkVarNames = "float m_flFallRate"
class CCitadelItemPickup : public CCitadelAnimatingModelEntity
{
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelMinimapComponent"
	// MNetworkAlias = "CCitadelMinimapComponent"
	// MNetworkTypeAlias = "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent;
	// MNetworkEnable
	int32 m_eLootType;
	// MNetworkEnable
	int32 m_nCurrencyValue;
	// MNetworkEnable
	CUtlSymbolLarge m_iszModelName;
	// MNetworkEnable
	float32 m_flModelScale;
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetPlayer;
	// MNetworkEnable
	float32 m_flFallRate;
	EObjectivePositions_t m_eObjectivePosition;
	bool m_bRequireGroundForPickup;
	// MNotSaved
	bool m_bOnGround;
	int32 m_nKillingTeamNumber;
	VectorWS m_vHomePosition;
	VectorWS m_vDropPosition;
	GameTime_t m_tFirstPickupTime;
};
