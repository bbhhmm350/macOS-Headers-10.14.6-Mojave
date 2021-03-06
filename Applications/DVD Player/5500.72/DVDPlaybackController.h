//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVTouchBarPlaybackControlsControlling-Protocol.h"
#import "DVDTouchBarMediaSelectionControlling-Protocol.h"
#import "NSApplicationDelegate-Protocol.h"

@class AVTouchBarMediaSelectionOption, AVValueTiming, DVDAboutWindow, DVDDriveRegionWindow, DVDHudPanel, DVDNowPlayingInfoController, DVDPlaybackWindow, DVDScrubber, DVDSettingsController, NSArray, NSButton, NSImage, NSImageView, NSMenu, NSMenuItem, NSSlider, NSStackView, NSString, NSTextField, NSTimer, NSURL, NSVisualEffectView, NSWindow, SFAuthorizationView;

@interface DVDPlaybackController : NSObject <NSApplicationDelegate, AVTouchBarPlaybackControlsControlling, DVDTouchBarMediaSelectionControlling>
{
    DVDPlaybackWindow *_videoWindow;
    DVDHudPanel *_hudPanel;
    DVDAboutWindow *_aboutWindow;
    NSStackView *_feedbackStackView;
    NSImageView *_feedbackImageView;
    NSTextField *_feedbackTextField;
    NSWindow *_feedbackWindow;
    DVDDriveRegionWindow *_driveRegionWindow;
    NSVisualEffectView *_backgroundView;
    NSButton *_playPauseButton;
    NSButton *_stopButton;
    NSButton *_scanForwardButton;
    NSButton *_scanBackwardButton;
    NSButton *_nextChapterButton;
    NSButton *_previousChapterButton;
    NSButton *_menuButton;
    NSButton *_titleButton;
    DVDScrubber *_timeScrubber;
    NSTextField *_timeElapsedText;
    NSTextField *_timeRemainingText;
    NSSlider *_volumeSlider;
    NSButton *_minVolumeButton;
    NSButton *_maxVolumeButton;
    NSButton *_leftButton;
    NSButton *_rightButton;
    NSButton *_downButton;
    NSButton *_upButton;
    NSButton *_centerButton;
    NSMenu *_angleMenu;
    NSMenu *_audioMenu;
    NSMenu *_subtitlesMenu;
    NSMenuItem *_turnOnClosedCaptioningMenuItem;
    NSMenuItem *_enableDisableParentalControlsMenuItem;
    NSMenu *_titleMenu;
    NSMenu *_chapterMenu;
    NSString *_volumePath;
    int _DVDState;
    void *_eventCallBackID;
    short _dvdSlowmotionRate;
    short _dvdScanRate;
    BOOL _dvdScanDirection;
    NSImage *_playImage;
    NSImage *_pauseImage;
    NSImage *_scanForwardImage;
    NSImage *_scanBackwardImage;
    NSTimer *_hudVisibilityTimer;
    NSTimer *_feedbackWindowVisibilityTimer;
    DVDSettingsController *_settingsController;
    DVDNowPlayingInfoController *_nowPlayingInfoController;
    NSArray *_legibleTouchBarOptions;
    NSArray *_audibleTouchBarOptions;
    unsigned short _selectedLegibleOptionIndex;
    unsigned short _selectedAudibleOptionIndex;
    unsigned int _sleepPreventionAssertionID;
    double _hudNormalizedXPosition;
    double _hudNormalizedYPosition;
    SFAuthorizationView *_authorizationView;
    BOOL _shouldShowDriveRegionWindow;
    double _hudNormalizedTopDistance;
    double _hudNormalizedBottomDistance;
    double _hudNormalizedLeftDistance;
    double _hudNormalizedRightDistance;
    double _elapsedTime;
    BOOL _dvdOpen;
    BOOL _seeking;
    BOOL _openPanelVisible;
    AVValueTiming *timing;
    double seekToTime;
    AVTouchBarMediaSelectionOption *currentLegibleTouchBarMediaSelectionOption;
    AVTouchBarMediaSelectionOption *currentAudioTouchBarMediaSelectionOption;
    double _duration;
    double _contentDuration;
}

