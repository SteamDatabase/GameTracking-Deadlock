// MNetworkVarNames = "int32 m_iLevel"
// MNetworkVarNames = "int32 m_iMaxAmmo"
// MNetworkVarNames = "int32 m_iHealthMax"
// MNetworkVarNames = "float m_flHealthRegen"
// MNetworkVarNames = "GameTime_t m_flRespawnTime"
// MNetworkVarNames = "HeroID_t m_nHeroID"
// MNetworkVarNames = "HeroBadgeXP_t m_unHeroBadgeXP"
// MNetworkVarNames = "int32 m_iGoldNetWorth"
// MNetworkVarNames = "int32 m_iAPNetWorth"
// MNetworkVarNames = "int32 m_iCreepGold"
// MNetworkVarNames = "int32 m_iCreepGoldSoloBonus"
// MNetworkVarNames = "int32 m_iCreepGoldKill"
// MNetworkVarNames = "int32 m_iCreepGoldAirOrb"
// MNetworkVarNames = "int32 m_iCreepGoldGroundOrb"
// MNetworkVarNames = "int32 m_iCreepGoldDeny"
// MNetworkVarNames = "int32 m_iCreepGoldNeutral"
// MNetworkVarNames = "int32 m_iFarmBaseline"
// MNetworkVarNames = "int32 m_iHealth"
// MNetworkVarNames = "int32 m_iPlayerKills"
// MNetworkVarNames = "int32 m_iPlayerAssists"
// MNetworkVarNames = "int32 m_iDeaths"
// MNetworkVarNames = "int32 m_iDenies"
// MNetworkVarNames = "int32 m_iLastHits"
// MNetworkVarNames = "int32 m_iKillStreak"
// MNetworkVarNames = "bool m_bAlive"
// MNetworkVarNames = "int32 m_nHeroDraftPosition"
// MNetworkVarNames = "bool m_bUltimateTrained"
// MNetworkVarNames = "GameTime_t m_flUltimateCooldownStart"
// MNetworkVarNames = "GameTime_t m_flUltimateCooldownEnd"
// MNetworkVarNames = "bool m_bHasRejuvenator"
// MNetworkVarNames = "bool m_bHasRebirth"
// MNetworkVarNames = "bool m_bFlaggedAsCheater"
// MNetworkVarNames = "int32 m_iHeroDamage"
// MNetworkVarNames = "int32 m_iHeroHealing"
// MNetworkVarNames = "int32 m_iSelfHealing"
// MNetworkVarNames = "int32 m_iObjectiveDamage"
// MNetworkVarNames = "EntitySubclassID_t m_vecUpgrades"
// MNetworkVarNames = "EntitySubclassID_t m_vecBonusCounterAbilities"
// MNetworkVarNames = "int32 m_vecBonusCounterValues"
// MNetworkVarNames = "EntitySubclassID_t m_vecBonusCounterModifiers"
// MNetworkVarNames = "int32 m_vecModifierBonusCounterValues"
// MNetworkVarNames = "AbilityID_t m_tHeldItem"
// MNetworkVarNames = "ItemImbuementPair_t m_vecImbuements"
// MNetworkVarNames = "DynamicAbilityValues_t m_vecDynamicAbilityValues"
// MNetworkVarNames = "StatViewerModifierValues_t m_vecStatViewerModifierValues"
// MNetworkVarNames = "StolenAbilityPair_t m_vecStolenAbilities"
// MNetworkVarNames = "AbilityUpgradeState_t m_vecAbilityUpgradeState"
// MNetworkVarNames = "CUtlString m_strIconHeroCardOverride"
// MNetworkVarNames = "CUtlString m_strIconHeroCardCriticalOverride"
// MNetworkVarNames = "CUtlString m_strIconHeroCardGloatOverride"
class PlayerDataGlobal_t
{
	// MNetworkEnable
	int32 m_iLevel;
	// MNetworkEnable
	int32 m_iMaxAmmo;
	// MNetworkEnable
	int32 m_iHealthMax;
	// MNetworkEnable
	float32 m_flHealthRegen;
	// MNetworkEnable
	GameTime_t m_flRespawnTime;
	// MNetworkEnable
	HeroID_t m_nHeroID;
	// MNetworkEnable
	HeroBadgeXP_t m_unHeroBadgeXP;
	// MNetworkEnable
	int32 m_iGoldNetWorth;
	// MNetworkEnable
	int32 m_iAPNetWorth;
	// MNetworkEnable
	int32 m_iCreepGold;
	// MNetworkEnable
	int32 m_iCreepGoldSoloBonus;
	// MNetworkEnable
	int32 m_iCreepGoldKill;
	// MNetworkEnable
	int32 m_iCreepGoldAirOrb;
	// MNetworkEnable
	int32 m_iCreepGoldGroundOrb;
	// MNetworkEnable
	int32 m_iCreepGoldDeny;
	// MNetworkEnable
	int32 m_iCreepGoldNeutral;
	// MNetworkEnable
	int32 m_iFarmBaseline;
	// MNetworkEnable
	int32 m_iHealth;
	// MNetworkEnable
	int32 m_iPlayerKills;
	// MNetworkEnable
	int32 m_iPlayerAssists;
	// MNetworkEnable
	int32 m_iDeaths;
	// MNetworkEnable
	int32 m_iDenies;
	// MNetworkEnable
	int32 m_iLastHits;
	// MNetworkEnable
	int32 m_iKillStreak;
	// MNetworkEnable
	bool m_bAlive;
	// MNetworkEnable
	// MNetworkChangeCallback = "HeroDraftPositionChanged"
	int32 m_nHeroDraftPosition;
	// MNetworkEnable
	bool m_bUltimateTrained;
	// MNetworkEnable
	GameTime_t m_flUltimateCooldownStart;
	// MNetworkEnable
	GameTime_t m_flUltimateCooldownEnd;
	// MNetworkEnable
	bool m_bHasRejuvenator;
	// MNetworkEnable
	bool m_bHasRebirth;
	// MNetworkEnable
	bool m_bFlaggedAsCheater;
	// MNetworkEnable
	int32 m_iHeroDamage;
	// MNetworkEnable
	int32 m_iHeroHealing;
	// MNetworkEnable
	int32 m_iSelfHealing;
	// MNetworkEnable
	int32 m_iObjectiveDamage;
	// MNetworkEnable
	// MNetworkUserGroup = "Abilities"
	// MNetworkChangeCallback = "pdgUpgradesChanged"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecUpgrades;
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecBonusCounterAbilities;
	// MNetworkEnable
	// MNetworkUserGroup = "Abilities"
	// MNetworkChangeCallback = "pdgBonusCounterChanged"
	C_NetworkUtlVectorBase< int32 > m_vecBonusCounterValues;
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecBonusCounterModifiers;
	// MNetworkEnable
	// MNetworkUserGroup = "Abilities"
	// MNetworkChangeCallback = "pdgBonusCounterChanged"
	C_NetworkUtlVectorBase< int32 > m_vecModifierBonusCounterValues;
	// MNetworkEnable
	// MNetworkUserGroup = "Abilities"
	// MNetworkChangeCallback = "pdgUpgradesChanged"
	CUtlStringToken m_tHeldItem;
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< ItemImbuementPair_t > m_vecImbuements;
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< DynamicAbilityValues_t > m_vecDynamicAbilityValues;
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< StatViewerModifierValues_t > m_vecStatViewerModifierValues;
	// MNetworkEnable
	// MNetworkUserGroup = "Abilities"
	// MNetworkChangeCallback = "pdgStolenAbilityChanged"
	C_UtlVectorEmbeddedNetworkVar< StolenAbilityPair_t > m_vecStolenAbilities;
	// MNetworkEnable
	// MNetworkUserGroup = "Abilities"
	// MNetworkChangeCallback = "pdgAbilityUpgradeStateChanged"
	C_UtlVectorEmbeddedNetworkVar< AbilityUpgradeState_t > m_vecAbilityUpgradeState;
	// MNetworkEnable
	CUtlString m_strIconHeroCardOverride;
	// MNetworkEnable
	CUtlString m_strIconHeroCardCriticalOverride;
	// MNetworkEnable
	CUtlString m_strIconHeroCardGloatOverride;
};
