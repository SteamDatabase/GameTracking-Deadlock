// MNetworkVarNames = "Vector m_vStartPosition"
// MNetworkVarNames = "Vector m_vEndPosition"
// MNetworkVarNames = "bool m_bIsDashing"
class CCitadel_Ability_NanoDash : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStartPosition;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vEndPosition;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsDashing;
	CUtlVector< CEntityIndex > m_vecHitEnemies;
	Vector m_vecLastPosition;
	GameTime_t m_flStuckTime;
};
