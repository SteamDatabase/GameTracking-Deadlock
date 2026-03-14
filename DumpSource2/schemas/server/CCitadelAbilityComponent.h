// MNetworkVarNames = "CHandle<CCitadelBaseAbility> m_vecAbilities"
// MNetworkVarNames = "CHandle<CCitadelBaseAbility> m_vecThinkableAbilities"
// MNetworkVarNames = "int32 m_arPendingAsyncAbilityReservationSlots"
// MNetworkVarNames = "int32 m_arPendingAsyncAbilityReservationAbilityIDs"
// MNetworkVarNames = "CHandle< CCitadelBaseAbility> m_hSelectedAbility"
// MNetworkVarNames = "CHandle< CCitadelBaseAbility> m_hChannellingAbility"
// MNetworkVarNames = "CHandle< CCitadelBaseAbility> m_hCastDelayingAbility"
// MNetworkVarNames = "EHANDLE m_hPreviouslySelectedAbility"
// MNetworkVarNames = "bool m_bPreviousAbilityQueued"
// MNetworkVarNames = "float m_flTimeScale"
// MNetworkVarNames = "float m_flParticleTimeScale"
// MNetworkVarNames = "bool m_bInInterruptState"
// MNetworkVarNames = "AbilityResource_t m_ResourceStamina"
// MNetworkVarNames = "AbilityResource_t m_ResourceAbility"
// MNetworkVarNames = "ConsumedComponentState_t m_vecConsumedComponents"
class CCitadelAbilityComponent : public CEntityComponent
{
	// MNetworkEnable
	// MNetworkUserGroup = "Abilities"
	// MNetworkPriority = 32
	CNetworkUtlVectorBase< CHandle< CCitadelBaseAbility > > m_vecAbilities;
	// MNetworkEnable
	// MNetworkUserGroup = "Abilities"
	// MNetworkPriority = 32
	CNetworkUtlVectorBase< CHandle< CCitadelBaseAbility > > m_vecThinkableAbilities;
	// MNetworkEnable
	// MNetworkUserGroup = "Abilities"
	// MNetworkPriority = 32
	CNetworkUtlVectorBase< int32 > m_arPendingAsyncAbilityReservationSlots;
	// MNetworkEnable
	// MNetworkUserGroup = "Abilities"
	// MNetworkPriority = 32
	CNetworkUtlVectorBase< int32 > m_arPendingAsyncAbilityReservationAbilityIDs;
	// MNetworkEnable
	// MNetworkChangeCallback = "AbiCompSelectedAbilityChanged"
	CHandle< CCitadelBaseAbility > m_hSelectedAbility;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	CHandle< CCitadelBaseAbility > m_hChannellingAbility;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	CHandle< CCitadelBaseAbility > m_hCastDelayingAbility;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	CHandle< CBaseEntity > m_hPreviouslySelectedAbility;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	bool m_bPreviousAbilityQueued;
	// MNetworkEnable
	// MNetworkChangeCallback = "AbiCompTimeScaleChanged"
	float32 m_flTimeScale;
	// MNetworkEnable
	// MNetworkChangeCallback = "AbiCompParticleTimeScaleChanged"
	float32 m_flParticleTimeScale;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	bool m_bInInterruptState;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	AbilityResource_t m_ResourceStamina;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	AbilityResource_t m_ResourceAbility;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CUtlVectorEmbeddedNetworkVar< ConsumedComponentState_t > m_vecConsumedComponents;
	uint32 m_nExecuteAbilityMask;
	bool m_bSelectedEffectsStarted;
};
