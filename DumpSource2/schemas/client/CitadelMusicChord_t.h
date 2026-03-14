// MGetKV3ClassDefaults = {
//	"m_flStartTime": 0.000000,
//	"m_ArpeggiatorMode": "EArpMode_Default",
//	"m_nNumOctaves": 1,
//	"m_ChordVoicing":
//	[
//	]
//}
class CitadelMusicChord_t
{
	float32 m_flStartTime;
	CitadelArpeggiatorMode_t m_ArpeggiatorMode;
	uint8 m_nNumOctaves;
	CUtlVector< CitadelMidiNotePitch_t > m_ChordVoicing;
};
