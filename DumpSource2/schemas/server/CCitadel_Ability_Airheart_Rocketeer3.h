// MNetworkVarNames = "bool m_bJetpackActive"
// MNetworkVarNames = "GameTime_t m_tJetpackInputDownTime"
// MNetworkVarNames = "Vector m_vPreservedVelocity"
// MNetworkVarNames = "bool m_bHasLeftGround"
// MNetworkVarNames = "bool m_bOutOfFuelAndHaventTouchedGround"
// MNetworkVarNames = "EJetpackMode_t m_eMode"
// MNetworkVarNames = "GameTime_t m_tModeBeginTime"
// MNetworkVarNames = "Vector m_vJetpackInput"
// MNetworkVarNames = "GameTime_t m_tLastWallAttachTime"
// MNetworkVarNames = "GameTime_t m_tLastGroundedTime"
// MNetworkVarNames = "bool m_bQueueWallAttachJump"
// MNetworkVarNames = "GameTime_t m_tOverdriveBeginTime"
// MNetworkVarNames = "Vector m_vIntentSpaceMPCVelocity"
// MNetworkVarNames = "Vector m_vIntentSpaceMPCOrigin"
// MNetworkVarNames = "float m_flIntentSpeedVerticalActual"
// MNetworkVarNames = "float m_flIntentMultiplier"
class CCitadel_Ability_Airheart_Rocketeer3 : public CCitadelBaseAbility
{
	ParticleIndex_t m_nJetpackFireFX;
	Vector m_vDebugVelocityIntentModelSpace;
	float32 m_flDebugCoeffFactor;
	// MNetworkEnable
	bool m_bJetpackActive;
	// MNetworkEnable
	GameTime_t m_tJetpackInputDownTime;
	// MNetworkEnable
	Vector m_vPreservedVelocity;
	// MNetworkEnable
	bool m_bHasLeftGround;
	// MNetworkEnable
	bool m_bOutOfFuelAndHaventTouchedGround;
	// MNetworkEnable
	EJetpackMode_t m_eMode;
	// MNetworkEnable
	GameTime_t m_tModeBeginTime;
	// MNetworkEnable
	Vector m_vJetpackInput;
	// MNetworkEnable
	GameTime_t m_tLastWallAttachTime;
	// MNetworkEnable
	GameTime_t m_tLastGroundedTime;
	// MNetworkEnable
	bool m_bQueueWallAttachJump;
	// MNetworkEnable
	GameTime_t m_tOverdriveBeginTime;
	// MNetworkEnable
	Vector m_vIntentSpaceMPCVelocity;
	// MNetworkEnable
	Vector m_vIntentSpaceMPCOrigin;
	// MNetworkEnable
	float32 m_flIntentSpeedVerticalActual;
	// MNetworkEnable
	float32 m_flIntentMultiplier;
};
