enum ECitadelDisconnectReason : uint32_t
{
	k_ECitadelDisconnectReason_UserLeaveMatch = 1001,
	k_ECitadelDisconnectReason_UserQuitApp = 1002,
	k_ECitadelDisconnectReason_UserCancel = 1003,
	k_ECitadelDisconnectReason_Goodbye = 1004,
	k_ECitadelDisconnectReason_BadMessage = 2001,
	k_ECitadelDisconnectReason_GameDestroyedUnexpectedly = 2002,
	k_ECitadelDisconnectReason_ChangingServer = 2003,
	k_ECitadelDisconnectReason_OldConnection = 2004,
	k_ECitadelDisconnectReason_GoodbyeUnrecognizedGame = 2005,
};
