enum HandshakeState_t : uint8_t
{
	eInactive = 0,
	eWaitingToBecomeInactive = 1,
	eWaitingToBecomeActive = 2,
	eWaitingToFinish = 3,
	eWaitingForScriptedSequence = 4,
	eRestartingFromScriptedSequence = 5,
	eFinished = 6,
};
