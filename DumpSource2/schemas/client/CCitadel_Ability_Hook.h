// MNetworkVarNames = "EHANDLE m_hHookVictim"
// MNetworkVarNames = "Vector m_vecHookTargetStartPos"
// MNetworkVarNames = "GameTime_t m_flCancelHookTime"
// MNetworkVarNames = "GameTime_t m_flBeginReelHookTime"
// MNetworkVarNames = "GameTime_t m_flBulletShouldExpireTime"
class CCitadel_Ability_Hook : public C_CitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkChangeCallback = "HookVictimChanged"
	CHandle< C_BaseEntity > m_hHookVictim;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecHookTargetStartPos;
	// MNetworkEnable
	GameTime_t m_flCancelHookTime;
	// MNetworkEnable
	GameTime_t m_flBeginReelHookTime;
	// MNetworkEnable
	GameTime_t m_flBulletShouldExpireTime;
	float32 m_flMaxHookTravelTime;
};
