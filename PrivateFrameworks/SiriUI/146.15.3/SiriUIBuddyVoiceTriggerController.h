//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <SiriUI/SiriUIBuddySubviewController-Protocol.h>
#import <SiriUI/VTUITrainingViewControllerDelegate-Protocol.h>

@class NSButton, NSString, SiriUIBuddyController, VTUITrainingViewController;

__attribute__((visibility("hidden")))
@interface SiriUIBuddyVoiceTriggerController : NSViewController <VTUITrainingViewControllerDelegate, SiriUIBuddySubviewController>
{
    VTUITrainingViewController *_trainingViewController;
    NSButton *_skipButton;
    SiriUIBuddyController *_parentController;
}

@property __weak SiriUIBuddyController *parentController; // @synthesize parentController=_parentController;
- (void).cxx_destruct;
- (void)didCloseLid;
- (BOOL)hasCompletedTraining;
@property(readonly) BOOL shouldShowPane;
- (void)trainingViewControllerIsDisplayingTimeoutString:(id)arg1;
- (void)trainingViewController:(id)arg1 storeTrainingUtteranceData:(id)arg2 forLanguageCode:(id)arg3;
- (void)trainingViewController:(id)arg1 setVoiceTriggerUserEnabled:(BOOL)arg2;
- (void)trainingViewController:(id)arg1 markSATEnrollmentSuccessForLanguageCode:(id)arg2;
- (void)trainingViewController:(id)arg1 discardSATEnrollmentForLanguageCode:(id)arg2;
- (void)trainingViewController:(id)arg1 finishedTraining:(BOOL)arg2;
- (void)skipVoiceTrigger:(id)arg1;
- (void)cancelTraining;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)loadView;
- (id)initWithParentController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
