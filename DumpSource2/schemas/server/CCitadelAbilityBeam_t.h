// MNetworkVarNames = "GameTime_t m_nActivateTime"
// MNetworkVarNames = "QAngle m_angBeamAngles"
// MNetworkVarNames = "VectorWS m_vBeamAimPos"
class CCitadelAbilityBeam_t
{
	// MNetworkEnable
	GameTime_t m_nActivateTime;
	// MNetworkEnable
	QAngle m_angBeamAngles;
	// MNetworkEnable
	// MNetworkEncoder = "coord"
	// MNetworkPriority = 32
	VectorWS m_vBeamAimPos;
	CHandle< CBaseEntity > m_hShooter;
	CHandle< CCitadelPlayerPawn > m_hPlayerShooter;
	bool m_bEnforceLOSToShootPosition;
};
