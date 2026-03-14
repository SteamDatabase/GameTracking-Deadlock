// MNetworkVarNames = "CitadelHeroSpawnData_t m_spawnedHero"
// MNetworkVarNames = "CitadelHeroSpawnData_t m_loadingHero"
// MNetworkVarNames = "HeroID_t m_nNoSpawnHeroID"
class CCitadelHeroComponent : public CEntityComponent
{
	// MNetworkEnable
	// MNetworkChangeCallback = "OnHeroChanged"
	CitadelHeroSpawnData_t m_spawnedHero;
	// MNetworkEnable
	// MNetworkPriority = 32
	CitadelHeroSpawnData_t m_loadingHero;
	// MNetworkEnable
	HeroID_t m_nNoSpawnHeroID;
};
