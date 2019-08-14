//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <SpeechObjects/NSSpeechSynthesizerDelegate-Protocol.h>

@class ComApplePreferenceSpeechTAPhraseListWindow, NSButton, NSPopUpButton, NSSlider, NSSpeechSynthesizer, NSString, SOVoicePopUpButton;

@interface ComApplePreferenceSpeechTAOptionsSheet : NSWindowController <NSSpeechSynthesizerDelegate>
{
    SOVoicePopUpButton *_voicePopupMenu;
    NSPopUpButton *_phrasesPopUpButton;
    NSSlider *_speakingDelaySlider;
    NSButton *_speakingTestButton;
    BOOL _talkingAlertsShouldSpeakPhrase;
    int _talkingAlertsPhraseStrategy;
    unsigned int _talkingAlertsPhraseIndex;
    unsigned int _currentTestPhraseIndex;
    id _delegate;
    ComApplePreferenceSpeechTAPhraseListWindow *_phraseListWindowController;
    NSSpeechSynthesizer *_synthesizer;
}

+ (id)defaultTAOptionsSheet;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
- (void)_showPlayStopButtonAsPlaying:(BOOL)arg1;
- (void)stopOrStartTestButtonPressed:(id)arg1;
- (void)phrasePopUpSelected:(id)arg1;
- (void)buildPhrasePopupMenu;
- (void)windowController:(id)arg1 didSaveEdits:(BOOL)arg2;
- (void)cancelTAOptions:(id)arg1;
- (void)saveTAOptions:(id)arg1;
- (void)closeWindow;
- (void)showSheetWithOptionsWithDelegate:(id)arg1 modalForWindow:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
