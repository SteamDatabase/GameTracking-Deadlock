class CGameModifier_OverrideTargetIdentifier : public CCitadelModifier
{
	CGlobalSymbol m_sTargetIdentifier;
	CHandle< C_BaseEntity > m_hTarget;
	EntityAttachmentType_t m_nOriginType;
	CGlobalSymbol m_sAttachmentName;
	AttachmentHandle_t m_hAttachment;
};
