class CNavLinkMotor_Legacy_NavLink : public CNavLinkMotor_Legacy_Transition
{
	// MSaveOpsForField = "GetAnimGraphControllerPtrSaveRestoreOps"
	CNavLinkMotor_Legacy_GraphController* m_pGraphController;
	CHandle< CNavLinkAreaEntity > m_hNavLinkEntity;
	int32 m_nNavLinkIndex;
};
