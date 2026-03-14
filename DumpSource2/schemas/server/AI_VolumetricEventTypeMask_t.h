enum AI_VolumetricEventTypeMask_t : uint64_t
{
	// MEnumeratorIsNotAFlag
	eNone = 0,
	eCombat = 1,
	ePlayer = 2,
	eDanger = 4,
	eBulletImpact = 8,
	ePhysicsDanger = 16,
	eMoveAway = 32,
	ePlayerVehicle = 64,
	eGlassBreak = 128,
	ePhysicsObject = 256,
	eWarnFriends = 512,
	eGunfire = 1024,
	eExplosion = 2048,
	// MEnumeratorIsNotAFlag
	eAll = -1,
};
