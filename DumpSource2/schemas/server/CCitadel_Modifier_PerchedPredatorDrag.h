class CCitadel_Modifier_PerchedPredatorDrag : public CCitadelModifier
{
	QAngle m_qRelativeOffset;
	float32 m_flRelativeDist;
	Vector m_vecOffsetDir;
	CHandle< CBaseEntity > m_hFollowEnt;
};
