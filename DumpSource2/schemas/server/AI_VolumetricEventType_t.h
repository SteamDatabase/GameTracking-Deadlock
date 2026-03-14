enum AI_VolumetricEventType_t : uint8_t
{
	eCombat = 0,
	ePlayer = 1,
	eDanger = 2,
	eBulletImpact = 3,
	ePhysicsDanger = 4,
	eMoveAway = 5,
	ePlayerVehicle = 6,
	eGlassBreak = 7,
	ePhysicsObject = 8,
	eWarnFriends = 9,
	eGunfire = 10,
	eExplosion = 11,
	// MPropertySuppressEnumerator
	eCount = 12,
	// MPropertySuppressEnumerator
	eFirst = 0,
	// MPropertySuppressEnumerator
	eInvalid = 255,
};
