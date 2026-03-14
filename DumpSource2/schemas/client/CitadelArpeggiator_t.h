// MGetKV3ClassDefaults = {
//	"m_strSamplerEvent": "",
//	"m_nLowestNote": "EMidiNotePitch_0A",
//	"m_nHighestNote": "EMidiNotePitch_8C",
//	"m_nDefaultArpMode": "EArpMode_Up",
//	"m_nTransposeSteps": 0
//}
class CitadelArpeggiator_t
{
	CSoundEventName m_strSamplerEvent;
	CitadelMidiNotePitch_t m_nLowestNote;
	CitadelMidiNotePitch_t m_nHighestNote;
	CitadelArpeggiatorMode_t m_nDefaultArpMode;
	int32 m_nTransposeSteps;
};
