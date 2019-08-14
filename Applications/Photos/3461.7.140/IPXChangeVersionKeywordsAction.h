//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModelAction.h>

@class LiRidList, NSMutableDictionary, RDTable;

@interface IPXChangeVersionKeywordsAction : RDModelAction
{
    LiRidList *_keywordIds;
    RDTable *_keywordTable;
    LiRidList *_versionIds;
    RDTable *_versionTable;
    NSMutableDictionary *_undoInfo;
    CDUnknownBlockType _completionCallback;
}

+ (id)keywordsActionWithVersions:(id)arg1 addKeywords:(id)arg2 removeKeywords:(id)arg3;
- (void).cxx_destruct;
- (BOOL)canUndo;
- (void)performUndo:(CDUnknownBlockType)arg1;
- (void)performAction:(CDUnknownBlockType)arg1;
- (BOOL)performActionWithKeyword:(id)arg1 andVersion:(id)arg2 keywordPresent:(BOOL)arg3;
- (void)enumerationComplete;
- (void)enumerateKeywordsAndVersionsWithBlock:(CDUnknownBlockType)arg1;
- (id)modelProperties;
- (id)keywordsToEnumerate;
- (unsigned long long)workUnits;
- (BOOL)interruptSupported;
- (id)initWithKeywords:(id)arg1 versions:(id)arg2;

@end
