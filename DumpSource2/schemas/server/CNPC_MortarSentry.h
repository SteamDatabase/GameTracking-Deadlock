class CNPC_MortarSentry : public CAI_CitadelNPC
{
	float32 m_flAttackCone;
	// MNotSaved
	float32 m_flLastAlertSound;
	float32 m_flTrackingSpeed;
	VectorWS m_vTargetPosition;
	float32 m_flSearchRadius;
	float32 m_flLifeTime;
};
