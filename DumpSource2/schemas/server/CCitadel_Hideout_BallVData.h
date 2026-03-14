// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_Hideout_BallVData",
//	"m_flModelScale": 3.000000,
//	"m_flBallTouchRadius": 7.000000,
//	"m_flForceMult": 10.000000,
//	"m_flForceMultBullet": 50.000000,
//	"m_flMaxDistanceAway": 3000.000000,
//	"m_flDamagePositionOffset": 32.000000,
//	"m_strKickSoundName": "",
//	"m_strGoalSoundName": "",
//	"m_flMinPlayerBallTouchForce": 10.000000,
//	"m_flMinPlayerLightMeleeForce": 20.000000,
//	"m_flPlayerLightMeleeChipAngle": 75.000000,
//	"m_flMinPlayerHeavyMeleeForce": 100.000000,
//	"m_flForceMultPlayer": 2.000000,
//	"m_flInheritPlayerSpeedMultiplier": 0.125000,
//	"m_ForceVSCameraPitch":
//	{
//		"m_spline":
//		[
//		],
//		"m_tangents":
//		[
//		],
//		"m_vDomainMins":
//		[
//			0.000000,
//			0.000000
//		],
//		"m_vDomainMaxs":
//		[
//			0.000000,
//			0.000000
//		]
//	},
//	"m_ConsecutiveJugglesVsRandomness":
//	{
//		"m_spline":
//		[
//		],
//		"m_tangents":
//		[
//		],
//		"m_vDomainMins":
//		[
//			0.000000,
//			0.000000
//		],
//		"m_vDomainMaxs":
//		[
//			0.000000,
//			0.000000
//		]
//	},
//	"fl_MaxExtraGravityScale": 0.500000,
//	"m_nMinJugglesBeforeDisplay": 3,
//	"m_BallApexParticle": "",
//	"m_strBallApexSound": "",
//	"m_JuggleRunEnded": "",
//	"m_strJuggleRunEnded": "",
//	"m_hModel": "",
//	"m_AmbientParticle": ""
//}
class CCitadel_Hideout_BallVData : public CEntitySubclassVDataBase
{
	float32 m_flModelScale;
	// MPropertyDescription = "A bit of grace distance ontop of the player's capsule vs the ball radius, to make contact a little easier"
	float32 m_flBallTouchRadius;
	float32 m_flForceMult;
	float32 m_flForceMultBullet;
	float32 m_flMaxDistanceAway;
	float32 m_flDamagePositionOffset;
	CSoundEventName m_strKickSoundName;
	CSoundEventName m_strGoalSoundName;
	// MPropertyStartGroup = "Ball Touch Force"
	// MPropertyDescription = "Always kick at least this much in the direction the player is facing."
	float32 m_flMinPlayerBallTouchForce;
	// MPropertyStartGroup = "Ball Light Melee Forces"
	// MPropertyDescription = "Same as above but when meleeing"
	float32 m_flMinPlayerLightMeleeForce;
	// MPropertyDescription = "Degrees pitch to launch the ball up"
	float32 m_flPlayerLightMeleeChipAngle;
	// MPropertyDescription = "Same as above but when heavy meleeing. Note you're at zero speed when delivering melee so this must be higher than you'd think"
	float32 m_flMinPlayerHeavyMeleeForce;
	// MPropertyDescription = "The player's speed in the direciton they are headed is multiplied by this."
	float32 m_flForceMultPlayer;
	// MPropertyDescription = "Proportion of player's speed inherited directly from the player."
	float32 m_flInheritPlayerSpeedMultiplier;
	// MPropertyDescription = "Looking at your feet vs looking at the horizon creates a multiplier to the kick - aim up to lob/shoot, aim down to dribble."
	CPiecewiseCurve m_ForceVSCameraPitch;
	// MPropertyStartGroup = "Misc Juggle Minigame"
	// MPropertyDescription = "Keep the player on their feet by adding more of a degree of randomness the more the juggle count goes up."
	CPiecewiseCurve m_ConsecutiveJugglesVsRandomness;
	// MPropertyDescription = "The more difficult we get, the higher the gravity. So if this is 0.25, gravity multiplier will be  1 + 1.5"
	float32 fl_MaxExtraGravityScale;
	// MPropertyDescription = "Don't show any effects at the apex of a juggled ball if it's less juggles than this"
	int32 m_nMinJugglesBeforeDisplay;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallApexParticle;
	// MPropertyDescription = "Play a sound each time we reach an apex above the Min Juggles Befor eDisplay value"
	CSoundEventName m_strBallApexSound;
	// MPropertyDescription = "Plays when the juggle run ends (the ball touches a ground surface). This is not the same as contact sounds. It's a gameplay event"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JuggleRunEnded;
	CSoundEventName m_strJuggleRunEnded;
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle;
};
