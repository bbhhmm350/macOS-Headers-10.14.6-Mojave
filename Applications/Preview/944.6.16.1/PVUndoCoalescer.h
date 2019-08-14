//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PVUndoManager;

@interface PVUndoCoalescer : NSObject
{
    NSMutableArray *_timeline;
    NSString *_lastActionName;
    PVUndoManager *_metaUndoManager;
}

+ (void)globallyRemoveAllActionsWithTargetUndoManager:(id)arg1;
@property(retain, nonatomic) NSString *lastActionName; // @synthesize lastActionName=_lastActionName;
@property(retain) PVUndoManager *metaUndoManager; // @synthesize metaUndoManager=_metaUndoManager;
- (void).cxx_destruct;
- (void)_removeObserversForAllUndoManagers;
- (void)_removeObserversForUndoManager:(id)arg1;
- (void)_addObserversForUndoManager:(id)arg1;
- (void)_removeAllActionsWithUndoManager:(id)arg1;
- (void)undoManagerDidRemoveActionsForTarget:(id)arg1;
- (void)undoManagerDidRemoveAllActions:(id)arg1;
- (void)removeMostRecentEditForUndoManagerFromTimeline:(id)arg1;
- (void)undoOrRedo:(id)arg1;
- (void)appendUndoManagerToTimeline:(id)arg1 shouldRedo:(BOOL)arg2 targets:(id)arg3;
@property(readonly) unsigned long long timelineLength;
- (void)dealloc;
- (id)init;

@end
