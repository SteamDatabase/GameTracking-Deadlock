// MNetworkVarNames = "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames = "bool m_bActive"
// MNetworkVarNames = "CUtlString m_sPickupName"
// MNetworkVarNames = "int m_nNameOffset"
// MNetworkVarNames = "CUtlString m_sAmbientNoise"
// MNetworkVarNames = "Vector m_vVacuumStartPos"
// MNetworkVarNames = "Vector m_vInitialVacuumVel"
// MNetworkVarNames = "CHandle< CCitadelPlayerPawn> m_hVacuumTarget"
class CCitadel_BreakablePropPickup : public CBaseAnimGraph
{
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelMinimapComponent"
	// MNetworkAlias = "CCitadelMinimapComponent"
	// MNetworkTypeAlias = "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent;
	// MNetworkEnable
	bool m_bActive;
	// MNetworkEnable
	CUtlString m_sPickupName;
	// MNetworkEnable
	int32 m_nNameOffset;
	// MNetworkEnable
	CUtlString m_sAmbientNoise;
	// MNetworkEnable
	Vector m_vVacuumStartPos;
	// MNetworkEnable
	Vector m_vInitialVacuumVel;
	// MNetworkEnable
	CHandle< CCitadelPlayerPawn > m_hVacuumTarget;
	VectorWS m_vVacuumPos;
	GameTime_t m_flVacuumStartTime;
	Vector m_vImpactVel;
	Vector m_vImpactPos;
	GameTime_t m_flImpactTime;
};
