class CCitadel_Modifier_StormCloud : public CCitadelModifier
{
	GameTime_t m_flNextRandomLightningStrike;
	GameTime_t m_flStartTime;
	float32 m_flRadiusIncrementPerSecond;
	Vector m_vCastPosition;
	bool m_bFiredEndingSoonSound;
	int32 m_nLastTickForLightningCenterCalc;
	Vector m_vecLightningCenter;
	SatVolumeIndex_t m_nSatVolumeIndex;
};
