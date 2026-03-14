class HintNodeData
{
	CUtlSymbolLarge strEntityName;
	int16 nHintType;
	CUtlSymbolLarge strGroup;
	int32 iDisabled;
	CUtlSymbolLarge iszGenericType;
	HintIgnoreFacing_t fIgnoreFacing;
	NPC_STATE minState;
	NPC_STATE maxState;
	int32 nRadius;
	HintPriority_t ePriority;
	bool bReturnHintPositionAsOnGroundPerHull;
};
