//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgressIndicator, NSTextField, NSWindow;
@protocol RetrievingDialogDelegate;

@interface RetrievingDialog : NSObject
{
    id <RetrievingDialogDelegate> _delegate;
    struct _NSModalSession *_retrievingModalSession;
    NSWindow *_retrievingWindow;
    NSProgressIndicator *_retrievingDialogProgressIndicator;
    NSTextField *_retrievingTextField;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak NSTextField *retrievingTextField; // @synthesize retrievingTextField=_retrievingTextField;
@property(nonatomic) __weak NSProgressIndicator *retrievingDialogProgressIndicator; // @synthesize retrievingDialogProgressIndicator=_retrievingDialogProgressIndicator;
@property(retain, nonatomic) NSWindow *retrievingWindow; // @synthesize retrievingWindow=_retrievingWindow;
@property(nonatomic) struct _NSModalSession *retrievingModalSession; // @synthesize retrievingModalSession=_retrievingModalSession;
@property(nonatomic) __weak id <RetrievingDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)schedule;
- (void)_schedule;
- (void)_displayIfRequired;
- (void)dismissDialog:(id)arg1;
- (void)_display;
- (void)_timeoutMinPeriod;
- (void)abort;
- (void)_dismiss;
- (const char *)stateName;
- (id)init;

@end
