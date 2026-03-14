class CAI_VolumetricEventEntity : public CPointEntity
{
	AI_VolumetricEventType_t m_iEventType;
	AI_VolumetricEventFlags_t m_iEventFlags;
	float32 m_flRadius;
	AI_VolumetricEventHandle_t m_hEvent;
	float32 m_flDuration;
	CUtlSymbolLarge m_iszProxyEntityName;
};
