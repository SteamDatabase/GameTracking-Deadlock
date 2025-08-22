"use strict";
/// <reference path="citadel.d.ts" />
/// <reference path="async.ts" />
let gAsyncAbort = null;
function TestProgressAnimation() {
    let data = {
        match_id: "0",
        local_player: {
            player_slot: 0,
            ui_slot: 5,
            account_id: 0,
            hero_id: 1,
            hero_name: "hero_inferno",
            hero_xp: 2500,
            team: 2 /* CitadelTeam_t.TEAM_AMBER */,
            win: true,
            match_hero_xp: 100,
            match_outcome_sound: "Generated.Inferno.Hero.Pick.VO",
            stats: [
                {
                    stat_panel_id: "Networth",
                    stat_value: 46332,
                    award_xp: 0,
                },
                {
                    stat_panel_id: "Kills",
                    stat_value: 16,
                    award_xp: 0,
                },
                {
                    stat_panel_id: "Deaths",
                    stat_value: 4,
                    award_xp: 0,
                },
                {
                    stat_panel_id: "Assists",
                    stat_value: 12,
                    award_xp: 0,
                },
                {
                    stat_panel_id: "PlayerDamage",
                    stat_value: 21887,
                    award_xp: 25,
                    award_title: "#Citadel_HeroXP_Reason_MostPlayerDamage",
                },
                {
                    stat_panel_id: "ObjDamage",
                    stat_value: 12233,
                    award_xp: 0,
                },
                {
                    stat_panel_id: "Healing",
                    stat_value: 2023,
                    award_xp: 0,
                },
            ],
            mod_costs: {
                weapon_cost: 6400,
                armor_cost: 12800,
                tech_cost: 3200,
            }
        },
    };
    StartProgressAnimation(data);
}
let gPostGameProgressSequence = null;
function StartProgressAnimation(data) {
    $.Msg("Running progress sequence:");
    $.Msg(JSON.stringify(data));
    if (gPostGameProgressSequence && !gPostGameProgressSequence.IsFinished())
        gPostGameProgressSequence.Abort();
    gPostGameProgressSequence = new Async.SequenceController();
    const panel = $.GetContextPanel();
    DoProgressAnimation(panel, data, gPostGameProgressSequence);
}
function ProgressSequenceSkip() {
    if (gPostGameProgressSequence)
        gPostGameProgressSequence.Skip();
}
async function DoProgressAnimation(panel, data, sequence) {
    let localPlayer = data.local_player;
    panel.RemoveClass("ShowHeroModel");
    panel.RemoveClass("ShowScoreboardEntry");
    // Setup the hero model
    let heroScenePanel = panel.FindChildInLayoutFile("HeroScenePanel");
    heroScenePanel.SetUnit(localPlayer.hero_name, "", "roster", false);
    panel.SetDialogVariableInt("hero_id", localPlayer.hero_id);
    // Setup the team's class  
    let sTeamClass = (localPlayer.team == 2 /* CitadelTeam_t.TEAM_AMBER */) ? "localPlayerIsTeam1" : "localPlayerIsTeam2";
    panel.SwitchClass("local_player_team", sTeamClass);
    // Setup the UI slot class
    panel.SwitchClass("ui_slot", "UISlot" + localPlayer.ui_slot);
    // Setup the player name
    let userName = panel.FindChildInLayoutFile("PlayerName");
    userName.accountid = "" + localPlayer.account_id;
    panel.SetDialogVariableInt("account_id", localPlayer.account_id);
    // Setup the hero bar graphs
    let modGraph = panel.FindChildInLayoutFile("ModBarGraph");
    modGraph.SetProgressBarValues(localPlayer.mod_costs.weapon_cost, localPlayer.mod_costs.armor_cost, localPlayer.mod_costs.tech_cost);
    // Setup the hero badge
    let badge = panel.FindChildInLayoutFile("HeroBadge");
    badge.heroid = localPlayer.hero_id;
    badge.heroxp = localPlayer.hero_xp;
    // Setup the stats
    const stats = [];
    for (const playerStat of localPlayer.stats || []) {
        const statPanel = panel.FindChildInLayoutFile(playerStat.stat_panel_id);
        statPanel.SetDialogVariableInt("stat_value", playerStat.stat_value);
        statPanel.RemoveClass("ShowStat");
        statPanel.RemoveClass("HasAward");
        stats.push({ data: playerStat, panel: statPanel });
    }
    // Wait for the hero model to load
    await sequence.WaitFor(() => heroScenePanel.BHasClass("SceneLoaded"));
    sequence.Run(() => heroScenePanel.ApplyStyles(true));
    //sequence.Run( () => heroScenePanel.PlayPanelSound( "UI.PostGame.ProgressStart" ) );
    sequence.Run(() => heroScenePanel.PlayPanelSound(localPlayer.match_outcome_sound));
    sequence.Run(() => panel.AddClass("ShowHeroModel"));
    await sequence.Delay(0.5);
    sequence.Run(() => panel.AddClass("ShowScoreboardEntry"));
    await sequence.Delay(1.0);
    sequence.Run(() => panel.PlayPanelSound("UI.PostGame.Award"));
    await AnimateAwardXP(panel, localPlayer.match_hero_xp, localPlayer.win ? "#Citadel_HeroXP_Reason_Win" : "#Citadel_HeroXP_Reason_Loss", sequence);
    // Animate the stats appearing
    for (const stat of stats) {
        sequence.Run(() => stat.panel.AddClass("ShowStat"));
        sequence.Run(() => stat.panel.PlayPanelSound("UI.PostGame.StatAppear"));
        await sequence.Delay(0.2);
        if (stat.data.award_xp) {
            sequence.Run(() => stat.panel.AddClass("HasAward"));
            sequence.Run(() => stat.panel.PlayPanelSound("UI.PostGame.Award"));
            await AnimateAwardXP(panel, stat.data.award_xp, stat.data.award_title || "", sequence);
        }
    }
    sequence.EndSkipping();
    // A little delay at the end
    await sequence.Delay(1.0);
    sequence.Finish();
    $.DispatchEvent('CitadelPostGameProgressFinished', data.match_id);
}
async function AnimateAwardXP(panel, xp, title, sequence) {
    let overheadContainer = panel.FindChildInLayoutFile("Overhead");
    let overheadDisplay = $.CreatePanel('Panel', overheadContainer, "");
    overheadDisplay.BLoadLayoutSnippet("XPGain");
    overheadDisplay.SetDialogVariableLocString("reason", title);
    overheadDisplay.SetDialogVariableInt("xp_amount", xp);
    // Count up the progress bar
    // todo(ericl): if you hit a level up, then need to animate that.
    let badge = panel.FindChildInLayoutFile("HeroBadge");
    const xpStart = badge.progressheroxp;
    const duration = 1.0; // todo(ericl): scale this based on how much xp?
    const startTime = $.FrameTime();
    while (!sequence.IsAborted() && !sequence.IsSkipping()) {
        const curTime = $.FrameTime();
        const progress = (curTime - startTime) / (duration);
        const xpGain = Math.floor(progress * xp);
        badge.progressheroxp = xpStart + xpGain;
        if (curTime >= startTime + duration)
            break;
        await Async.NextFrame();
    }
    badge.progressheroxp = xpStart + xp;
    overheadDisplay.DeleteAsync(0.0);
}
