// MNetworkVarNames = "Vector m_vecCastStartPos"
// MNetworkVarNames = "Vector m_vecDashStartPos"
// MNetworkVarNames = "Vector m_vecDashEndPos"
// MNetworkVarNames = "QAngle m_angDashStartAng"
// MNetworkVarNames = "GameTime_t m_flDashStartTime"
// MNetworkVarNames = "GameTime_t m_flGrappleStartTime"
// MNetworkVarNames = "GameTime_t m_flGrappleArriveTime"
// MNetworkVarNames = "EHANDLE m_hTarget"
// MNetworkVarNames = "GameTime_t m_flGrappleShotAttackTime"
// MNetworkVarNames = "Vector m_rgTargetPos"
// MNetworkVarNames = "GameTime_t m_rgTargetPosTime"
class CCitadel_Ability_TangoTether : public C_CitadelBaseAbility
{
	SatVolumeIndex_t m_desatVolIdx;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecCastStartPos;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecDashStartPos;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecDashEndPos;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	QAngle m_angDashStartAng;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDashStartTime;
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime;
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget;
	float32 m_flVelSpring;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flGrappleShotAttackTime;
	int32 m_nTicksNotMoving;
	Vector m_vecPrevPos;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder = "coord"
	Vector[20] m_rgTargetPos;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t[20] m_rgTargetPosTime;
	ParticleIndex_t m_nGrappleTravelEffect;
};
