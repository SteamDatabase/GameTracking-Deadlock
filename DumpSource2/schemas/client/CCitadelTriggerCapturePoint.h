// MNetworkVarNames = "GameTime_t m_tQueuedEnableTime"
// MNetworkVarNames = "float m_flCaptureProgress"
// MNetworkVarNames = "int m_nCaptureProgressOwner"
// MNetworkVarNames = "int m_nActivelyCapturingTeam"
// MNetworkVarNames = "int m_nActiveCapturers"
// MNetworkVarNames = "uint8 m_nEnableState"
class CCitadelTriggerCapturePoint : public C_BaseTrigger
{
	CCitadelInWorldEventTimer* m_pUIWorldEventTimer;
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
