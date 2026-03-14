// MNetworkVarNames = "Vector m_vStartPosition"
// MNetworkVarNames = "Vector m_vDashDirection"
// MNetworkVarNames = "bool m_bIsDashing"
// MNetworkVarNames = "bool m_bStartedInAir"
class CCitadel_Ability_ShivDash : public CCitadelBaseShivAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStartPosition;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vDashDirection;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsDashing;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bStartedInAir;
	CUtlVector< CEntityIndex > m_vecHitEnemies;
	Vector m_vecLastPosition;
	int32 m_nReductionsLeft;
	GameTime_t m_flStuckTime;
	CHandle< CPointModifierThinker > m_hEchoThinker;
	GameTime_t m_EchoStartTime;
	bool m_bLetEchoPlay;
	bool m_bDiscontinuityInEcho;
};
