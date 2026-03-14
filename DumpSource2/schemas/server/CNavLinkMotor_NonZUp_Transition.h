class CNavLinkMotor_NonZUp_Transition : public INavLinkMotor
{
	CountdownTimer m_transitionTimer;
	CTransformWS m_xTransitionOrigin;
	CTransformWS m_xTransitionTarget;
};
