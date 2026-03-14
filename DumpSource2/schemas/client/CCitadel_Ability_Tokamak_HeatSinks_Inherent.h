// MNetworkVarNames = "float m_flDissipationRate"
// MNetworkVarNames = "GameTime_t m_flDissipationTime"
// MNetworkVarNames = "GameTime_t m_flHeatTime"
// MNetworkVarNames = "GameTime_t m_flOverheatSoundTime"
// MNetworkVarNames = "bool m_bOverheating"
class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public C_CitadelBaseAbility
{
	int32 m_nIntervalsElapsed;
	GameTime_t m_NextShotTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flDissipationRate;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDissipationTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flHeatTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flOverheatSoundTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bOverheating;
};
