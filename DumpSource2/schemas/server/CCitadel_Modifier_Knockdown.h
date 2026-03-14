class CCitadel_Modifier_Knockdown : public CCitadel_Modifier_Stunned
{
	QAngle m_angStunAngles;
	EKnockDownTypes m_ePreferredKnockdownType;
	bool m_bForceTakePreferred;
	GameTime_t m_flGetUpAnimTime;
	bool m_bGetUpCamSeqStarted;
	float32 m_flOnGroundDuration;
};
