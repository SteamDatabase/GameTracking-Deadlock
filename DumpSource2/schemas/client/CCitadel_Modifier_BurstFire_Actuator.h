class CCitadel_Modifier_BurstFire_Actuator : public CCitadelModifier
{
	bool m_bLastShotInFlight;
	bool m_bBonusTracked;
	int32 m_nHitCounter;
	int32 m_nTotalBurstFireShots;
	int32 m_nInitialzedClipSize;
	int32 m_nBonusPitch;
	bool m_bInitialized;
	int32 m_nIncreasedBurstShotCount;
	float32 m_flIntraBurstCycleTime;
	float32 m_flCycleTimePct;
	float32 m_flMaxCycleTimeOverride;
	float32 m_flMaxBurstFireCooldownOverride;
};
