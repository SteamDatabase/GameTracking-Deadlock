// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_CapturePointVData",
//	"m_strPreEnableParticle": "",
//	"m_strOnBecomeEnableParticle": "",
//	"m_strEnabledParticle": "",
//	"m_strOnFullyCapturedParticle": "",
//	"m_EnabledLoopSounds":
//	{
//	},
//	"m_EnemyCapturingLoopSounds":
//	{
//	},
//	"m_FriendlyCapturingLoopSounds":
//	{
//	},
//	"m_strPreEnableStartSound": "",
//	"m_strEnableStartSound": "",
//	"m_strFullyCapturedSound": "",
//	"m_modifierCapturer":
//	{
//	},
//	"m_flDecaySpeed": 0.100000,
//	"m_remapCapturersToCaptureTime": 0.000000,
//	"m_flEnemyProgressRemoveScale": 3.000000,
//	"m_flTotalHealthToCapture": 50.000000,
//	"m_flInitialEnableTimeInSeconds": 0.000000,
//	"m_flPreEnableWindowInSeconds": 10.000000,
//	"m_flRespawnRangeInSeconds": 0.000000
//}
class CCitadel_CapturePointVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Visuals"
	// MPropertyDescription = "Particle that's active in the pre-enabled window."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strPreEnableParticle;
	// MPropertyDescription = "Particle that's fired when the point becomes active."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strOnBecomeEnableParticle;
	// MPropertyDescription = "Particle that's active while the capture point is enabled."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strEnabledParticle;
	// MPropertyDescription = "Particle that's fired when the point is fully captured by a team."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strOnFullyCapturedParticle;
	// MPropertyStartGroup = "Sounds"
	// MPropertyDescription = "Loop that plays while the capture point is active."
	CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_EnabledLoopSounds;
	// MPropertyDescription = "Loop that plays when the enemy team is actively capturing."
	CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_EnemyCapturingLoopSounds;
	// MPropertyDescription = "Loop that plays when the friendly team is actively capturing."
	CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_FriendlyCapturingLoopSounds;
	// MPropertyDescription = "Plays when the pre-enable period starts."
	CSoundEventName m_strPreEnableStartSound;
	// MPropertyDescription = "Plays when the enable period starts."
	CSoundEventName m_strEnableStartSound;
	// MPropertyDescription = "Plays when the point is fully captured."
	CSoundEventName m_strFullyCapturedSound;
	// MPropertyStartGroup = "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_modifierCapturer;
	// MPropertyStartGroup = "Capture Settings"
	// MPropertyDescription = "When no playars are in the capture area, what fraction of progress is lost per second."
	float32 m_flDecaySpeed;
	// MPropertyDescription = "Remap of number of capturers to capture time in seconds.  Smaller is faster!"
	CRemapFloat m_remapCapturersToCaptureTime;
	// MPropertyDescription = "Using the above capture times, scale them by this amount when undoing enemy progress."
	float32 m_flEnemyProgressRemoveScale;
	// MPropertyDescription = "How much health will be taken from each player over a full capture."
	float32 m_flTotalHealthToCapture;
	// MPropertyStartGroup = "Match Settings"
	// MPropertyDescription = "Time in the match this capture point can first become enabled."
	CRangeFloat m_flInitialEnableTimeInSeconds;
	// MPropertyDescription = "How long before the enable time to trigger pre-enabled effects."
	float32 m_flPreEnableWindowInSeconds;
	// MPropertyDescription = "Once the escort dies, how long until we re-enable ourselves."
	CRangeFloat m_flRespawnRangeInSeconds;
};
