enum EAttachState_t : uint32_t
{
	EAttachState_None = 0,
	EAttachState_AwaitingTether = 1,
	EAttachState_Latched = 2,
	EAttachState_Attached = 3,
	EAttachStateCount = 4,
};
