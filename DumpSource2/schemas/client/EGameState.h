enum EGameState : uint32_t
{
	EGameState_Invalid = 0,
	EGameState_Init = 1,
	EGameState_WaitingForPlayersToJoin = 2,
	EGameState_HeroSelection = 3,
	EGameState_MatchIntro = 4,
	EGameState_WaitForMapToLoad = 5,
	EGameState_PreGameWait = 6,
	EGameState_GameInProgress = 7,
	EGameState_PostGame = 8,
	EGameState_PostGame_PlayOfTheGame = 9,
	EGameState_Abandoned = 10,
	EGameState_End = 11,
};
