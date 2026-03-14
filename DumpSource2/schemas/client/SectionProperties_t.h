// MGetKV3ClassDefaults = {
//	"m_strPropertiesTitleLocString": "",
//	"m_vecAbilityProperties":
//	[
//	]
//}
// MPropertyAutoExpandSelf
class SectionProperties_t
{
	// MPropertyDescription = "Do we want to show title text above this block of ability properties (per stack, to enemies, to allies, etc.)? If empty, we show none"
	CUtlString m_strPropertiesTitleLocString;
	// MPropertyDescription = "Which ability properties do we want to show in this section?"
	CUtlVector< AbilityPropertyInfo_t > m_vecAbilityProperties;
};
