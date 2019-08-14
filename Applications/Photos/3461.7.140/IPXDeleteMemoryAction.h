//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoableModelAction.h>

@class RDUndoRedoChange;

@interface IPXDeleteMemoryAction : RDUndoableModelAction
{
    unsigned long long _targetState;
    unsigned long long _currentState;
    RDUndoRedoChange *_memoryTrashChange;
}

@property(copy, nonatomic) RDUndoRedoChange *memoryTrashChange; // @synthesize memoryTrashChange=_memoryTrashChange;
@property unsigned long long currentState; // @synthesize currentState=_currentState;
@property(readonly) unsigned long long targetState; // @synthesize targetState=_targetState;
- (void).cxx_destruct;
- (int)performActionWithModelObject:(id)arg1;
- (id)defaultActionName;
- (id)initWithMemory:(id)arg1 targetRejectedState:(unsigned long long)arg2;
- (id)initWithMemories:(id)arg1 targetRejectedState:(unsigned long long)arg2;

@end
