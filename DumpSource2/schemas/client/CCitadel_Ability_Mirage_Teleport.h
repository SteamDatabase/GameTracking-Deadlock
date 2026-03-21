// MNetworkVarNames = "EHANDLE m_hTarget"
// MNetworkVarNames = "GameTime_t m_tTeleportCompletedTime"
// MNetworkVarNames = "VectorWS m_vTargetPosition"
// MNetworkVarNames = "QAngle m_vTargetAngles"
class CCitadel_Ability_Mirage_Teleport : public C_CitadelBaseAbility
{
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget;
	// MNetworkEnable
	GameTime_t m_tTeleportCompletedTime;
	// MNetworkEnable
	VectorWS m_vTargetPosition;
	// MNetworkEnable
	QAngle m_vTargetAngles;
};
