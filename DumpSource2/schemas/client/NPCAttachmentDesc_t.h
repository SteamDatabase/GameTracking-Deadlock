// MGetKV3ClassDefaults = {
//	"m_sAttachmentName": "",
//	"m_sEntityName": "",
//	"m_vOffset":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_aAngOffset":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_sModelName": "",
//	"m_vecSpawnKV":
//	[
//	]
//}
class NPCAttachmentDesc_t
{
	CUtlString m_sAttachmentName;
	CUtlString m_sEntityName;
	Vector m_vOffset;
	QAngle m_aAngOffset;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
	CUtlVector< NPCAttachmentSpawnKV_t > m_vecSpawnKV;
};
