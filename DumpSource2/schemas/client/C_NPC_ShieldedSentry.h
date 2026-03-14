// MNetworkVarNames = "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames = "float m_flAttackRange"
// MNetworkVarNames = "float m_flAimPitch"
// MNetworkVarNames = "bool m_bHasRecentlyAttacked"
// MNetworkVarNames = "float m_flLifeTime"
// MNetworkVarNames = "GameTime_t m_flSpawnTime"
class C_NPC_ShieldedSentry : public C_NPC_SimpleAnimatingAI
{
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelAbilityComponent"
	// MNetworkAlias = "CCitadelAbilityComponent"
	// MNetworkTypeAlias = "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent;
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
};
