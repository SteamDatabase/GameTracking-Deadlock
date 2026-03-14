// MNetworkVarNames = "EHANDLE m_hTeleportTarget"
// MNetworkVarNames = "bool m_bTeleported"
// MNetworkVarNames = "QAngle m_qPostTeleportAngles"
class CAbility_Drifter_ShadowMark : public CCitadelBaseAbility
{
	Vector m_vLastValidTeleportPosition;
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTeleportTarget;
	// MNetworkEnable
	bool m_bTeleported;
	// MNetworkEnable
	// MNetworkEncoder = "qangle"
	// MNetworkChangeCallback = "OnTeleportAnglesChanged"
	QAngle m_qPostTeleportAngles;
	GameTime_t m_flExpireTime;
	GameTime_t m_flTeleportedTime;
};
