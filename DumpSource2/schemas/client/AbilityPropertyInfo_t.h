// MGetKV3ClassDefaults = {
//	"m_strImportantProperty": "",
//	"m_bRequiresAbilityUpgrade": false,
//	"m_strStatusEffectValue": "",
//	"m_bShowPropertyValue": false
//}
// MPropertyArrayElementNameKey = "m_strImportantProperty"
class AbilityPropertyInfo_t
{
	// MPropertyDescription = "What Property Attribute or Status Effect do you want to show? Status effects populated from drop down, manually type in Important Attribute"
	// MPropertyLeafSuggestionProviderFn (UNKNOWN FOR PARSER)
	CUtlString m_strImportantProperty;
	// MPropertyDescription = "Adds the requiresAbilityUpgrade class to the panel so we can style it correctly"
	bool m_bRequiresAbilityUpgrade;
	// MPropertyDescription = "If we're showing a status effect box, do we want to trigger it's visibility off a different Ability Property (i.e. You upgrade an ability and this shows). Currently only used on Ability Tooltips (not mod tooltips)."
	// MPropertySuppressExpr = "m_strImportantProperty != StatusEffectEMP && m_strImportantProperty != StatusEffectStun && m_strImportantProperty != StatusEffectFreeze && m_strImportantProperty != StatusEffectBurn && m_strImportantProperty != StatusEffectBleed && m_strImportantProperty != StatusEffectSleep && m_strImportantProperty != StatusEffectTethered && m_strImportantProperty != StatusEffectImmobilize && m_strImportantProperty != StatusEffectDisarmed && m_strImportantProperty != StatusEffectInvisible && m_strImportantProperty != StatusEffectStacks && m_strImportantProperty != StatusEffectInfiniteClip && m_strImportantProperty != StatusEffectBulletDebuff && m_strImportantProperty != StatusEffectBuff && m_strImportantProperty != StatusEffectPetrify && m_strImportantProperty != StatusEffectCustomDebuff && m_strImportantProperty != StatusEffectUnstoppable && m_strImportantProperty != StatusEffectDisplacement && m_strImportantProperty != StatusEffectSilence"
	CUtlString m_strStatusEffectValue;
	// MPropertyDescription = "If we have an ability property we are triggering off of, do we want to show the value?"
	// MPropertySuppressExpr = "m_strStatusEffectValue == ''"
	bool m_bShowPropertyValue;
};
