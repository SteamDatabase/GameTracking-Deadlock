// MNetworkVarNames = "bool m_bActive"
// MNetworkVarNames = "CUtlString m_sPickupName"
// MNetworkVarNames = "int m_nNameOffset"
// MNetworkVarNames = "CUtlString m_sAmbientNoise"
// MNetworkVarNames = "Vector m_vVacuumStartPos"
// MNetworkVarNames = "Vector m_vInitialVacuumVel"
// MNetworkVarNames = "CHandle< CCitadelPlayerPawn> m_hVacuumTarget"
class C_Citadel_BreakablePropPickup : public CBaseAnimGraph
{
	// MNetworkEnable
	// MNetworkChangeCallback = "OnActiveChanged"
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
	// MNetworkChangeCallback = "OnVacuumTargetChanged"
	CHandle< C_CitadelPlayerPawn > m_hVacuumTarget;
	GameTime_t m_flVacuumStartTime;
	VectorWS m_vVacuumPos;
	float32 m_flLastFrameTime;
	bool m_bVacuumFinished;
};
