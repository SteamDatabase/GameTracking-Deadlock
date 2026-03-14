// MNetworkVarNames = "float m_flGainRate"
// MNetworkVarNames = "float m_flDrainRate"
// MNetworkVarNames = "float m_flMaxValue"
// MNetworkVarNames = "float m_flLatchedValue"
// MNetworkVarNames = "GameTime_t m_flLatchedTime"
// MNetworkVarNames = "ELockonState m_eLockonState"
// MNetworkVarNames = "EHANDLE m_hTarget"
class LockonTarget_t
{
	// MNetworkEnable
	float32 m_flGainRate;
	// MNetworkEnable
	float32 m_flDrainRate;
	// MNetworkEnable
	float32 m_flMaxValue;
	int32 m_nPrevFullStacks;
	// MNetworkEnable
	float32 m_flLatchedValue;
	// MNetworkEnable
	GameTime_t m_flLatchedTime;
	// MNetworkEnable
	ELockonState m_eLockonState;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget;
};
