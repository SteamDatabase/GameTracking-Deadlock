// MNetworkVarNames = "QAngle m_anglesCharging"
// MNetworkVarNames = "GameTime_t m_flChargeStartTime"
// MNetworkVarNames = "GameTime_t m_flFastChargeStartTime"
// MNetworkVarNames = "GameTime_t m_flFastChargeEndTime"
// MNetworkVarNames = "bool m_bHitAPlayer"
class CCitadel_Ability_Bull_Charge : public C_CitadelBaseAbility
{
	// MNetworkEnable
	QAngle m_anglesCharging;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnChargingStateChanged"
	GameTime_t m_flChargeStartTime;
	// MNetworkEnable
	GameTime_t m_flFastChargeStartTime;
	// MNetworkEnable
	GameTime_t m_flFastChargeEndTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bHitAPlayer;
	bool m_bFirstTick;
	Vector m_vGoalDir;
};
