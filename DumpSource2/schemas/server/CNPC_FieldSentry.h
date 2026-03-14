// MNetworkVarNames = "float m_flAimPitch"
// MNetworkVarNames = "float m_flAttackRange"
class CNPC_FieldSentry : public CNPC_SimpleAnimatingAI
{
	// MNetworkEnable
	// MNotSaved
	float32 m_flAimPitch;
	// MNotSaved
	GameTime_t m_flNextAttackTime;
	float32 m_flAttackCone;
	float32 m_flAttackDelay;
	// MNotSaved
	GameTime_t m_flLastAlertSound;
	float32 m_flTrackingSpeed;
	float32 m_flDeployTime;
	float32 m_flLifeTime;
	// MNotSaved
	bool m_bHadEnemy;
	bool m_bLockedOn;
	// MNetworkEnable
	// MNotSaved
	float32 m_flAttackRange;
};
