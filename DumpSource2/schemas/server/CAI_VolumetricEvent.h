class CAI_VolumetricEvent
{
	AI_VolumetricEventHandle_t m_hHandle;
	CHandle< CBaseEntity > m_hOwner;
	AI_VolumetricEventTypeMask_t m_nTypeMask;
	AI_VolumetricEventFlags_t m_nFlags;
	AI_VolumetricEventType_t m_nPrimaryType;
	AI_VolumetricEventChannel_t m_nChannel;
	AI_VolumetricEventCategory_t m_nCategory;
	float32 m_flRadius;
	GameTime_t m_flExpireTime;
	CRelativeLocation m_vOrigin;
	CHandle< CBaseEntity > m_hTarget;
};
