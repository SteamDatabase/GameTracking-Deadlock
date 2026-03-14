// MGetKV3ClassDefaults = {
//	"m_AbilityBehaviorsBits": "",
//	"m_eAbilityActivation": "CITADEL_ABILITY_ACTIVATION_NONE",
//	"m_eIncompatibleAbilityType": "EAbilityType_Invalid"
//}
class IncompatibleFilter_t
{
	CBitVecEnum< EAbilityBehavior_t > m_AbilityBehaviorsBits;
	EAbilityActivation_t m_eAbilityActivation;
	EAbilityType_t m_eIncompatibleAbilityType;
};
