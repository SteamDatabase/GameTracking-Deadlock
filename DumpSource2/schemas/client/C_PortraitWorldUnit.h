// MEntityAllowsPortraitWorldSpawn
class C_PortraitWorldUnit : public C_BaseCombatCharacter
{
	bool m_bSuppressIntroEffects;
	bool m_bIsAlternateLoadout;
	bool m_bSpawnBackgroundModels;
	bool m_bAnimateCloth;
	bool m_bDeferredPortrait;
	bool m_bShowParticleAssetModifiers;
	bool m_bIgnorePortraitInfo;
	CUtlSymbolLarge m_BodyGroup;
	float32 m_flStartingAnimationCycle;
	float32 m_flRareLoadoutAnimChance;
	CitadelPortraitEnvironmentType_t m_environment;
	StartupBehavior_t m_nStartupBehavior;
	CUtlSymbolLarge m_cameraName;
	ParticleIndex_t m_nPortraitParticle;
	ParticleIndex_t m_nAmbientParticle;
	HeroID_t m_heroID;
	CUtlSymbolLarge m_strGraphBaseState;
	CUtlSymbolLarge m_sceneName;
	int32 m_nThinksUntilPresent;
};
