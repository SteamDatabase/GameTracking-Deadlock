class UnreachableTarget_t
{
	UnreachableTargetType_t nTargetType;
	CHandle< CBaseEntity > hTargetEnt;
	VectorWS vecTargetWorldPos;
	CGlobalSymbol sTargetSymbol;
	GameTime_t fExpireTime;
	VectorWS vecTargetLocationWhenUnreachable;
};
