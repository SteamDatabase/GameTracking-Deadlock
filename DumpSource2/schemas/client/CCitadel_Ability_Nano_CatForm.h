// MNetworkVarNames = "bool m_bIsInCatform"
// MNetworkVarNames = "GameTime_t m_flLastDamageTime"
// MNetworkVarNames = "GameTime_t m_flTransformStartTime"
// MNetworkVarNames = "GameTime_t m_flTransformEndTime"
// MNetworkVarNames = "float m_flStoredDamageAmp"
class CCitadel_Ability_Nano_CatForm : public C_CitadelBaseAbility
{
	// MNetworkEnable
	bool m_bIsInCatform;
	// MNetworkEnable
	GameTime_t m_flLastDamageTime;
	// MNetworkEnable
	GameTime_t m_flTransformStartTime;
	// MNetworkEnable
	GameTime_t m_flTransformEndTime;
	// MNetworkEnable
	float32 m_flStoredDamageAmp;
};
