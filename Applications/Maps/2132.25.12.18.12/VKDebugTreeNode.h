//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKDebugTreeNode : NSObject
{
    VKDebugTreeNode *_parent;
    NSMutableArray *_children;
}

@property(retain) NSMutableArray *children; // @synthesize children=_children;
@property VKDebugTreeNode *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)expandNodes:(id)arg1 withArray:(id)arg2;
- (void)searchNodes:(id)arg1 withParameter:(id)arg2;
- (id)tagsColumn;
- (id)valueColumn;
- (id)propertyColumn;
- (BOOL)isExpandable;
- (id)initWithParent:(id)arg1;
- (id)init;

@end
