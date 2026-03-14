// MGetKV3ClassDefaults = {
//	"difficulty": "k_ECitadelBotDifficulty_None",
//	"free_gold_per_minute": 0.000000,
//	"free_gold_per_minute_scaled": 0.000000,
//	"takeover_spend_currency_time": 240.000000,
//	"allow_purchasing_anywhere": false,
//	"engage_priority_hero_mult": 1.000000,
//	"engage_priority_human_mult": 1.000000,
//	"engage_last_hit_threshold": 0.000000,
//	"engage_distance_last_hit_mult": 1.000000,
//	"engage_distance_hero_mult": 1.000000,
//	"engage_distance": 1000.000000,
//	"engage_lane_side_dist": 200.000000,
//	"engage_player_side_dist": 200.000000,
//	"safety_distance_behind_ally_creeps": 5.000000,
//	"safety_distance_away_from_tower_range": 1.000000,
//	"choose_lane_on_interval": 3.000000,
//	"lane_change_duration": 10.000000,
//	"choose_balanced_lanes": true,
//	"attack_miss_chance": 0.000000,
//	"attack_enemies_inaccuracy": 0.000000,
//	"attack_enemies_inaccuracy_scale": 1.000000,
//	"attack_enemies_inaccuracy_distance": 25.000000,
//	"attack_enemies_inaccuracy_distance_scale": 1.500000,
//	"attack_enemies_inaccuracy_threat_scale": 0.500000,
//	"reload_pct": 0.000000,
//	"purchase_random_upgrades": 0.000000,
//	"purchase_upgrades_in_order": 0.000000,
//	"use_ability_cooldown": 1.000000,
//	"heavy_melee_chance": 0.100000,
//	"heavy_melee_chance_in_reload": 0.300000,
//	"parry_chance": 0.020000,
//	"parry_no_los_penalty": 0.500000,
//	"parry_chance_escalation": 0.000000,
//	"parry_melee_charge_detection_pct": 10.000000,
//	"max_attacker_memory": 6.000000,
//	"max_melee_attack_memory": 20.000000,
//	"jump_sometimes": true,
//	"roll_after_damage": true,
//	"roll_chance": 0.400000,
//	"roll_chance_lowhealth_scale": 1.600000,
//	"roll_frequency": 2.000000,
//	"fight_midboss": false,
//	"fight_for_idol": false,
//	"sensing_tick_interval": 12,
//	"visual_reaction_time": 0.750000,
//	"shoot_duration": 0.750000,
//	"projectile_range_scale": 0.500000,
//	"ability_min_cast_range": 800.000000,
//	"ability_min_cast_range_friendly": 800.000000,
//	"ability_friendly_life_threshold": 70.000000,
//	"ability_friendly_pitch": 60.000000,
//	"ability_window_size": 0.850000,
//	"spend_random_ap": 0.000000,
//	"bonus_regen": 0.000000,
//	"bonus_regen_outofsight": 0.030000,
//	"bonus_run_speed": 6.000000,
//	"safe_spot_target_radius": 6.000000,
//	"safe_spot_safety_radius": 7.000000,
//	"enemy_hero_engage_distance": 10.000000,
//	"safe_spot_samples_min": 1,
//	"safe_spot_samples_max": 3,
//	"attempt_orb_start_time": 180,
//	"attempt_deny_orb_pct": 10,
//	"attempt_secure_orb_pct": 5,
//	"attempt_orb_range": 35.000000,
//	"low_health": 20.000000,
//	"low_health_pushed": 15.000000,
//	"guide_bot_neutral_info": false,
//	"message_interval": 20.000000,
//	"los_check_interval": 15
//}
class CBotDifficultyDefinition
{
	// MPropertyDescription = "Difficulty Enum"
	ECitadelBotDifficulty difficulty;
	// MPropertyDescription = "Bots get free gold over time"
	float32 free_gold_per_minute;
	// MPropertyDescription = "GPM that scales with game time"
	float32 free_gold_per_minute_scaled;
	// MPropertyDescription = "How much time until a takeover bot till spend gold/ap"
	float32 takeover_spend_currency_time;
	// MPropertyDescription = "Are bots allowed to buy items from anywhere"
	bool allow_purchasing_anywhere;
	// MPropertyDescription = "Higher values encourage bots to engage heroes over troopers when a player is within engagement range. 1.0 means heroes and troopers are equal."
	float32 engage_priority_hero_mult;
	// MPropertyDescription = "Higher values encourage bots to engage human players when within engagement range.  1.0 means human players and other targets equal"
	float32 engage_priority_human_mult;
	// MPropertyDescription = "Forces bots to prioritize getting last hits on enemies below this health"
	float32 engage_last_hit_threshold;
	// MPropertyDescription = "Extra distance bots are willing to engage enemies at to get last hits"
	float32 engage_distance_last_hit_mult;
	// MPropertyDescription = "Extra distance bots are willing to engage heroes at"
	float32 engage_distance_hero_mult;
	// MPropertyDescription = "Distance bots are willing to engage enemies at"
	float32 engage_distance;
	// MPropertyDescription = "Distance bots will engage to the left or right of the target"
	float32 engage_lane_side_dist;
	// MPropertyDescription = "Distance bots will engage to the left or right of the target"
	float32 engage_player_side_dist;
	// MPropertyDescription = "Distance behind creep wave midpoint where bots will prefer to be"
	float32 safety_distance_behind_ally_creeps;
	// MPropertyDescription = "Distance to keep away from enemy bosses. A value of 1.0 is right outside that tower's attack range."
	float32 safety_distance_away_from_tower_range;
	// MPropertyDescription = "Bots pick on a time interval"
	float32 choose_lane_on_interval;
	// MPropertyDescription = "Duration Bot prioritizes changing lanes vs fighting"
	float32 lane_change_duration;
	// MPropertyDescription = "Bots try to balance lanes"
	bool choose_balanced_lanes;
	// MPropertyDescription = "Desired bot miss chance"
	float32 attack_miss_chance;
	// MPropertyDescription = "Bots choose a random angle in this range to offset their perfect aim"
	float32 attack_enemies_inaccuracy;
	// MPropertyDescription = "When trying to miss "
	float32 attack_enemies_inaccuracy_scale;
	// MPropertyDescription = "Distance (m) to make bots even worse accuracy"
	float32 attack_enemies_inaccuracy_distance;
	// MPropertyDescription = "Scale the accuracy by this amount at distance"
	float32 attack_enemies_inaccuracy_distance_scale;
	// MPropertyDescription = "Scale inaccuracy by this amount when threatened"
	float32 attack_enemies_inaccuracy_threat_scale;
	// MPropertyDescription = "Bot reloads when clip is this low"
	float32 reload_pct;
	// MPropertyDescription = "Citadel bots will randomly purchase available upgrades every few seconds"
	float32 purchase_random_upgrades;
	// MPropertyDescription = "Citadel bots will purchase available upgrades in order every few seconds"
	float32 purchase_upgrades_in_order;
	// MPropertyDescription = "Time between bot using ability"
	float32 use_ability_cooldown;
	// MPropertyDescription = "Chance to do a melee attack when within range"
	float32 heavy_melee_chance;
	// MPropertyDescription = "Chance to do a melee attack when within range while reloading"
	float32 heavy_melee_chance_in_reload;
	// MPropertyDescription = "Chance to parry when bot sees a melee attack"
	float32 parry_chance;
	// MPropertyDescription = "Penalty to parrying when bot has no LoS"
	float32 parry_no_los_penalty;
	// MPropertyDescription = "How much parry chance goes up after each recent melee attack"
	float32 parry_chance_escalation;
	// MPropertyDescription = "At what percentage of melee charge does a bot decide to parry, lower values mean the bot will parry earlier"
	float32 parry_melee_charge_detection_pct;
	// MPropertyDescription = "How long to remember recent attackers"
	float32 max_attacker_memory;
	// MPropertyDescription = "How long to remember recent melee attacks"
	float32 max_melee_attack_memory;
	// MPropertyDescription = "Forces bots to attack nearby enemies"
	bool jump_sometimes;
	// MPropertyDescription = "Forces bots to attack nearby enemies"
	bool roll_after_damage;
	// MPropertyDescription = "How often bots will roll given damage conditions"
	float32 roll_chance;
	// MPropertyDescription = "Roll chance amplification when low health"
	float32 roll_chance_lowhealth_scale;
	// MPropertyDescription = "Time between roll attempts"
	float32 roll_frequency;
	// MPropertyDescription = "Fight the midboss"
	bool fight_midboss;
	// MPropertyDescription = "Fight for the idol"
	bool fight_for_idol;
	// MPropertyDescription = "How many ticks between the bot performing sensing"
	int32 sensing_tick_interval;
	// MPropertyDescription = "Seconds after a bot sees you before it can react"
	float32 visual_reaction_time;
	// MPropertyDescription = "Seconds after a bot sees you before it can react"
	float32 shoot_duration;
	// MPropertyDescription = "Factor from Projectile speed to usable range"
	float32 projectile_range_scale;
	// MPropertyDescription = "Default Cast Range for abilities that don't specify"
	float32 ability_min_cast_range;
	// MPropertyDescription = "Default Enemy range to use friendly abilities"
	float32 ability_min_cast_range_friendly;
	// MPropertyDescription = "Maximum life for friendly ability to be used (prevents healing when full health)"
	float32 ability_friendly_life_threshold;
	// MPropertyDescription = "Pitch (aiming down) for bots when using a friendly ability"
	float32 ability_friendly_pitch;
	// MPropertyDescription = "How much in range before doing an ability (ie not casting on edges)"
	float32 ability_window_size;
	// MPropertyDescription = "Interval in seconds at which to spend AP randomly"
	float32 spend_random_ap;
	// MPropertyDescription = "Bonus regen all the time"
	float32 bonus_regen;
	// MPropertyDescription = "Regen when not seen by enemy players"
	float32 bonus_regen_outofsight;
	// MPropertyDescription = "Bonus run speed"
	float32 bonus_run_speed;
	// MPropertyDescription = "Radius for bots to look for better locations to path to"
	float32 safe_spot_target_radius;
	// MPropertyDescription = "Radius for bots to consider whether a position is safe"
	float32 safe_spot_safety_radius;
	// MPropertyDescription = "Distance away from target to search for an attack location"
	float32 enemy_hero_engage_distance;
	// MPropertyDescription = "Minimum number of spots to sample looking for good positioning"
	int32 safe_spot_samples_min;
	// MPropertyDescription = "Maximum number of spots to sample looking for good positioning"
	int32 safe_spot_samples_max;
	// MPropertyDescription = "Try to deny orbs"
	int32 attempt_orb_start_time;
	// MPropertyDescription = "Percentage of the time to look for red orbs to shoot"
	int32 attempt_deny_orb_pct;
	// MPropertyDescription = "Percentage of the time to look for gold orbs to shoot"
	int32 attempt_secure_orb_pct;
	// MPropertyDescription = "Range(m) to Scan for Orbs"
	float32 attempt_orb_range;
	// MPropertyDescription = "Low Health"
	float32 low_health;
	// MPropertyDescription = "When pushed against tower"
	float32 low_health_pushed;
	// MPropertyDescription = "Guide bot talks about neutrals"
	bool guide_bot_neutral_info;
	// MPropertyDescription = "Min time between messages a player bot can send"
	float32 message_interval;
	// MPropertyDescription = "How many frames between LOS check refreshes on the Bots?"
	int32 los_check_interval;
};
