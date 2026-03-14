class CSoundPatch
{
	CSoundEnvelope m_pitch;
	CSoundEnvelope m_volume;
	// MKV3TransferSaveOpsForField (UNKNOWN FOR PARSER)
	float32 m_shutdownTime;
	// MKV3TransferSaveOpsForField (UNKNOWN FOR PARSER)
	float32 m_flLastTime;
	CUtlSymbolLarge m_iszSoundScriptName;
	CHandle< C_BaseEntity > m_hEnt;
	// MNotSaved
	CEntityIndex m_soundEntityIndex;
	// MNotSaved
	VectorWS m_soundOrigin;
	int32 m_isPlaying;
	CCopyRecipientFilter m_Filter;
	float32 m_flCloseCaptionDuration;
	// MNotSaved
	bool m_bUpdatedSoundOrigin;
	// MNotSaved
	CUtlSymbolLarge m_iszClassName;
};
