// MGetKV3ClassDefaults = {
//	"m_strContext": "",
//	"m_eButtonHintType": "EButtonHintType_SingleButton",
//	"m_nButton1": "",
//	"m_bButton1IsSlot": false,
//	"m_nButton2": "",
//	"m_bButton2IsSlot": false,
//	"m_eHintLocType": "EButtonHintLocType_Custom",
//	"m_strLocToken": "",
//	"m_eHintSide": "EButtonSide_Top",
//	"m_nPriority": 0,
//	"m_bShowAbilityIcon": false,
//	"m_bIsHintShownWhileOnCooldown": false
//}
// MPropertyArrayElementNameKey = "m_strContext"
class CitadelAbilityHUDElementButtonHint_t
{
	CUtlString m_strContext;
	// MPropertyDescription = "Why type of input is required for this hint"
	EHUDElementButtonType_t m_eButtonHintType;
	// MPropertyDescription = "What button is used in this hint"
	// MPropertySuppressExpr = "m_bButton1IsSlot == true"
	InputBitMask_t m_nButton1;
	bool m_bButton1IsSlot;
	// MPropertyDescription = "What's the 2nd button used in this hint"
	// MPropertySuppressExpr = "m_bButton2IsSlot == true"
	InputBitMask_t m_nButton2;
	bool m_bButton2IsSlot;
	// MPropertyDescription = "'Cast' and 'Alt-Cast' will look at the ability vdata for the loc tokens for casting.  'Custom' allows entering a loc token on this hint"
	EHUDElementButtonHintLocType_t m_eHintLocType;
	// MPropertyDescription = "The loc string to display.  Don't forget the #!"
	// MPropertySuppressExpr = "m_eHintLocType != EButtonHintLocType_Custom"
	CUtlString m_strLocToken;
	// MPropertyDescription = "On which side of the crosshair should this hint show"
	EHUDElementButtonHintSide_t m_eHintSide;
	// MPropertyAttributeRange = "0 2"
	// MPropertyDescription = "How close to the crosshair to be.  Hints are next to the crosshair when by themselves, but get ordered by this priority when multiple are active on the same side.  0 is highest priority (closest to crosshair)"
	int32 m_nPriority;
	// MPropertyDescription = "Should show ability icon on the hint?"
	bool m_bShowAbilityIcon;
	// MPropertyDescription = "Is the hint shown while on cooldown?"
	bool m_bIsHintShownWhileOnCooldown;
};
