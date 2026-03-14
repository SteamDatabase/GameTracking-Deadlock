// MGetKV3ClassDefaults = {
//	"m_strSoundEvent": "",
//	"m_nDeferState": "EMusicState_Invalid",
//	"m_flBpm": -1.000000,
//	"m_bInterruptStop": true,
//	"m_bSetToNoneStateWhenFinished": true,
//	"m_nSyncMode": "ESyncMode_None",
//	"m_SyncTimes":
//	[
//	],
//	"m_flSyncOffset": 0.000000,
//	"m_Chords":
//	{
//	},
//	"m_Arpeggiators":
//	[
//	]
//}
class CitadelMusicCueData_t
{
	CSoundEventName m_strSoundEvent;
	EMusicState_t m_nDeferState;
	float32 m_flBpm;
	bool m_bInterruptStop;
	bool m_bSetToNoneStateWhenFinished;
	CitadelMusicSyncMode_t m_nSyncMode;
	CUtlVector< float32 > m_SyncTimes;
	float32 m_flSyncOffset;
	CUtlOrderedMap< CUtlString, CitadelMusicChord_t > m_Chords;
	CUtlVector< CUtlString > m_Arpeggiators;
};
