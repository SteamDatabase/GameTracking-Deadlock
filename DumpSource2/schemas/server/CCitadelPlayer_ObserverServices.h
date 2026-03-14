// MNetworkVarNames = "QAngle m_angTargetCamera"
// MNetworkVarNames = "Vector m_vTargetCameraPos"
class CCitadelPlayer_ObserverServices : public CPlayer_ObserverServices
{
	int32 m_nCurrentObservedTeam;
	CHandle< CBaseEntity > m_hLastObserverTarget;
	CHandle< CBaseEntity > m_hPreviousTeamTarget;
	// MNetworkEnable
	// MNetworkEncoder = "qangle"
	// MNetworkUserGroup = "LocalPlayerExclusive"
	// MNetworkBitCount = 11
	// MNetworkPriority = 32
	QAngle m_angTargetCamera;
	// MNetworkEnable
	// MNetworkEncoder = "coord"
	// MNetworkUserGroup = "LocalPlayerExclusive"
	// MNetworkPriority = 32
	Vector m_vTargetCameraPos;
};
