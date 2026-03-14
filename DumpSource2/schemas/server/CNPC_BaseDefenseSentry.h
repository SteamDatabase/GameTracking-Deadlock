// MNetworkIncludeByName = "m_bTakesDamage"
// MNetworkIncludeByName = "m_nTakeDamageFlags"
// MNetworkVarNames = "Vector m_vecUnitStatusOffset"
class CNPC_BaseDefenseSentry : public CNPC_SimpleAnimatingAI
{
	// MNetworkEnable
	Vector m_vecUnitStatusOffset;
	float32 m_flAttackCone;
	// MNotSaved
	float32 m_flAttackDelay;
	// MNotSaved
	GameTime_t m_flLastAlertSound;
	int16 m_nSentryLevel;
	Vector m_vecForward;
};
