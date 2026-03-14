// MNetworkVarNames = "GameTime_t m_nActivateTime"
class CCitadelAbilityBeam_t
{
	// MNetworkEnable
	GameTime_t m_nActivateTime;
	// MNetworkEnable
	// MNetworkEncoder = "qangle"
	// MNetworkChangeCallback = "OnBeamAnglesChanged"
	QAngle m_angBeamAngles;
	// MNetworkEnable
	// MNetworkEncoder = "coord"
	// MNetworkChangeCallback = "OnBeamAimPosChanged"
	VectorWS m_vBeamAimPos;
	bool m_bNeedsBeamReset;
	CHandle< C_BaseEntity > m_hShooter;
	CHandle< C_CitadelPlayerPawn > m_hPlayerShooter;
	bool m_bEnforceLOSToShootPosition;
};
