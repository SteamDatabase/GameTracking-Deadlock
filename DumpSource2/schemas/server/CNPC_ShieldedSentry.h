// MNetworkVarNames = "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames = "float m_flAttackRange"
// MNetworkVarNames = "float m_flAimPitch"
// MNetworkVarNames = "bool m_bHasRecentlyAttacked"
// MNetworkVarNames = "float m_flLifeTime"
// MNetworkVarNames = "GameTime_t m_flSpawnTime"
class CNPC_ShieldedSentry : public CNPC_SimpleAnimatingAI
{
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelMinimapComponent"
	// MNetworkAlias = "CCitadelMinimapComponent"
	// MNetworkTypeAlias = "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent;
	// MNetworkEnable
	// MNotSaved
	float32 m_flAttackRange;
	// MNetworkEnable
	// MNotSaved
	float32 m_flAimPitch;
	// MNetworkEnable
	// MNotSaved
	bool m_bHasRecentlyAttacked;
	// MNetworkEnable
	float32 m_flLifeTime;
	// MNetworkEnable
	GameTime_t m_flSpawnTime;
	float32 m_flAttackCone;
	float32 m_flTrackingSpeed;
	float32 m_flDeployTime;
	float32 m_flAttackDelay;
};
