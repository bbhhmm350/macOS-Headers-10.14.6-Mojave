//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/HMAssistantAccessControl.h>

@class NSArray;

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAccessory:(id)arg1;
- (void)addAccessory:(id)arg1;
@property(copy) NSArray *accessories;
@property BOOL allowUnauthenticatedRequests;
- (void)setOptions:(unsigned long long)arg1;
- (unsigned long long)options;
@property(getter=isEnabled) BOOL enabled;

@end
