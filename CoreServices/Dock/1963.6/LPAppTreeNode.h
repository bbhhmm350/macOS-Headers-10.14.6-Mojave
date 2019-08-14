//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface LPAppTreeNode : NSObject
{
    NSString *_name;
    NSString *_localizedName;
    NSMutableArray *_children;
    LPAppTreeNode *_parent;
}

@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic) __weak LPAppTreeNode *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)_apps:(CDUnknownBlockType)arg1;
- (void)_deleteNodeAndPruneEmptyNodes:(BOOL)arg1 atPathComponents:(id)arg2;
- (void)_insertNode:(id)arg1 atPathComponents:(id)arg2;
- (id)_nodeAtPathComponents:(id)arg1 createIfNecessary:(BOOL)arg2;
- (void)_appendTreeDescriptionToString:(id)arg1 atLevel:(long long)arg2;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
@property(readonly) BOOL isLeaf;
@property(readonly) unsigned long long depth;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *path;
- (id)description;
- (id)initWithName:(id)arg1;

@end
