// MGetKV3ClassDefaults = {
//	"m_strValue": "",
//	"m_strStreetBrawlValue": "",
//	"m_subclassScaleFunction":
//	{
//	},
//	"m_eProvidedPropertyType": "MODIFIER_VALUE_INVALID",
//	"m_eApplyFilter": "EApplyFilter_None",
//	"m_strDisableValue": "",
//	"m_bDamageAffectedByEffectiveness": false,
//	"m_eDisplayType": "EStatsCount",
//	"m_eDisplayUnits": "EDisplayUnit_Normal",
//	"m_bIsHidden": false,
//	"m_bIsNegativeAttribute": false,
//	"m_strCSSClass": "",
//	"m_strLocTokenOverride": "",
//	"m_bCanSetTokenOverride": false,
//	"m_strConditionalLocTokenOverride": "",
//	"m_bRoundDown": false,
//	"m_bIsAbilityDamageProperty": false,
//	"m_eStatsUsageFlags": ""
//}
class CitadelAbilityProperty_t
{
	CUtlString m_strValue;
	CUtlString m_strStreetBrawlValue;
	CEmbeddedSubclass< CScaleFunctionBase > m_subclassScaleFunction;
	// MPropertyDescription = "What type of modifier value does this property provide?  Used by modifiers to know what type to auto-register this property for and to tell the UI how this interacts with other stats and items."
	EModifierValue m_eProvidedPropertyType;
	// MPropertyDescription = "Conditions to filter what other abilities this property can affect."
	PropertyValueApplyFilter_t m_eApplyFilter;
	// MPropertyDescription = "This property will be disabled if this value matches m_strValue"
	CUtlString m_strDisableValue;
	// MPropertyDescription = "When true, effectiveness (distance falloff) will be applied when looking up this value.  Only works in modifiers for now."
	bool m_bDamageAffectedByEffectiveness;
	// MPropertyStartGroup = "UI"
	// MPropertyDescription = "Set this so we know how to display the ability property (prefix, postfix, and # decimal places)"
	EStatsType m_eDisplayType;
	ModifierValueDisplayUnits_t m_eDisplayUnits;
	// MPropertyDescription = "When true, we don't show this ability property anywhere in the UI."
	bool m_bIsHidden;
	// MPropertyDescription = "When true, we add a different class to show it's a negative attribute."
	bool m_bIsNegativeAttribute;
	// MPropertyFriendlyName = "CSS Class"
	// MPropertyLeafSuggestionProviderFn (UNKNOWN FOR PARSER)
	CUtlString m_strCSSClass;
	// MPropertyDescription = "If set, will be used for the localization token lookup instead of the name"
	// MPropertySuppressExpr = "m_bCanSetTokenOverride == false"
	CUtlString m_strLocTokenOverride;
	// MPropertySuppressField
	bool m_bCanSetTokenOverride;
	// MPropertyDescription = "If set, will be used for the conditional localization token lookup instead of [ItemName]_conditional"
	CUtlString m_strConditionalLocTokenOverride;
	// MPropertyDescription = "Do we round the value down? i.e. 2.8 will be 2"
	bool m_bRoundDown;
	// MPropertyDescription = "Is this value used to determine damage?"
	bool m_bIsAbilityDamageProperty;
	StatsUsageFlags_t m_eStatsUsageFlags;
};
