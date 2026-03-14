// MNetworkVarNames = "GameTime_t m_flStartTime"
// MNetworkVarNames = "GameTime_t m_flLandedTime"
// MNetworkVarNames = "bool m_bLanded"
// MNetworkVarNames = "bool m_bFalling"
// MNetworkVarNames = "bool m_bInStoneForm"
// MNetworkVarNames = "float m_flStartHeight"
class CCitadel_Ability_Tengu_StoneForm : public C_CitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLandedTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bLanded;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bFalling;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInStoneForm;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flStartHeight;
	ParticleIndex_t m_nStoneFormEffect;
};
