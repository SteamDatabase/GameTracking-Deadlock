// MNetworkIncludeByName = "m_bTakesDamage"
// MNetworkIncludeByName = "m_nTakeDamageFlags"
// MNetworkVarNames = "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames = "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames = "WeakPoint_t m_vecWeakPoints"
// MNetworkVarNames = "bool m_bDestroyed"
// MNetworkVarNames = "bool m_bActive"
// MNetworkVarNames = "bool m_bFinal"
class CCitadel_Destroyable_Building : public CCitadelAnimatingModelEntity
{
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelMinimapComponent"
	// MNetworkAlias = "CCitadelMinimapComponent"
	// MNetworkTypeAlias = "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent;
	CEntityIOOutput m_OnDestroyed;
	CEntityIOOutput m_OnRevitilized;
	CEntityOutputTemplate< float32 > m_OnDamageTaken;
	CEntityOutputTemplate< float32 > m_OnLifeChanged;
	CEntityIOOutput m_OnBecomeActive;
	CEntityIOOutput m_OnBecomeInvulnerable;
	CEntityIOOutput m_OnBecomeVulnerable;
	CEntityIOOutput m_OnUnderAttack;
	CEntityIOOutput m_OnAttackSubsided;
	int32 m_nBuildingHealth;
	int32 m_iLane;
	// MNotSaved
	GameTime_t m_flDestroyedTime;
	// MNotSaved
	GameTime_t m_flLastDamagedTime;
	// MNotSaved
	QAngle m_angOriginal;
	CUtlSymbolLarge m_backdoorProtectionTrigger;
	CUtlSymbolLarge m_strTrooperApproach;
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelAbilityComponent"
	// MNetworkAlias = "CCitadelAbilityComponent"
	// MNetworkTypeAlias = "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent;
	// MNetworkEnable
	// MNotSaved
	CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints;
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
