// MNetworkIncludeByName = "m_iMaxHealth"
// MNetworkIncludeByName = "m_iHealth"
// MNetworkIncludeByName = "m_iTeam"
// MNetworkExcludeByName = "m_flSimulationTime"
// MNetworkExcludeByUserGroup = "m_flCycle"
// MNetworkExcludeByName = "m_flEncodedController"
// MNetworkExcludeByName = "m_flPoseParameter"
// MNetworkVarNames = "EHANDLE m_hEnemy"
// MNetworkVarNames = "CHandle<CCitadelBaseAbility> m_hAbilityOwner"
class C_NPC_SimpleAnimatingAI : public CBaseAnimGraph
{
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEnemy;
	// MNetworkEnable
	CHandle< C_CitadelBaseAbility > m_hAbilityOwner;
};
