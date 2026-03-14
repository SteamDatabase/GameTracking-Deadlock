class CSmartGoal_Door : public INavSmartGoal
{
	CHandle< CBaseEntity > m_hDoor;
	CHandle< CBaseEntity > m_hPathCornerGoalPostDoor;
	CModifierHandleTyped< CCitadelModifier > m_hModifierInteractionIKLock;
	VectorWS m_vGoalPostDoor;
	MoveType_t m_PrevMoveType;
	float32 m_flDoorSpeed;
	bool m_bUseAnimatedInteraction;
	bool m_bOpenAway;
	int32 m_nState;
	bool m_bInterrupted;
};
