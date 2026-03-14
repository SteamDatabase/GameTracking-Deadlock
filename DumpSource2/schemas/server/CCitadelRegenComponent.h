class CCitadelRegenComponent : public CEntityComponent
{
	// MNotSaved
	GameTime_t m_flLastRegenThinkTime;
	float32 m_flRegenAccumulator;
};
