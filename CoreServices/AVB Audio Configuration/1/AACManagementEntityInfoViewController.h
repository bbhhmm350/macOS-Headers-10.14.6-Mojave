//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSProgressIndicator, NSStackView;

@interface AACManagementEntityInfoViewController : NSViewController
{
    NSStackView *_entityNameStack;
    NSProgressIndicator *_entityNameProgress;
    NSStackView *_groupNameStack;
    NSProgressIndicator *_groupNameProgress;
    NSStackView *_associationIDStack;
    NSProgressIndicator *_associationIDProgress;
    NSStackView *_configurationStack;
    NSProgressIndicator *_configurationProgress;
}

@property(nonatomic) __weak NSProgressIndicator *configurationProgress; // @synthesize configurationProgress=_configurationProgress;
@property(nonatomic) __weak NSStackView *configurationStack; // @synthesize configurationStack=_configurationStack;
@property(nonatomic) __weak NSProgressIndicator *associationIDProgress; // @synthesize associationIDProgress=_associationIDProgress;
@property(nonatomic) __weak NSStackView *associationIDStack; // @synthesize associationIDStack=_associationIDStack;
@property(nonatomic) __weak NSProgressIndicator *groupNameProgress; // @synthesize groupNameProgress=_groupNameProgress;
@property(nonatomic) __weak NSStackView *groupNameStack; // @synthesize groupNameStack=_groupNameStack;
@property(nonatomic) __weak NSProgressIndicator *entityNameProgress; // @synthesize entityNameProgress=_entityNameProgress;
@property(nonatomic) __weak NSStackView *entityNameStack; // @synthesize entityNameStack=_entityNameStack;
- (void).cxx_destruct;
- (void)changeIdentify:(id)arg1;
- (void)changeConfiguration:(id)arg1;
- (void)changeAssociationIDName:(id)arg1;
- (void)changeGroupName:(id)arg1;
- (void)changeEntityName:(id)arg1;
- (void)viewDidLoad;

@end
