class CPhysicsNPCSolver : public CLogicalEntity
{
	// MNotSaved
	CPhysicsNPCSolver* m_pNext;
	CHandle< CAI_BaseNPC > m_hNPC;
	CHandle< CBaseEntity > m_hEntity;
	// MPhysPtr
	IPhysicsMotionController* m_pController;
	float32 m_separationDuration;
	GameTime_t m_cancelTime;
	bool m_allowIntersection;
};
