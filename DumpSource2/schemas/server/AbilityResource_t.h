// MNetworkVarNames = "GameTime_t m_flLatchTime"
// MNetworkVarNames = "float m_flLatchValue"
class AbilityResource_t
{
	float32 m_flCurrentValue;
	float32 m_flPrevRegenRate;
	float32 m_flMaxValue;
	// MNetworkEnable
	GameTime_t m_flLatchTime;
	// MNetworkEnable
	float32 m_flLatchValue;
};
