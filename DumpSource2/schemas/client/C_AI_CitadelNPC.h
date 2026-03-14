// MNetworkIncludeByName = "m_iMaxHealth"
// MNetworkIncludeByName = "m_iHealth"
// MNetworkIncludeByName = "m_iTeam"
// MNetworkIncludeByName = "m_vecViewOffset"
// MNetworkExcludeByUserGroup = "m_flCycle"
// MNetworkExcludeByName = "m_flEncodedController"
// MNetworkExcludeByName = "m_flPoseParameter"
// MNetworkOverride = "m_lifeState"
// MNetworkVarNames = "bool m_bBeamActive"
// MNetworkVarNames = "WeakPoint_t m_vecWeakPoints"
// MNetworkVarNames = "bool m_bMinion"
// MNetworkVarNames = "EHANDLE m_hLookTarget"
// MNetworkVarNames = "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
class C_AI_CitadelNPC : public C_AI_BaseNPC
{
	// MNetworkEnable
	// MNetworkChangeCallback = "OnEyeBeamActiveChanged"
	bool m_bBeamActive;
	// MNetworkEnable
	// MNetworkEncoder = "coord"
	// MNetworkChangeCallback = "OnEyeBeamTargetChanged"
	VectorWS m_vEyeBeamTarget;
	// MNotSaved
	int32 m_nPlayerTeamEvent;
	// MNetworkEnable
	// MNotSaved
	C_UtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints;
	// MNetworkEnable
	// MNotSaved
	bool m_bMinion;
	// MNetworkEnable
	// MNotSaved
	CHandle< C_BaseEntity > m_hLookTarget;
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelAbilityComponent"
	// MNetworkAlias = "CCitadelAbilityComponent"
	// MNetworkTypeAlias = "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent;
};
