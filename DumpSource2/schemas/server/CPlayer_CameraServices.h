// MNetworkVarNames = "QAngle m_vecPunchAngle"
// MNetworkVarNames = "QAngle m_vecPunchAngleVel"
// MNetworkVarNames = "GameTick_t m_nPunchAngleJoltTick"
// MNetworkVarNames = "fogplayerparams_t m_PlayerFog"
// MNetworkVarNames = "CHandle< CColorCorrection> m_hColorCorrectionCtrl"
// MNetworkVarNames = "CHandle< CBaseEntity> m_hViewEntity"
// MNetworkVarNames = "CHandle< CTonemapController2> m_hTonemapController"
// MNetworkVarNames = "audioparams_t m_audio"
// MNetworkVarNames = "CHandle<CPostProcessingVolume> m_PostProcessingVolumes"
class CPlayer_CameraServices : public CPlayerPawnComponent
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	// MNetworkPriority = 32
	// MNetworkEncoder = "qangle_precise"
	QAngle m_vecPunchAngle;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	// MNetworkEncoder = "qangle_precise"
	QAngle m_vecPunchAngleVel;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnPunchJoltChanged"
	GameTick_t m_nPunchAngleJoltTick;
	// MNetworkEnable
	fogplayerparams_t m_PlayerFog;
	// MNetworkEnable
	CHandle< CColorCorrection > m_hColorCorrectionCtrl;
	// MNetworkEnable
	CHandle< CBaseEntity > m_hViewEntity;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	CHandle< CTonemapController2 > m_hTonemapController;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	audioparams_t m_audio;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerAndObserversExclusive"
	CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > > m_PostProcessingVolumes;
	float32 m_flOldPlayerZ;
	float32 m_flOldPlayerViewOffsetZ;
	CUtlVector< CHandle< CEnvSoundscapeTriggerable > > m_hTriggerSoundscapeList;
};
