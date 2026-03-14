class CCitadel_Ability_Wrecker_Ultimate : public C_CitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkEncoder = "qangle"
	// MNetworkChangeCallback = "OnGrabBeamAnglesChanged"
	QAngle m_angBeamAngles;
	bool m_bNeedsBeamReset;
};
