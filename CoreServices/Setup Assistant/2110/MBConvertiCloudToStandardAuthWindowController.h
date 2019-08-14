//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSLayoutConstraint, NSString, NSWindow;
@protocol MBUAProtocol;

@interface MBConvertiCloudToStandardAuthWindowController : NSWindowController
{
    BOOL _showCancelButton;
    BOOL _disableControls;
    BOOL _showOldPasswordEntry;
    BOOL _showOldPasswordError;
    BOOL _noniCloudPasswordChange;
    BOOL _success;
    unsigned int _uid;
    NSWindow *_changeToNormalLoginPasswordSheet;
    NSString *_changedPassword;
    NSString *_verifyPassword;
    NSString *_passwordHint;
    NSString *_sheetTitle;
    NSString *_sheetDescription;
    NSString *_buttonTitle;
    NSString *_passwordsDoNotMatchErrorString;
    NSLayoutConstraint *_showOldPasswordEntryConstraint;
    NSLayoutConstraint *_hideOldPasswordEntryConstraint;
    NSString *_iCloudPassword;
    NSString *_oldPassword;
    id <MBUAProtocol> _mbuseragent;
}

+ (id)keyPathsForValuesAffectingProceedButtonEnabled;
+ (void)presentChangeEmptyPasswordWindow:(id)arg1 iCloudPassword:(id)arg2 forUser:(id)arg3 withID:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
+ (void)presentChangeDuplicatedPasswordWindow:(id)arg1 fromiCloudPassword:(id)arg2 forUser:(id)arg3 withID:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
+ (void)presentConvertToStandardAuthForWindow:(id)arg1 fromiCloudPassword:(id)arg2 forUser:(id)arg3 withID:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
+ (void)presentDisableiCloudAndiCloudAsLoginForWindow:(id)arg1 fromiCloudPassword:(id)arg2 forUser:(id)arg3 withID:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
@property(retain) id <MBUAProtocol> mbuseragent; // @synthesize mbuseragent=_mbuseragent;
@property BOOL success; // @synthesize success=_success;
@property BOOL noniCloudPasswordChange; // @synthesize noniCloudPasswordChange=_noniCloudPasswordChange;
@property unsigned int uid; // @synthesize uid=_uid;
@property(retain) NSString *oldPassword; // @synthesize oldPassword=_oldPassword;
@property(retain) NSString *iCloudPassword; // @synthesize iCloudPassword=_iCloudPassword;
@property(retain) NSLayoutConstraint *hideOldPasswordEntryConstraint; // @synthesize hideOldPasswordEntryConstraint=_hideOldPasswordEntryConstraint;
@property(retain) NSLayoutConstraint *showOldPasswordEntryConstraint; // @synthesize showOldPasswordEntryConstraint=_showOldPasswordEntryConstraint;
@property(nonatomic) BOOL showOldPasswordError; // @synthesize showOldPasswordError=_showOldPasswordError;
@property(nonatomic) BOOL showOldPasswordEntry; // @synthesize showOldPasswordEntry=_showOldPasswordEntry;
@property BOOL disableControls; // @synthesize disableControls=_disableControls;
@property(readonly) BOOL showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property(retain) NSString *passwordsDoNotMatchErrorString; // @synthesize passwordsDoNotMatchErrorString=_passwordsDoNotMatchErrorString;
@property(retain) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain) NSString *sheetDescription; // @synthesize sheetDescription=_sheetDescription;
@property(retain) NSString *sheetTitle; // @synthesize sheetTitle=_sheetTitle;
@property(retain) NSString *passwordHint; // @synthesize passwordHint=_passwordHint;
@property(retain) NSString *verifyPassword; // @synthesize verifyPassword=_verifyPassword;
@property(retain) NSString *changedPassword; // @synthesize changedPassword=_changedPassword;
@property __weak NSWindow *changeToNormalLoginPasswordSheet; // @synthesize changeToNormalLoginPasswordSheet=_changeToNormalLoginPasswordSheet;
- (void).cxx_destruct;
- (void)cancelPressed:(id)arg1;
- (void)_changePassword;
- (void)_changeToStandardAuth;
- (void)useSeparatePasswordPressed:(id)arg1;
- (void)windowDidLoad;
- (id)init;
@property(readonly) BOOL proceedButtonEnabled;

@end
