// MGetKV3ClassDefaults = {
//	"m_vecAbilityInfoSections":
//	[
//	],
//	"m_vecAdditionalHeaderProperties":
//	[
//	]
//}
// MPropertyAutoExpandSelf
class AbilityTooltipDetails_t
{
	// MPropertyDescription = "Add a new Section to the ability tooltip"
	CUtlVector< AbilitySectionInfo_t > m_vecAbilityInfoSections;
	// MPropertyDescription = "Add additional header properties that aren't part of the default header properties"
	CUtlVector< CUtlString > m_vecAdditionalHeaderProperties;
};
