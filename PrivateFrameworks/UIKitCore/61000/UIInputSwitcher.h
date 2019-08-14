//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIDelayedAction, UIInputSwitcherView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcher : NSObject
{
    UIDelayedAction *m_keyHoldDelay;
    UIDelayedAction *m_showSwitcherDelay;
    UIDelayedAction *m_hideSwitcherDelay;
    int m_state;
    UIInputSwitcherView *m_switcherView;
    double m_lastGlobeKeyUpTime;
    NSString *_newMode;
    BOOL _isGlobeKeyDown;
    NSString *_loadedIdentifier;
}

+ (id)activeInstance;
+ (id)sharedInstance;
@property(nonatomic) BOOL isGlobeKeyDown; // @synthesize isGlobeKeyDown=_isGlobeKeyDown;
@property(copy, nonatomic) NSString *loadedIdentifier; // @synthesize loadedIdentifier=_loadedIdentifier;
- (BOOL)handleModifiersChangedEvent:(id)arg1;
- (BOOL)handleSwitchingKeyEvent:(id)arg1;
- (void)updateHardwareLayout;
- (BOOL)switchMode:(id)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3;
- (BOOL)handleSwitchCommand:(BOOL)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3;
- (BOOL)handleSwitchCommand:(BOOL)arg1;
- (id)inputModeIdentifierWithNextFlag:(BOOL)arg1;
- (BOOL)isVisibleOrHiding;
- (BOOL)isVisible;
- (void)clearKeyHoldTimer;
- (void)touchKeyHoldTimer;
- (void)clearShowSwitcherTimer;
- (void)cancelShowSwitcherTimer;
- (void)touchShowSwitcherTimer;
- (void)showSwitcherWithoutAutoHide;
- (void)showSwitcherWithAutoHide;
- (void)showSwitcherShouldAutoHide:(BOOL)arg1;
- (void)_showSwitcherViewAsHUD;
- (void)clearHideSwitcherTimer;
- (void)touchHideSwitcherTimer;
- (void)hideSwitcher;
- (void)handleRotate:(id)arg1;
- (void)dealloc;
- (id)init;

@end
