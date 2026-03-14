class CChoreoComponent
{
	// MNotSaved
	CNetworkVarChainer __m_pChainEntity;
	CHandle< CBaseModelEntity > m_hOwner;
	SceneEventId_t m_nNextSceneEventId;
	// MNotSaved
	bool m_bUpdateLayerPriorities;
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecChoreoModifiers;
	GameTime_t m_flAllowResponsesEndTime;
};
