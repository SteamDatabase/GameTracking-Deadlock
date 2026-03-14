// MNetworkVarNames = "CNetworkVelocityVector m_vPositionDeltaVelocity"
// MNetworkVarNames = "bool m_bToggleDuckActive"
// MNetworkVarNames = "bool m_bDucked"
// MNetworkVarNames = "bool m_bInPortalEnvironment"
class CCitadelPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	// MNetworkPriority = 32
	CNetworkVelocityVector m_vPositionDeltaVelocity;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	// MNetworkPriority = 32
	bool m_bToggleDuckActive;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	bool m_bDucked;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerExclusive"
	bool m_bInPortalEnvironment;
	Vector m_vecPogoVelocity;
	Vector m_vecSupport;
	bool m_bColliding;
	bool m_bLandedOnGround;
	bool m_bHasFreeCursor;
	float32 m_flTurnSpringSpeed;
	float32 m_flInputDirectionCommitment;
	int8 m_nSuccessiveDirChanges;
	GameTime_t m_flLastDirChange;
	Vector2D m_vLastWishDir;
};
