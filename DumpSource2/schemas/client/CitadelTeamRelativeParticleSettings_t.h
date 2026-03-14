// MModelGameData
// MFgdHelper = "game_data_list{ key = 'CitadelTeamRelativeParticleSettings_t' }"
// MGetKV3ClassDefaults = {
//	"m_strFriendlyParticle": "",
//	"m_strEnemyParticle": "",
//	"m_bUseConfig": true,
//	"m_strConfigName": "preview",
//	"m_AttachmentType": "PATTACH_INVALID",
//	"m_strAttachmentName": ""
//}
class CitadelTeamRelativeParticleSettings_t
{
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_strFriendlyParticle;
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_strEnemyParticle;
	bool m_bUseConfig;
	// MPropertySuppressExpr = "!m_bUseConfig"
	CUtlString m_strConfigName;
	// MPropertySuppressExpr = "m_bUseConfig"
	ParticleAttachment_t m_AttachmentType;
	// MPropertySuppressExpr = "m_bUseConfig || ( m_AttachmentType != PATTACH_POINT && m_AttachmentType != PATTACH_POINT_FOLLOW )"
	// MPropertyCustomFGDType = "model_attachment"
	CUtlString m_strAttachmentName;
};
