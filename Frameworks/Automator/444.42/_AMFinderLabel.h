//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

@class NSColor, NSString;

@interface _AMFinderLabel : SBObject
{
}

- (void)updateNecessity:(BOOL)arg1 registeringApplications:(BOOL)arg2;
- (void)reveal;
- (void)erase;
- (void)emptySecurity:(BOOL)arg1;
- (void)eject;
- (void)select;
- (id)moveTo:(id)arg1 replacing:(BOOL)arg2 positionedAt:(id)arg3 routingSuppressed:(BOOL)arg4;
- (BOOL)exists;
- (id)duplicateTo:(id)arg1 replacing:(BOOL)arg2 routingSuppressed:(BOOL)arg3;
- (id)delete;
- (long long)dataSizeAs:(id)arg1;
- (void)close;
- (void)activate;
- (void)printWithProperties:(id)arg1;
- (void)openUsing:(id)arg1 withProperties:(id)arg2;
@property(copy) NSColor *color;
@property long long index;
@property(copy) NSString *name;

@end
