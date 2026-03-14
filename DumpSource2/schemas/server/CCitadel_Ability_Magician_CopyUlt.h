// MNetworkVarNames = "bool m_bHasUsedCopiedUlt"
// MNetworkVarNames = "bool m_bHasCopiedUlt"
// MNetworkVarNames = "bool m_bIsModelSwapped"
// MNetworkVarNames = "GameTime_t m_timeSwappedModel"
// MNetworkVarNames = "CHandle< CCitadelBaseAbility> m_pActiveCopyUltimateAbility"
// MNetworkVarNames = "CHandle< CCitadelBaseAbility> m_pLastTrainedCopiedUltimateAbility"
// MNetworkVarNames = "HeroID_t m_nCopiedHeroID"
class CCitadel_Ability_Magician_CopyUlt : public CCitadelBaseAbility
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
	CHandle< CCitadelBaseAbility > m_pActiveCopyUltimateAbility;
	// MNetworkEnable
	CHandle< CCitadelBaseAbility > m_pLastTrainedCopiedUltimateAbility;
	// MNetworkEnable
	HeroID_t m_nCopiedHeroID;
	GameTime_t m_flShouldKeepLastCopiedUltimateTrainedTime;
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecModifiersThatKeepThisAbilityTrained;
	ModelChange_t m_ModelChange;
	int32 m_nNumAbilityBulletsStillLive;
};
