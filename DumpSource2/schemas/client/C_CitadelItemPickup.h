// MNetworkVarNames = "int32 m_eLootType"
// MNetworkVarNames = "int32 m_nCurrencyValue"
// MNetworkVarNames = "string_t m_iszModelName"
// MNetworkVarNames = "float m_flModelScale"
// MNetworkVarNames = "EHANDLE m_hTargetPlayer"
// MNetworkVarNames = "float m_flFallRate"
class C_CitadelItemPickup : public CCitadelAnimatingModelEntity
{
	// MNetworkEnable
	int32 m_eLootType;
	// MNetworkEnable
	int32 m_nCurrencyValue;
	// MNetworkEnable
	CUtlSymbolLarge m_iszModelName;
	// MNetworkEnable
	float32 m_flModelScale;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetPlayer;
	// MNetworkEnable
	float32 m_flFallRate;
};
