class CAI_Senses : public CAI_Component
{
	float32 m_flLookDist;
	float32 m_flLookDistIdle;
	float32 m_flLastLookDist;
	GameTime_t m_TimeLastLook;
	CUtlVector< CHandle< CBaseEntity > > m_SeenHighPriority;
	CUtlVector< CHandle< CBaseEntity > > m_SeenNPCs;
	CUtlVector< CHandle< CBaseEntity > > m_SeenMisc;
	// MNotSaved
	CUtlVector< CHandle< CBaseEntity > > m_GatheredEntities;
	// MNotSaved
	CUtlVector< CHandle< CBaseEntity > > m_GatheredProxyEntities;
	// MNotSaved
	CUtlVector< CHandle< CBaseEntity > >*[3] m_SeenArrays;
	GameTime_t m_TimeLastLookHighPriority;
	GameTime_t m_TimeLastLookNPCs;
	GameTime_t m_TimeLastLookMisc;
	AI_SensingFlags_t m_iSensingFlags;
	AI_VolumetricEventFlags_t m_nExclusionFlags;
	CAI_VolumetricEvent* m_pCachedTaskEvent;
	float32 m_flSensingSensitivity;
	AI_VolumetricEventTypeMask_t m_nSensingInterests;
	// MNotSaved
	CUtlVectorFixedGrowable< AI_VolumetricEventHandle_t, 16 > m_vecAudibleEvents;
};
