// MNetworkVarNames = "bool m_bBulletFlying"
// MNetworkVarNames = "bool m_bHasLatchedOnce"
// MNetworkVarNames = "bool m_bLatched"
// MNetworkVarNames = "Vector m_vHarpoonTarget"
// MNetworkVarNames = "float m_flLatchedYaw"
// MNetworkVarNames = "GameTime_t m_flCloseEnoughStartTime"
// MNetworkVarNames = "GameTime_t m_flStuckStartTime"
// MNetworkVarNames = "GameTime_t m_flReelStartTime"
class CAbility_Fathom_ReefdwellerHarpoon : public C_CitadelBaseAbility
{
	bool m_bHitTarget;
	Vector m_vPrevPos;
	// MNetworkEnable
	bool m_bBulletFlying;
	// MNetworkEnable
	bool m_bHasLatchedOnce;
	// MNetworkEnable
	bool m_bLatched;
	// MNetworkEnable
	Vector m_vHarpoonTarget;
	// MNetworkEnable
	float32 m_flLatchedYaw;
	// MNetworkEnable
	GameTime_t m_flCloseEnoughStartTime;
	// MNetworkEnable
	GameTime_t m_flStuckStartTime;
	// MNetworkEnable
	GameTime_t m_flReelStartTime;
};
