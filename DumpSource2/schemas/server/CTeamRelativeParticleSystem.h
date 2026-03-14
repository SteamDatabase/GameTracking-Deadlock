// MNetworkExcludeByName = "m_iEffectIndex"
// MNetworkIncludeByName = "m_iTeamNum"
// MNetworkVarNames = "HParticleSystemDefinitionStrong m_iFriendlyEffectIndex"
// MNetworkVarNames = "HParticleSystemDefinitionStrong m_iEnemyEffectIndex"
class CTeamRelativeParticleSystem : public CParticleSystem
{
	CUtlSymbolLarge m_iszFriendlyEffectName;
	CUtlSymbolLarge m_iszEnemyEffectName;
	// MNetworkEnable
	// MNotSaved
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iFriendlyEffectIndex;
	// MNetworkEnable
	// MNotSaved
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEnemyEffectIndex;
};
