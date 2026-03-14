// MNetworkIncludeByName = "m_iMaxHealth"
// MNetworkIncludeByName = "m_iHealth"
// MNetworkIncludeByName = "m_iTeam"
// MNetworkIncludeByName = "m_vecViewOffset"
// MNetworkExcludeByUserGroup = "m_flCycle"
// MNetworkExcludeByName = "m_flEncodedController"
// MNetworkExcludeByName = "m_flPoseParameter"
// MNetworkVarNames = "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames = "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
// MNetworkVarNames = "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames = "WeakPoint_t m_vecWeakPoints"
// MNetworkVarNames = "bool m_bMinion"
// MNetworkVarNames = "EHANDLE m_hLookTarget"
// MNetworkVarNames = "bool m_bBeamActive"
// MNetworkVarNames = "VectorWS m_vEyeBeamTarget"
class CAI_CitadelNPC : public CAI_BaseNPC
{
	// MNotSaved
	Vector m_vLastGroundEntityCheckPos;
	// MNotSaved
	GameTime_t m_flLastGroundCheckTime;
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelAbilityComponent"
	// MNetworkAlias = "CCitadelAbilityComponent"
	// MNetworkTypeAlias = "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent;
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelRegenComponent"
	// MNetworkAlias = "CCitadelRegenComponent"
	// MNetworkTypeAlias = "CCitadelRegenComponent"
	CCitadelRegenComponent m_CCitadelRegenComponent;
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelMinimapComponent"
	// MNetworkAlias = "CCitadelMinimapComponent"
	// MNetworkTypeAlias = "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent;
	int32 m_iBaseGoldReward;
	int32 m_iSkillShotReward;
	CHandle< CCitadelBaseAbility > m_hAbilityOwner;
	// MNetworkEnable
	// MNotSaved
	CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints;
	// MNetworkEnable
	// MNotSaved
	bool m_bMinion;
	// MNetworkEnable
	// MNotSaved
	CHandle< CBaseEntity > m_hLookTarget;
	int32 m_iCoverGroupID;
	VectorWS m_vecSpawnOrigin;
	// MNetworkEnable
	bool m_bBeamActive;
	// MNetworkEnable
	// MNetworkEncoder = "coord"
	VectorWS m_vEyeBeamTarget;
};
