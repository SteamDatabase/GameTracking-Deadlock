// MGetKV3ClassDefaults = {
//	"_class": "AI_DefaultNPC_DebugSnapshotData_t",
//	"s_npc_current_ability": "",
//	"s_npc_move_tactic_current": "",
//	"s_npc_move_tactic_phase": "",
//	"move_tactic_interrupt_conditions":
//	[
//	]
//}
class AI_DefaultNPC_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t
{
	CGlobalSymbol s_npc_current_ability;
	CGlobalSymbol s_npc_move_tactic_current;
	CGlobalSymbol s_npc_move_tactic_phase;
	CUtlVector< CGlobalSymbol > move_tactic_interrupt_conditions;
};
