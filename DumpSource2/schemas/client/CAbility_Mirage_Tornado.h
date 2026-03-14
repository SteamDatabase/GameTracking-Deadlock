// MNetworkVarNames = "QAngle m_anglesCharging"
// MNetworkVarNames = "GameTime_t m_flChargeStartTime"
class CAbility_Mirage_Tornado : public C_CitadelBaseAbility
{
	GameTime_t m_RecastWindowEnd;
	// MNetworkEnable
	QAngle m_anglesCharging;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnMirageTornadoStateChanged"
	GameTime_t m_flChargeStartTime;
};
