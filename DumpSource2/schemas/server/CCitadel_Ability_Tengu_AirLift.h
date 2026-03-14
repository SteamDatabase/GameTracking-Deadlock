// MNetworkVarNames = "EHANDLE m_hGrabTarget"
// MNetworkVarNames = "EFlightState m_eFlightState"
// MNetworkVarNames = "bool m_bIsGrabbing"
// MNetworkVarNames = "bool m_bIsHoldingBomb"
// MNetworkVarNames = "float m_flCurrentSpeed"
class CCitadel_Ability_Tengu_AirLift : public CCitadelBaseAbility
{
	// MNetworkEnable
	CHandle< CBaseEntity > m_hGrabTarget;
	ParticleIndex_t m_nHoldBombEffect;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	EFlightState m_eFlightState;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsGrabbing;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsHoldingBomb;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flCurrentSpeed;
};
