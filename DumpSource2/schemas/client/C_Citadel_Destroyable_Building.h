// MNetworkIncludeByName = "m_bTakesDamage"
// MNetworkIncludeByName = "m_nTakeDamageFlags"
// MNetworkVarNames = "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames = "WeakPoint_t m_vecWeakPoints"
// MNetworkVarNames = "bool m_bDestroyed"
// MNetworkVarNames = "bool m_bActive"
// MNetworkVarNames = "bool m_bFinal"
class C_Citadel_Destroyable_Building : public CCitadelAnimatingModelEntity
{
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelAbilityComponent"
	// MNetworkAlias = "CCitadelAbilityComponent"
	// MNetworkTypeAlias = "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent;
	// MNetworkEnable
	// MNotSaved
	C_UtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints;
	// MNetworkEnable
	// MNetworkChangeCallback = "DestroyedChanged"
	// MNotSaved
	bool m_bDestroyed;
	// MNetworkEnable
	// MNotSaved
	bool m_bActive;
	// MNetworkEnable
	bool m_bFinal;
};
