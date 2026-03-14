// MGetKV3ClassDefaults = {
//	"_class": "AI_BaseNPCAnimGraph_DebugSnapshotData_t",
//	"e_action_desired": "",
//	"b_action_restart": false,
//	"e_movement_type_desired": "",
//	"b_movement_type_restart": false
//}
class AI_BaseNPCAnimGraph_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t
{
	CGlobalSymbol e_action_desired;
	bool b_action_restart;
	CGlobalSymbol e_movement_type_desired;
	bool b_movement_type_restart;
};
