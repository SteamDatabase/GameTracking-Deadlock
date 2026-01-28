"use strict";
/// <reference path="../citadel.d.ts" />
/// <reference path="../async.ts" />
let gProgressSequence = null;
function AnimateProgressScreen(strHeroVictorySound) {
    DoProgressAnimation(strHeroVictorySound);
}
async function DoProgressAnimation(strHeroVictorySound) {
    if (gProgressSequence && !gProgressSequence.IsFinished())
        gProgressSequence.Abort();
    gProgressSequence = new Async.SequenceController();
    let screen = $.GetContextPanel();
    let mvpAccolades = screen.FindChildInLayoutFile("MVPAccolades");
    let honorableMentions = screen.FindChildInLayoutFile("HonorableMentions");
    const mvpAwards = screen.FindChildInLayoutFile("MVPAwards");
    // Reset to the initial state
    screen.RemoveClass('ShowMVPTitle');
    screen.RemoveClass('ShowMVPHero');
    for (let i = 0; i < mvpAccolades.GetChildCount(); ++i) {
        mvpAccolades.GetChild(i).RemoveClass('ShowAccolade');
    }
    for (let i = 0; i < mvpAwards.GetChildCount(); ++i) {
        mvpAwards.GetChild(i).RemoveClass('ShowAward');
    }
    for (let i = 0; i < honorableMentions.GetChildCount(); ++i) {
        honorableMentions.GetChild(i).RemoveClass('ShowHonorableMention');
    }
    // Now do the actual sequence
    screen.AddClass('ShowMVPTitle');
    await gProgressSequence.Delay(0.3);
    screen.AddClass('ShowMVPHero');
    PlayLocalHeroSound(strHeroVictorySound);
    await gProgressSequence.Delay(2.0);
    // We should either have accolades or awards.
    for (let i = 0; i < mvpAccolades.GetChildCount(); ++i) {
        let accoladePanel = mvpAccolades.GetChild(i);
        accoladePanel.AddClass('ShowAccolade');
        await gProgressSequence.Delay(0.3);
    }
    for (let i = 0; i < mvpAwards.GetChildCount(); ++i) {
        let awardPanel = mvpAwards.GetChild(i);
        awardPanel.AddClass('ShowAward');
        await gProgressSequence.Delay(0.3);
    }
    await gProgressSequence.Delay(2.0);
    for (let i = 0; i < honorableMentions.GetChildCount(); ++i) {
        let honorableMention = honorableMentions.GetChild(i);
        honorableMention.AddClass('ShowHonorableMention');
        await gProgressSequence.Delay(0.3);
    }
    gProgressSequence.EndSkipping();
    await gProgressSequence.Delay(3.0);
    screen.NotifyFinishedAnimating();
}
function SkipForward() {
    if (!gProgressSequence)
        return;
    gProgressSequence.Skip();
}
function ShowScreenNoAnimation() {
    let screen = $.GetContextPanel();
    let mvpAccolades = screen.FindChildInLayoutFile("MVPAccolades");
    let honorableMentions = screen.FindChildInLayoutFile("HonorableMentions");
    const mvpAwards = screen.FindChildInLayoutFile("MVPAwards");
    screen.AddClass('ShowMVPTitle');
    screen.AddClass('ShowMVPHero');
    // We should either have accolades or awards.
    for (let i = 0; i < mvpAccolades.GetChildCount(); ++i) {
        let accoladePanel = mvpAccolades.GetChild(i);
        accoladePanel.AddClass('ShowAccolade');
    }
    for (let i = 0; i < mvpAwards.GetChildCount(); ++i) {
        let awardPanel = mvpAwards.GetChild(i);
        awardPanel.AddClass('ShowAward');
    }
    for (let i = 0; i < honorableMentions.GetChildCount(); ++i) {
        let honorableMention = honorableMentions.GetChild(i);
        honorableMention.AddClass('ShowHonorableMention');
    }
}
