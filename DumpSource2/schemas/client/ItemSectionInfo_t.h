// MGetKV3ClassDefaults = {
//	"m_eAbilitySectionType": "EArea_Passive",
//	"m_vecSectionAttributes":
//	[
//	]
//}
// MPropertyArrayElementNameKey = "m_eAbilitySectionType"
class ItemSectionInfo_t
{
	AbilitySectionType_t m_eAbilitySectionType;
	// MPropertyAutoExpandSelf
	CUtlVector< SectionAttributes_t > m_vecSectionAttributes;
};
