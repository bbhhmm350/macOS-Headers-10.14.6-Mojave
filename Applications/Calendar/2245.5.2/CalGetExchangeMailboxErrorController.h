//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalManagedExchangePrincipal, NSString, NSTextField, NSWindow;

@interface CalGetExchangeMailboxErrorController : NSObject
{
    NSString *_errorDescription;
    NSString *_errorReason;
    CalManagedExchangePrincipal *_mprincipal;
    NSWindow *_window;
    NSTextField *_emailTextField;
    NSWindow *_hostWindow;
}

@property __weak NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(retain, nonatomic) NSString *errorReason; // @synthesize errorReason=_errorReason;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)arg1;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (id)initWithExchangePrincipal:(id)arg1;

@end
