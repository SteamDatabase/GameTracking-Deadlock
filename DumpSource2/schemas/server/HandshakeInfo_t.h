class HandshakeInfo_t
{
	CGlobalSymbol m_sHandshakeName;
	uint64 m_nActiveEventUniqueID;
	GameTick_t m_nLastHandshakeUpdateTick;
	HandshakeState_t m_nHandshakeState;
	HandshakeTagState_t m_nAG2EmulatedState;
	TaskHandshakeScope_t m_nHandshakeScope;
	bool m_bForceHandshakeRestartOnScriptedSequenceCompletion;
};
