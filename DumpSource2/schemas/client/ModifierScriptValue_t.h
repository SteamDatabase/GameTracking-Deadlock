// MGetKV3ClassDefaults = {
//	"m_eModifierValue": "MODIFIER_VALUE_MATERIAL_OVERRIDE",
//	"m_eType": "MODIFIER_SCRIPT_VARIANT_MODIFIER_FLOAT",
//	"m_value": 0.000000,
//	"m_sModelValue": "",
//	"m_sParticleValue": ""
//}
class ModifierScriptValue_t
{
	EModifierValue m_eModifierValue;
	EModifierScriptVariantType m_eType;
	// MPropertySuppressExpr = "m_eType != MODIFIER_SCRIPT_VARIANT_MODIFIER_FLOAT && m_eType != MODIFIER_SCRIPT_VARIANT_MODIFIER_BOOLEAN && m_eType != MODIFIER_SCRIPT_VARIANT_MODIFIER_INTEGER"
	CModifierLevelFloat m_value;
	// MPropertySuppressExpr = "m_eType != MODIFIER_SCRIPT_VARIANT_MODEL"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelValue;
	// MPropertySuppressExpr = "m_eType != MODIFIER_SCRIPT_VARIANT_PARTICLE"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticleValue;
};
