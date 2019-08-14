//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoableModelAction.h>

@class RDDatabase;

@interface IPXChangeVersionFavoritedAction : RDUndoableModelAction
{
    unsigned long long _targetState;
    RDDatabase *_targetDatabase;
    unsigned long long _currentState;
}

+ (BOOL)canChangeFavoritedForVersions:(id)arg1;
+ (id)actionWithVersions:(id)arg1 targetDatabase:(id)arg2 targetState:(unsigned long long)arg3;
+ (id)commandLineUsageMessage;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) RDDatabase *targetDatabase; // @synthesize targetDatabase=_targetDatabase;
@property(readonly) unsigned long long targetState; // @synthesize targetState=_targetState;
- (void).cxx_destruct;
- (int)performActionWithVersions:(id)arg1;
- (int)performActionWithModelObject:(id)arg1;
- (id)defaultActionName;
- (id)initWithVersion:(id)arg1 targetFavoritedState:(unsigned long long)arg2;
- (id)initWithVersions:(id)arg1 targetFavoritedState:(unsigned long long)arg2;
- (id)initWithDatabase:(id)arg1 commandLineArgs:(id)arg2;

@end
