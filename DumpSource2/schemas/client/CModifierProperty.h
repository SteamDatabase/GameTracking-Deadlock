// MNetworkVarNames = "bool m_bAllowModifiersOnDeadEntities"
// MNetworkVarNames = "uint32 m_nDisabledGroups"
// MNetworkVarNames = "uint32 m_bvEnabledStateMask"
// MNetworkVarNames = "uint32 m_bvDisabledStateMask"
// MNetworkVarNames = "uint32 m_bvEnabledPredictedStateMask"
class CModifierProperty
{
	// MNotSaved
	CNetworkVarChainer __m_pChainEntity;
	CHandle< C_BaseEntity > m_hOwner;
	// MSaveOpsForField (UNKNOWN FOR PARSER)
	CUtlVector< CBaseModifier* > m_vecModifiers;
	// MNotSaved
	bool m_bModifierStatesDirty;
	// MNotSaved
	bool m_bPredictedOwner;
	// MNetworkEnable
	bool m_bAllowModifiersOnDeadEntities;
	// MNotSaved
	int8 m_iLockRefCount;
	// MNotSaved
	ModifierPropRuntimeHandle_t m_hHandle;
	// MNotSaved
	uint32 m_nBroadcastEventListenerMask;
	// MNotSaved
	ParticleIndex_t m_nCachedHighestParticleIndex;
	// MSaveOpsForField (UNKNOWN FOR PARSER)
	CUtlVector< OwnerModifierEventListener_t >* m_pNotifyOwnerEvents;
	// MNetworkEnable
	uint32 m_nDisabledGroups;
	// MNetworkEnable
	// MNetworkChangeCallback = "modifierStatesChanged"
	uint32[10] m_bvEnabledStateMask;
	// MNetworkEnable
	// MNetworkChangeCallback = "modifierStatesChanged"
	uint32[10] m_bvDisabledStateMask;
	// MNetworkEnable
	// MNetworkChangeCallback = "modifierStatesChanged"
	uint32[10] m_bvEnabledPredictedStateMask;
};
