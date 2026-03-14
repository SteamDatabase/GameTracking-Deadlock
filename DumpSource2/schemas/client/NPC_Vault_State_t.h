enum NPC_Vault_State_t : uint32_t
{
	kNPC_Vault_State_Idle = 0,
	kNPC_Vault_State_Active = 1,
	kNPC_Vault_State_Critical = 2,
	kNPC_Vault_State_DestroySuccessLight = 3,
	kNPC_Vault_State_DestroySuccessHeavy = 4,
	kNPC_Vault_State_DestroyFailure = 5,
	kNPC_Vault_State_DestroyDead = 6,
};
