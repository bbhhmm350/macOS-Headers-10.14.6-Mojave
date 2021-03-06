//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PKPaymentOptionsSynchronizationDelegate;

@interface PKPaymentOptionsSynchronization : NSObject
{
    BOOL _shouldSyncToCloud;
    id <PKPaymentOptionsSynchronizationDelegate> _delegate;
}

@property(nonatomic) __weak id <PKPaymentOptionsSynchronizationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL shouldSyncToCloud; // @synthesize shouldSyncToCloud=_shouldSyncToCloud;
- (void).cxx_destruct;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_updateSynchronizationBehavior;
- (id)init;

@end

