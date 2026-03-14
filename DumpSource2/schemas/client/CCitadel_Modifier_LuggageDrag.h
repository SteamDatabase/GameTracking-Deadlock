class CCitadel_Modifier_LuggageDrag : public CCitadelModifier
{
	float32 m_flRelativeDist;
	float32 m_flCartSpeed;
	QAngle m_qRelativeOffset;
	CHandle< C_BaseEntity > m_hDragger;
	CHandle< C_BaseEntity > m_hDummyForCamera;
};
