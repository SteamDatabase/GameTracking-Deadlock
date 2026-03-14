// MGetKV3ClassDefaults = {
//	"m_strLocString": "",
//	"m_vecImportantAbilityProperties":
//	[
//	],
//	"m_bRemoveAttributesBackgroundColor": false,
//	"m_vecElevatedAbilityProperties":
//	[
//	],
//	"m_vecAbilityProperties":
//	[
//	]
//}
// MPropertyAutoExpandSelf
class SectionAttributes_t
{
	// MPropertyDescription = "The loc string that will appear above the attributes box. If no loc string is set, it's collapsed."
	CUtlString m_strLocString;
	// MPropertyDescription = "What Ability Property do we put in the Important Box? If empty, the Important box is hidden."
	// MPropertyAutoExpandSelf
	CUtlVector< AbilityPropertyInfo_t > m_vecImportantAbilityProperties;
	// MPropertyDescription = "Hide the background on the attributes box? Checking this adds class RemoveAttributesBackground to the section"
	bool m_bRemoveAttributesBackgroundColor;
	// MPropertyDescription = "Same as Ability Properties but these have a Elevated Class added to them. These also appear before the other Ability Properties."
	// MPropertyAutoExpandSelf
	// MPropertyFriendlyName = "Elevated Basic Ability Properties"
	CUtlVector< CUtlString > m_vecElevatedAbilityProperties;
	// MPropertyDescription = "Additional Ability Properties that we put to the right of the Important Box (if we have one)"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_vecAbilityProperties;
};
