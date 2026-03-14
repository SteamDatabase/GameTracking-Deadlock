// MNetworkVarNames = "bool m_bWantsSlow"
// MNetworkVarNames = "GameTime_t m_flLatchedTimeScaleFracChangeTime"
// MNetworkVarNames = "float m_flLatchedTimeScaleFrac"
// MNetworkVarNames = "GameTime_t m_flSpeedBoostEndTime"
// MNetworkVarNames = "GameTime_t m_flShotTimeScaleEndTime"
class CCitadel_Ability_Gunslinger_DemonCarbine : public C_CitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bWantsSlow;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLatchedTimeScaleFracChangeTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flLatchedTimeScaleFrac;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSpeedBoostEndTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flShotTimeScaleEndTime;
	float32 m_flStoredPowerPct;
};
