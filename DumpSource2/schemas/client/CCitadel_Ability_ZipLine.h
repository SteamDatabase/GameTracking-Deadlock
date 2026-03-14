// MNetworkVarNames = "GameTime_t m_flTimeStartZipping"
// MNetworkVarNames = "GameTime_t m_flTimeForKnockdownProtection"
// MNetworkVarNames = "GameTime_t m_flTimeStopZipping"
// MNetworkVarNames = "float m_flCasterSpeed"
// MNetworkVarNames = "CNetworkVelocityVector m_vecInitialVel"
// MNetworkVarNames = "Vector m_vecAttachPoint"
// MNetworkVarNames = "EHANDLE m_pPrevNode"
// MNetworkVarNames = "EHANDLE m_pNextNode"
// MNetworkVarNames = "GameTime_t m_flTimeEnterState"
// MNetworkVarNames = "GameTime_t m_flLatchTime"
// MNetworkVarNames = "GameTime_t m_flDamagedTime"
// MNetworkVarNames = "EAttachState_t m_eAttachState"
// MNetworkVarNames = "int m_iAttachedZipLineLane"
// MNetworkVarNames = "bool m_bDroppedFromZipline"
// MNetworkVarNames = "Vector m_vAttachZipLineOffset"
// MNetworkVarNames = "float m_flZiplineAirDrag"
// MNetworkVarNames = "Vector m_vPendulumVelocity"
// MNetworkVarNames = "Vector m_vPendulumPosition"
// MNetworkVarNames = "Vector m_vVelocityHistory1"
// MNetworkVarNames = "Vector m_vVelocityHistory2"
// MNetworkVarNames = "int m_iDesiredLane"
class CCitadel_Ability_ZipLine : public C_CitadelBaseAbility
{
	GameTime_t m_flActivatePressTime;
	bool m_bThinking;
	bool m_bMoveCollidedPushUp;
	EAttachState_t m_eCommittedAttachState;
	// MNetworkEnable
	GameTime_t m_flTimeStartZipping;
	// MNetworkEnable
	GameTime_t m_flTimeForKnockdownProtection;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flTimeStopZipping;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flCasterSpeed;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CNetworkVelocityVector m_vecInitialVel;
	// MNetworkEnable
	Vector m_vecAttachPoint;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_pPrevNode;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_pNextNode;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flTimeEnterState;
	// MNetworkEnable
	GameTime_t m_flLatchTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDamagedTime;
	// MNetworkEnable
	// MNetworkChangeCallback = "AttachStateChanged"
	EAttachState_t m_eAttachState;
	// MNetworkEnable
	int32 m_iAttachedZipLineLane;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bDroppedFromZipline;
	AttachmentHandle_t m_hAttachZipLine;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAttachZipLineOffset;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flZiplineAirDrag;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vPendulumVelocity;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vPendulumPosition;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vVelocityHistory1;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vVelocityHistory2;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkChangeCallback = "DesiredLaneChanged"
	int32 m_iDesiredLane;
};
