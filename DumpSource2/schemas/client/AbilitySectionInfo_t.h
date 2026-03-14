// MGetKV3ClassDefaults = {
//	"m_strLocString": "",
//	"m_vecAbilityPropertiesBlock":
//	[
//	],
//	"m_vecBasicProperties":
//	[
//	],
//	"m_strAbilityPropertyUpgradeRequired": ""
//}
// MPropertyAutoExpandSelf
class AbilitySectionInfo_t
{
	// MPropertyDescription = "The loc string that will appear above the attributes box. If no loc string is set, it's collapsed."
	CUtlString m_strLocString;
	// MPropertyDescription = "What Ability Property do we put in this block?"
	CUtlVector< SectionProperties_t > m_vecAbilityPropertiesBlock;
	// MPropertyDescription = "Additional Ability Properties that are demoted compared to the Section Ability Properties"
	CUtlVector< CUtlString > m_vecBasicProperties;
	// MPropertyDescription = "If it requires an ability upgrade, what ability property is required for to show? Empty if none"
	CUtlString m_strAbilityPropertyUpgradeRequired;
};
