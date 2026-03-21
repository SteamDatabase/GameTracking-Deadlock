// MNetworkVarNames = "bool m_bHasUsedCopiedUlt"
// MNetworkVarNames = "bool m_bHasCopiedUlt"
// MNetworkVarNames = "bool m_bIsModelSwapped"
// MNetworkVarNames = "GameTime_t m_timeSwappedModel"
// MNetworkVarNames = "CHandle< CCitadelBaseAbility> m_pActiveCopyUltimateAbility"
// MNetworkVarNames = "HeroID_t m_nCopiedHeroID"
class CCitadel_Ability_Magician_CopyUlt : public C_CitadelBaseAbility
{
	// MNetworkEnable
	bool m_bHasUsedCopiedUlt;
	// MNetworkEnable
	bool m_bHasCopiedUlt;
	// MNetworkEnable
	bool m_bIsModelSwapped;
	// MNetworkEnable
	GameTime_t m_timeSwappedModel;
	// MNetworkEnable
	CHandle< C_CitadelBaseAbility > m_pActiveCopyUltimateAbility;
	// MNetworkEnable
	HeroID_t m_nCopiedHeroID;
	CUtlVector< LingeringCopiedAbility_t > m_vecLingeringCopiedAbilities;
	ModelChange_t m_ModelChange;
};
