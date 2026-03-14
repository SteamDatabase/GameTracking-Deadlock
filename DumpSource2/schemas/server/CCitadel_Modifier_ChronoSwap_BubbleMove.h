class CCitadel_Modifier_ChronoSwap_BubbleMove : public CCitadelModifier
{
	bool m_bOtherIsInFrontAtStart;
	Vector m_vOtherToDest;
	VectorWS m_vStart;
	VectorWS m_vDest;
	CHandle< CBaseEntity > m_hOther;
	VectorWS m_vLastSafePos;
	ParticleIndex_t m_nBeamIndex;
};
