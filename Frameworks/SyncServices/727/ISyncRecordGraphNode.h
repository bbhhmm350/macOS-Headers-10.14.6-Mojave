//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ISyncRecordGraphNode : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)orderedSubentityIdsFromIds:(id)arg1 usingEntityNames:(id)arg2 isAdd:(BOOL)arg3;
- (id)orderedSubentityIdsFromIds:(id)arg1 usingEntityNames:(id)arg2 defaultOrder:(id)arg3;
- (id)orderedSubentityIdsFromIds:(id)arg1 usingEntityNames:(id)arg2;
- (void)setChangedKeys:(id)arg1;
- (void)setDisplayKeys:(id)arg1;
- (void)setChangeType:(int)arg1;
- (id)initWithRecordView:(id)arg1 recordIdentifier:(id)arg2;
- (id)parentNode;
- (id)topLevelParentNode;
- (id)childNodesByRecordIdentifier;
- (id)deletedChildNodesByRelationship;
- (id)modifiedChildNodesByRelationship;
- (id)addedChildNodesByRelationship;
- (int)changeType;
- (id)changedKeys;
- (id)displayKeys;
- (id)dependenciesForPropertyName:(id)arg1;
- (id)identityKeys;
- (id)relationshipNames;
- (id)entityName;
- (id)recordIdentifier;
- (id)record;
- (id)recordView;

@end
