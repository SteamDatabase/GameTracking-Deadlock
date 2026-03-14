// MNetworkVarNames = "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames = "GameTime_t m_tQueuedEnableTime"
// MNetworkVarNames = "float m_flCaptureProgress"
// MNetworkVarNames = "int m_nCaptureProgressOwner"
// MNetworkVarNames = "int m_nActivelyCapturingTeam"
// MNetworkVarNames = "int m_nActiveCapturers"
// MNetworkVarNames = "uint8 m_nEnableState"
class CCitadelTriggerCapturePoint : public CBaseTrigger
{
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelMinimapComponent"
	// MNetworkAlias = "CCitadelMinimapComponent"
	// MNetworkTypeAlias = "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent;
	CEntityIOOutput m_OnBecomeCapturable;
	CEntityOutputTemplate< int32 > m_OnFullyCaptured;
	CUtlSymbolLarge m_iszGroupName;
	ParticleIndex_t m_nEnabledParticle;
	ParticleIndex_t m_nPreEnableFX;
	CHandle< CNPC_Escort > m_hEscort;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnQueuedEnableTimeChanged"
	GameTime_t m_tQueuedEnableTime;
	// MNetworkEnable
	float32 m_flCaptureProgress;
	// MNetworkEnable
	int32 m_nCaptureProgressOwner;
	// MNetworkEnable
	int32 m_nActivelyCapturingTeam;
	// MNetworkEnable
	int32 m_nActiveCapturers;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnEnableStateChanged"
	uint8 m_nEnableState;
};
