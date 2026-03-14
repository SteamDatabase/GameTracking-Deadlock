// MGetKV3ClassDefaults = {
//	"m_nConcept": "CITADEL_CONCEPT_NONE",
//	"m_Criteria":
//	{
//	},
//	"m_nFilterType": "MODIFIER_RR_FILTER_BROADCAST",
//	"m_nSpeakerType": "MODIFIER_RR_SPEAKER_PARENT"
//}
class CCitadelModifierResponseRules_t
{
	CitadelConcept_t m_nConcept;
	CUtlOrderedMap< CUtlString, CUtlString > m_Criteria;
	CCitadelModifierResponseRulesFilterType_t m_nFilterType;
	CCitadelModifierSpeaker_t m_nSpeakerType;
};
