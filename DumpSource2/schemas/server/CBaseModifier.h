class CBaseModifier
{
	ModifierSerialNumber_t m_nSerialNumber;
	GameTime_t m_flLastAppliedTime;
	GameTime_t m_flCreationTime;
	float32 m_flDuration;
	CHandle< CBaseEntity > m_hCaster;
	CHandle< CBaseEntity > m_hAbility;
	CModifierHandleBase m_hAuraProvider;
	bool m_bInAuraRange;
	// MNotSaved
	ModifierQueuedRefreshHandle_t m_nQueuedModifierRefreshHandle;
	CUtlStringToken m_nAbilitySubclassID;
	uint8 m_iAttributes;
	uint8 m_iTeam;
	int16 m_iStackCount;
	int16 m_iMaxStackCount;
	// MNotSaved
	CUtlVector< GameTime_t >* m_pVecStackDecayTimes;
	uint8 m_eDestroyReason;
	bool m_bDisabled;
	bool m_bSuppressSendModifier;
	float32 m_flThinkInterval;
	GameTime_t m_flThinkIntervalStartTime;
	float32 m_flAsyncThinkInterval;
	GameTime_t m_flAsyncThinkIntervalStartTime;
	float32 m_flTimeScale;
	// MNotSaved
	CUtlVector< IModifierTrackedObject* >* m_pVecTrackedObjects;
	// MNotSaved
	ModifierRuntimeHandle_t m_hModifierListHandle;
	// MNotSaved
	int32 m_iStringIndex;
};
