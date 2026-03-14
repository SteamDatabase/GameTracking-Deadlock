// MNetworkIncludeByName = "m_iMaxHealth"
// MNetworkIncludeByName = "m_iHealth"
// MNetworkIncludeByName = "m_iTeam"
// MNetworkExcludeByName = "m_flSimulationTime"
// MNetworkExcludeByUserGroup = "m_flCycle"
// MNetworkExcludeByName = "m_flEncodedController"
// MNetworkExcludeByName = "m_flPoseParameter"
// MNetworkVarNames = "EHANDLE m_hEnemy"
// MNetworkVarNames = "CHandle<CCitadelBaseAbility> m_hAbilityOwner"
// MNetworkVarNames = "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
class CNPC_SimpleAnimatingAI : public CBaseAnimGraph
{
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEnemy;
	// MNetworkEnable
	CHandle< CCitadelBaseAbility > m_hAbilityOwner;
	// MNetworkEnable
	// MNetworkUserGroup = "CCitadelRegenComponent"
	// MNetworkAlias = "CCitadelRegenComponent"
	// MNetworkTypeAlias = "CCitadelRegenComponent"
	CCitadelRegenComponent m_CCitadelRegenComponent;
};
