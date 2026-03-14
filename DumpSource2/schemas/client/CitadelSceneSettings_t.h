// MGetKV3ClassDefaults = {
//	"m_bDontPreSettleCloth": false,
//	"m_strAttachmentName": "",
//	"m_flFOV": 25.000000,
//	"m_flZNear": 5.000000,
//	"m_flZFar": 200.000000
//}
class CitadelSceneSettings_t
{
	// MPropertyFriendlyName = "Don't Pre-Settle Cloth"
	bool m_bDontPreSettleCloth;
	// MPropertyStartGroup = "Camera Settings"
	// MPropertyFriendlyName = "Camera Attachment"
	// MPropertyCustomFGDType = "model_attachment"
	CUtlString m_strAttachmentName;
	// MPropertyFriendlyName = "FOV"
	float32 m_flFOV;
	// MPropertyFriendlyName = "Z-Near"
	float32 m_flZNear;
	// MPropertyFriendlyName = "Z-Far"
	float32 m_flZFar;
};
