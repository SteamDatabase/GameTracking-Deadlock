class CAI_Hint : public CServerOnlyEntity
{
	HintNodeData m_NodeData;
	CHandle< CBaseEntity > m_hHintOwner;
	GameTime_t m_flNextUseTime;
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnNPCStartedUsing;
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnNPCStoppedUsing;
	float32 m_nodeFOV;
	bool m_bNodeFOVCheckBehind;
	Vector m_vecForward;
	CUtlSymbolLarge m_iszAnimgraphEntryAction;
	CUtlSymbolLarge m_iszAnimgraphExitAction;
	CUtlSymbolLarge m_iszAnimgraphEntryCmd;
	CUtlSymbolLarge m_iszAnimgraphExitCmd;
	CUtlSymbolLarge m_iszNavlinkTargetName;
	bool m_bRemoveOnUnreserved;
	CHandle< CBaseEntity > m_hAssociatedEntity;
	float32 m_flInteractionDistance;
	float32 m_flCooldown;
	CUtlSymbolLarge m_iszNPCFollowsEntity;
	float32 m_flNPCSnapToHintDistance;
};
