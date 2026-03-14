class CNavLinkMotor_DefaultNavLink : public INavLinkMotor
{
	int32 m_nNavLinkIndex;
	int32 m_nTickStarted;
	CHandle< CNavLinkAreaEntity > m_hNavLinkEntity;
	CNavLinkMotor_DefaultNavLink::State_t m_eState;
	CNavLinkMotor_DefaultNavLink::TargetType_t m_eTargetType;
	BodySectionAuthority_t m_eBodySectionAuthority;
	bool m_bIsFromMovement;
	CRelativeTransform m_source;
	CRelativeTransform m_target;
	CTransformWS m_tSourcePrevious;
	CTransformWS m_tTargetPrevious;
	// MSaveOpsForField (UNKNOWN FOR PARSER)
	CNavLinkMotor_DefaultNavLink_GraphController* m_pGraphController;
};
