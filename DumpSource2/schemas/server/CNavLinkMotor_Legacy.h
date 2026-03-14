class CNavLinkMotor_Legacy : public INavLinkMotor
{
	int32 m_nMode;
	BodySectionAuthority_t m_eBodySectionAuthority;
	CNavLinkMotor_Legacy_Transition m_transition;
	CNavLinkMotor_Legacy_NavLink m_navLink;
};
