// MNetworkVarNames = "bool m_bIcePathing"
// MNetworkVarNames = "QAngle m_qLastAngles"
// MNetworkVarNames = "Vector m_vLastVelocity"
// MNetworkVarNames = "bool m_bFirstMovementTick"
class CCitadel_Ability_IcePath : public C_CitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIcePathing;
	// MNetworkEnable
	QAngle m_qLastAngles;
	// MNetworkEnable
	Vector m_vLastVelocity;
	// MNetworkEnable
	bool m_bFirstMovementTick;
	GameTime_t m_tLingerMovementControlUntilTime;
};
