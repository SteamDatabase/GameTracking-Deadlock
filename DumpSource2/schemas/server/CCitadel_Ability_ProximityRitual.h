// MNetworkVarNames = "ECatStatueState_t m_eState"
// MNetworkVarNames = "EHANDLE m_hStatue"
class CCitadel_Ability_ProximityRitual : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	ECatStatueState_t m_eState;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CBaseEntity > m_hStatue;
	GameTime_t m_tCatRecallTime;
	int32 m_iCatRecallHealth;
	VectorWS m_vLaunchPosition;
	QAngle m_qLaunchAngle;
};
