// MNetworkVarNames = "ECatStatueState_t m_eState"
// MNetworkVarNames = "EHANDLE m_hStatue"
class CCitadel_Ability_ProximityRitual : public C_CitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	ECatStatueState_t m_eState;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_hStatue;
	VectorWS m_vLaunchPosition;
	QAngle m_qLaunchAngle;
};
