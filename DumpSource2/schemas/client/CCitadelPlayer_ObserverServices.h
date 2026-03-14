class CCitadelPlayer_ObserverServices : public CPlayer_ObserverServices
{
	int32 m_nLastLocalPlayerObservedTeam;
	int32 m_nCurrentObservedTeam;
	CHandle< C_BaseEntity > m_hLastObserverTarget;
	CHandle< C_BaseEntity > m_hPreviousTeamTarget;
	// MNetworkEnable
	// MNetworkEncoder = "qangle"
	// MNetworkChangeCallback = "OnTargetCameraAnglesChanged"
	QAngle m_angTargetCamera;
	// MNetworkEnable
	// MNetworkEncoder = "coord"
	// MNetworkChangeCallback = "OnTargetCameraPositionChanged"
	Vector m_vTargetCameraPos;
};
