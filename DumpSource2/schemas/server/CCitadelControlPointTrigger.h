// MNetworkVarNames = "float m_flInitialRadius"
// MNetworkVarNames = "float m_flEndRadius"
// MNetworkVarNames = "float m_flProgress"
// MNetworkVarNames = "float m_flCaptureTime"
// MNetworkVarNames = "EHANDLE m_hUnlockPrereq"
// MNetworkVarNames = "bool m_bAvailable"
// MNetworkVarNames = "bool m_bIsBeingCaptured"
// MNetworkVarNames = "bool m_bIsBeingBlocked"
class CCitadelControlPointTrigger : public CTriggerMultiple
{
	CEntityIOOutput m_OnFullyCaptured;
	CEntityIOOutput m_OnBecomeCapturable;
	// MNetworkEnable
	float32 m_flInitialRadius;
	// MNetworkEnable
	float32 m_flEndRadius;
	// MNetworkEnable
	// MNotSaved
	float32 m_flProgress;
	// MNetworkEnable
	float32 m_flCaptureTime;
	// MNetworkEnable
	// MNotSaved
	CHandle< CBaseEntity > m_hUnlockPrereq;
	// MNetworkEnable
	// MNotSaved
	bool m_bAvailable;
	// MNetworkEnable
	// MNotSaved
	bool m_bIsBeingCaptured;
	// MNetworkEnable
	// MNotSaved
	bool m_bIsBeingBlocked;
	// MNotSaved
	GameTime_t m_flLastTouchedTime;
	// MNotSaved
	Vector m_vecBeamTarget;
	// MNotSaved
	Vector m_vecBeamStart;
	// MNotSaved
	ParticleIndex_t m_nFXProgressBeam;
	CUtlSymbolLarge m_strUnlockPrereq;
	CUtlSymbolLarge m_strBeamStart;
	CUtlSymbolLarge m_strBeamTarget;
};
