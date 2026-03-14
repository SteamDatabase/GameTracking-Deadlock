class CCitadelZipLinePathNode : public CBaseEntity
{
	bool m_bCornerNode;
	bool m_bDisableZippingToByPlayers;
	bool m_bDisableZipAbilityTargeting;
	bool m_bEnabled;
	bool m_bCapturable;
	bool m_bIsBaseBackLane;
	bool m_bAlwaysUsable;
	bool m_bOneWay;
	CUtlSymbolLarge m_strGuardBossName;
	CUtlSymbolLarge m_strGuardBossName2;
	CUtlSymbolLarge m_strGuardBossName3;
	CUtlSymbolLarge m_strNode01;
	CUtlSymbolLarge m_strNode02;
	CUtlSymbolLarge m_strNode03;
	bool m_bUseForMinimapDrawing;
	float32 m_flTaper;
	Color m_Color;
	float32 m_flExtraLatchDistance;
	float32 m_flSpeedMultiplier;
	float32 m_flSpeedMultiplierToBaseBonus;
	float32 m_flSpeedMultiplierFromBaseBonus;
};
