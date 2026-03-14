// MNetworkVarNames = "EHANDLE m_hTeleportTarget"
// MNetworkVarNames = "bool m_bTeleported"
// MNetworkVarNames = "QAngle m_qPostTeleportAngles"
class CAbility_Drifter_ShadowMark : public C_CitadelBaseAbility
{
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTeleportTarget;
	// MNetworkEnable
	bool m_bTeleported;
	// MNetworkEnable
	// MNetworkEncoder = "qangle"
	// MNetworkChangeCallback = "OnTeleportAnglesChanged"
	QAngle m_qPostTeleportAngles;
	GameTime_t m_flExpireTime;
	GameTime_t m_flTeleportedTime;
};
