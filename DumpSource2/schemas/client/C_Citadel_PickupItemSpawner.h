// MNetworkVarNames = "GameTime_t m_tNextDropTime"
// MNetworkVarNames = "bool m_bPowerupActive"
class C_Citadel_PickupItemSpawner : public CBaseAnimGraph
{
	// MNetworkEnable
	// MNetworkChangeCallback = "OnNextDropTimeChanged"
	GameTime_t m_tNextDropTime;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnPowerupActiveChanged"
	bool m_bPowerupActive;
};
