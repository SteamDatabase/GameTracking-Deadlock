// MVDataRoot
// MGetKV3ClassDefaults = {
//	"m_vecSubnavMessageIDs":
//	[
//	],
//	"m_unPingWheelOptionID": 0,
//	"m_ePingConcept": "CITADEL_PING_CONCEPT_NONE",
//	"m_ePingMarkerInfo": "k_EPingMarkerInfo_HideMarkerAndSound",
//	"m_eRecipientsType": "k_ECitadelRecipients_GlobalFriendlyTeam",
//	"m_eLaneColor": "k_ELaneColor_Invalid",
//	"m_strLabelToken": "",
//	"m_strMessageToken": "",
//	"m_strSound": "",
//	"m_strIcon": "",
//	"m_ePingWheelSoundType": "CITADEL_PING_WHEEL_SOUND_NONE",
//	"m_bIsSubnavMessage": false,
//	"m_flPhraseTopMarginOffset": 30.000000,
//	"m_vecSubnavMessageNames":
//	[
//	],
//	"m_vecRespondsToConcepts":
//	[
//	],
//	"m_bBindable": false,
//	"m_bPingWheelBindable": false,
//	"m_vecChatTextTriggers":
//	[
//	]
//}
class PingWheelMessage_t
{
	// MPropertySuppressField
	CUtlVector< PingWheelOptionID_t > m_vecSubnavMessageIDs;
	// MPropertyDescription = "unique integer ID of this ping wheel message"
	// MVDataUniqueMonotonicInt = "_editor/next_ping_wheel_id"
	// MPropertyAttributeEditor = "locked_int()"
	// MPropertySuppressField
	PingWheelOptionID_t m_unPingWheelOptionID;
	// MPropertyDescription = "Concept for your ping message. These are populated in citadel_ping_wheel_data.h"
	CitadelPingWheelConcept_t m_ePingConcept;
	// MPropertySuppressExpr = "m_bIsSubnavMessage == true"
	// MPropertyDescription = "How do you want the ping to behave?"
	ChatMsgPingMarkerInfo m_ePingMarkerInfo;
	// MPropertySuppressExpr = "m_bIsSubnavMessage == true"
	// MPropertyDescription = "Which recipients do you want this ping message sent to?"
	ECitadelPingMessageRecipients_t m_eRecipientsType;
	// MPropertySuppressExpr = "m_ePingConcept != CITADEL_PING_HEADING_TO_LANE && m_ePingConcept != CITADEL_PING_PUSH_LANE && m_ePingConcept != CITADEL_PING_DEFEND_LANE"
	// MPropertyDescription = "Lane Color for certain pings that require a line color."
	CMsgLaneColor m_eLaneColor;
	// MPropertyDescription = "This is the Loc String that displays as a Ping Wheel Option."
	CUtlString m_strLabelToken;
	// MPropertyDescription = "This is the Loc String that shows in the chat area when you use this Ping Option."
	CUtlString m_strMessageToken;
	// MPropertySuppressExpr = "m_bIsSubnavMessage == true"
	// MPropertyDescription = "Sound that Plays when you use this Ping Option"
	CUtlString m_strSound;
	// MPropertySuppressExpr = "m_bIsSubnavMessage == true"
	// MPropertyDescription = "Icon that displays on the Ping Wheel"
	CUtlString m_strIcon;
	// MPropertySuppressExpr = "m_bIsSubnavMessage == true"
	// MPropertyDescription = "What type of sound should this Ping Option play when used?"
	ECitadelPingWheelSound_t m_ePingWheelSoundType;
	// MPropertyDescription = "Is this a subnav of another message? i.e. Heading to Yellow is a subnav of Heading to Lane..."
	bool m_bIsSubnavMessage;
	// MPropertyDescription = "The Default value 30 is usually good but if the text on the Ping Wheel isn't centered vertically, you should adjust this value."
	float32 m_flPhraseTopMarginOffset;
	// MPropertySuppressExpr = "m_bIsSubnavMessage == true || m_eSliceType == CITADEL_PING_WHEEL_ONE_SLICE || m_eSliceType == CITADEL_PING_WHEEL_TWO_SLICE"
	// MPropertyCustomFGDType = "vdata_choice:scripts/ping_wheel_messages.vdata"
	// MPropertyDescription = "Is this a parent message that has subnav messages? i.e. Heading to Lane has subnav messages Heading to Yellow, Heading to Blue, etc."
	CUtlVector< CUtlString > m_vecSubnavMessageNames;
	// MPropertySuppressExpr = "m_bIsSubnavMessage == true"
	// MPropertyDescription = "Is this message a response to other concepts? i.e. Yes, No, and On My Way are all responses to other messages. This message will appear in the Contextual Ping Wheel Slot if one of these concepts is used by another player."
	CUtlVector< CitadelPingWheelConcept_t > m_vecRespondsToConcepts;
	// MPropertyDescription = "Should this message be bindable via Keybinds?"
	bool m_bBindable;
	// MPropertyDescription = "Should this message be bindable on the Ping Wheel?"
	bool m_bPingWheelBindable;
	// MPropertyDescription = "Chat text messages that trigger the concept associated with this message"
	CUtlVector< CUtlString > m_vecChatTextTriggers;
};
