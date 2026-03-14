class CCitadel_Modifier_HookTarget : public CCitadel_Modifier_Link
{
	float32 m_flCurrentVerticalSpeed;
	bool m_bSuccess;
	bool m_bSameTeam;
	bool m_bPlayedApproachingWhoosh;
	float32 m_flInitialTravelDistance;
	GameTime_t m_flStuckStartTime;
	Vector m_vLastPos;
};
