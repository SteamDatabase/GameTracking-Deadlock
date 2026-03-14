class CAI_VolumetricEventSensor : public CPointEntity
{
	bool m_bDisabled;
	AI_VolumetricEventTypeMask_t m_nEventTypeMask;
	float32 m_flSensitivity;
	float32 m_flMaxRange;
	CUtlSymbolLarge m_iszListenFilter;
	CHandle< CBaseFilter > m_hListenFilter;
	CUtlVector< AI_VolumetricEventHandle_t > m_hSensedEvents;
	CEntityOutputTemplate< CAI_VolumetricEventSensor::OnStartedArgs_t > m_OnEventStarted;
	CEntityOutputTemplate< AI_VolumetricEventHandle_t > m_OnEventEnded;
	CEntityIOOutput m_OnAllEventsEnded;
};
