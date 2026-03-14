// MNetworkVarNames = "bool m_bActive"
// MNetworkVarNames = "bool m_bStartedOnGround"
// MNetworkVarNames = "Vector m_vStartPosition"
// MNetworkVarNames = "QAngle m_qCurrentAngles"
// MNetworkVarNames = "CCitadelAutoScaledTime m_flDepartureTime"
// MNetworkVarNames = "CCitadelAutoScaledTime m_flArrivalTime"
// MNetworkVarNames = "GameTime_t m_flDrainSuppressEndTime"
// MNetworkVarNames = "GameTime_t m_flRecastWindowEnd"
class CCitadel_Ability_Shiv_KillingBlow : public CCitadelBaseShivAbility
{
	// MNetworkEnable
	bool m_bActive;
	// MNetworkEnable
	bool m_bStartedOnGround;
	// MNetworkEnable
	Vector m_vStartPosition;
	// MNetworkEnable
	QAngle m_qCurrentAngles;
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime;
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime;
	Vector m_vLastKnownSafePos;
	// MNetworkEnable
	GameTime_t m_flDrainSuppressEndTime;
	// MNetworkEnable
	GameTime_t m_flRecastWindowEnd;
};
