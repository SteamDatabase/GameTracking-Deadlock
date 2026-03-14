// MNetworkVarNames = "bool m_bShadowFormCast"
// MNetworkVarNames = "Vector m_vYamatoCastPos"
// MNetworkVarNames = "Vector m_vTargetCastPos"
// MNetworkVarNames = "GameTime_t m_flFlyingToTargetStartTime"
// MNetworkVarNames = "GameTime_t m_flEndAttackTime"
// MNetworkVarNames = "GameTime_t m_flGrappleStartTime"
// MNetworkVarNames = "GameTime_t m_flGrappleArriveTime"
// MNetworkVarNames = "GameTime_t m_flAttackLatchTime"
// MNetworkVarNames = "Vector m_vAttackLatchPos"
// MNetworkVarNames = "EHANDLE m_hTarget"
// MNetworkVarNames = "bool m_bIsTargetAlly"
// MNetworkVarNames = "GameTime_t m_flGrappleShotAttackTime"
// MNetworkVarNames = "Vector m_rgPath"
// MNetworkVarNames = "int m_nPathIdx"
// MNetworkVarNames = "int m_nPathSize"
// MNetworkVarNames = "float m_flPathLength"
// MNetworkVarNames = "Vector m_vFlyingInitialOffsetToPath"
// MNetworkVarNames = "float flDistFlown"
class CCitadel_Ability_FlyingStrike : public CCitadelBaseYamatoAbility
{
	SatVolumeIndex_t m_desatVolIdx;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bShadowFormCast;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder = "coord"
	Vector m_vYamatoCastPos;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder = "coord"
	Vector m_vTargetCastPos;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flFlyingToTargetStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flEndAttackTime;
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime;
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackLatchTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vAttackLatchPos;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget;
	// MNetworkEnable
	bool m_bIsTargetAlly;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flGrappleShotAttackTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkEncoder = "coord"
	// MNetworkChangeCallback = "OnPathChanged"
	Vector[20] m_rgPath;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int32 m_nPathIdx;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	int32 m_nPathSize;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 m_flPathLength;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vFlyingInitialOffsetToPath;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	float32 flDistFlown;
	Vector m_vLastSafePos;
	ParticleIndex_t m_nGrappleTravelEffect;
	bool m_bPathDirty;
};