@property(readonly, nonatomic) BOOL openPanelVisible; // @synthesize openPanelVisible=_openPanelVisible;
@property(getter=isSeeking) BOOL seeking; // @synthesize seeking=_seeking;
@property(nonatomic) double contentDuration; // @synthesize contentDuration=_contentDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) BOOL dvdOpen; // @synthesize dvdOpen=_dvdOpen;
@property(retain) AVTouchBarMediaSelectionOption *currentAudioTouchBarMediaSelectionOption; // @synthesize currentAudioTouchBarMediaSelectionOption;
@property(retain) AVTouchBarMediaSelectionOption *currentLegibleTouchBarMediaSelectionOption; // @synthesize currentLegibleTouchBarMediaSelectionOption;
@property double seekToTime; // @synthesize seekToTime;
@property(retain) AVValueTiming *timing; // @synthesize timing;
- (void).cxx_destruct;
@property(readonly) BOOL hasLegibleTouchBarMediaSelectionOptions;
@property(readonly) BOOL hasAudioTouchBarMediaSelectionOptions;
@property(readonly) BOOL hasTouchBarMediaSelectionOptions;
@property(readonly) NSArray *legibleTouchBarMediaSelectionOptions;
@property(readonly) NSArray *audioTouchBarMediaSelectionOptions;
- (id)touchBarMediaSelectionOptionsFrom:(id)arg1;
- (void)togglePlayback;
@property(readonly) BOOL canBeginTouchBarScrubbing;
@property(readonly) BOOL canTogglePlayback;
@property(readonly) BOOL hasEnabledVideo;
@property(readonly) BOOL hasEnabledAudio;
- (void)endTouchBarScrubbing;
- (void)beginTouchBarScrubbing;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)updateTouchBarTiming;
- (id)regionStringRepresentationFromCode:(unsigned int)arg1;
- (void)_showDriveRegionWindow;
- (void)driveRegionWindow:(id)arg1 didSelectRegion:(unsigned int)arg2 authorization:(struct AuthorizationOpaqueRef *)arg3;
- (void)driveRegionWindowDidCancel:(id)arg1;
- (void)onNavigate:(id)arg1;
- (void)onTurnOnClosedCaptioning:(id)arg1;
- (void)_deviceMounted:(id)arg1;
- (void)_deviceWillUnmount:(id)arg1;
- (id)_localizedStringFprKey:(id)arg1;
- (void)_setAudioVolume:(unsigned short)arg1 updateSlider:(BOOL)arg2;
- (void)onMaxVolume:(id)arg1;
- (void)onMinVolume:(id)arg1;
- (void)onVolumeSlider:(id)arg1;
- (void)_updateVolumeSlider;
- (void)onVolumeDown:(id)arg1;
- (void)onVolumeUp:(id)arg1;
- (void)onMute:(id)arg1;
- (void)openDVDMedia:(id)arg1;
- (void)onEject:(id)arg1;
- (void)onAllowDiscOnce:(id)arg1;
- (void)onAlwaysAllowDisc:(id)arg1;
- (void)onEnableDisableParentalControls:(id)arg1;
- (void)onBeginningOfDisc:(id)arg1;
- (void)onToggleMenu:(id)arg1;
- (void)_setDVDScanRate:(short)arg1;
- (void)_setDVDSlowMotionRate:(short)arg1;
- (BOOL)_isSlowMotion;
- (BOOL)_isScanning;
- (void)onEigthSpeed:(id)arg1;
- (void)onQuarterSpeed:(id)arg1;
- (void)onHalfSpeed:(id)arg1;
- (void)on32XScan:(id)arg1;
- (void)on16XScan:(id)arg1;
- (void)on8XScan:(id)arg1;
- (void)on4XScan:(id)arg1;
- (void)on2XScan:(id)arg1;
- (void)_showScanningFeedbackForRate:(short)arg1 direction:(BOOL)arg2 error:(int)arg3;
- (short)nextScanRateForInitialRate:(short)arg1 direction:(BOOL)arg2;
- (void)onScanBackward:(id)arg1;
- (void)onScanForward:(id)arg1;
- (void)onSlowMotion:(id)arg1;
- (void)onStop:(id)arg1;
- (void)onPlayPause:(id)arg1;
- (BOOL)_isValidMedia:(id)arg1;
@property(readonly, nonatomic) BOOL isOnMenu;
- (BOOL)hasMedia;
- (BOOL)onKeyDown:(id)arg1;
- (void)handleDVDError:(int)arg1;
- (void)handleFatalDVDError:(int)arg1;
- (long long)displayParentalControlsAlert;
- (long long)displayAlertWithTitle:(id)arg1 info:(id)arg2 extra:(id)arg3;
- (void)logMediaInfo;
- (void)closeMedia;
- (void)closeAll:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)_showChapterFeedbackForError:(int)arg1;
- (void)onPreviousChapter:(id)arg1;
- (void)onNextChapter:(id)arg1;
- (void)onChapter:(id)arg1;
- (void)_skipTime:(unsigned int)arg1 forward:(BOOL)arg2;
- (void)onSkipAhead:(id)arg1;
- (void)onSkipBack:(id)arg1;
- (void)onTitle:(id)arg1;
- (void)onAngle:(id)arg1;
- (void)_showAudioLanguageFeedback:(unsigned short)arg1 err:(int)arg2;
- (void)onAudio:(id)arg1;
- (void)selectAudioStream:(unsigned short)arg1;
- (void)_showSubtitleFeedback:(unsigned short)arg1 err:(int)arg2;
- (void)onSubtitle:(id)arg1;
- (void)selectSubtitle:(unsigned short)arg1;
- (id)audioLanguages;
- (void)makeAudioMenu;
- (id)subtitles;
- (void)makeSubtitlesMenu;
- (void)_loadChaptersAndTitlesAndSoOn;
- (void)restoreLastPlayState;
- (BOOL)showParentalControlsAlertIfNeeded;
- (BOOL)openMedia:(id)arg1 isVolume:(BOOL)arg2;
- (BOOL)searchMountedDVDDisc;
@property(readonly, nonatomic) NSString *title;
@property(getter=isPlaying) BOOL playing;
@property(readonly, nonatomic) double currentRate;
@property(readonly, nonatomic) unsigned int elapsedTime;
- (void)handleDVDEvent:(id)arg1;
- (id)remainingTimeString:(unsigned long long)arg1;
- (id)elapsedTimeString:(unsigned long long)arg1;
- (void)_setScrubberAndTimeTextsElapsed:(unsigned long long)arg1 remaining:(unsigned long long)arg2;
- (void)endScrubbing;
- (void)beginScrubbing;
- (void)scrubToPosition:(double)arg1;
- (void)onScrub:(id)arg1;
- (BOOL)_closedCaptioningOn;
- (BOOL)validateMenuItem:(id)arg1;
- (void)endSession;
- (void)applicationWillTerminate:(id)arg1;
- (void)beginSession;
- (BOOL)isMouseOverHUD:(id)arg1;
- (void)mouseDownOverDVD:(id)arg1;
- (void)mouseMovedOverDVD:(id)arg1;
- (void)_releaseSleepAssertion;
- (void)_takeSleepAssertion;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowWillStartLiveResize:(id)arg1;
- (void)positionHudInFrame:(struct CGRect)arg1;
- (void)_updateHudPosition;
- (void)_showHideFeedbackWindow:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_fireFeedbackWindowVisibilityTimer:(id)arg1;
- (void)_showHideHud:(BOOL)arg1;
- (void)_fireHudVisibilityTimer:(id)arg1;
- (void)_centerHud;
- (void)orderFrontStandardAboutPanel:(id)arg1;
- (void)_makeHudControls;
- (void)applicationDidFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly) BOOL allowsPictureInPicturePlayback;
@property(readonly) NSURL *assetURL;
@property(readonly) BOOL canTogglePictureInPicture;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPlaying;
@property(getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property(readonly) NSArray *seekableTimeRanges;
@property(readonly) Class superclass;

@end

