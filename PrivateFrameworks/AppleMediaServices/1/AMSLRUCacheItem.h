//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppleMediaServices/AMSDoubleLinkedListNode.h>

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface AMSLRUCacheItem : AMSDoubleLinkedListNode
{
    id <NSCopying> _key;
}

@property __weak id <NSCopying> key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 object:(id)arg2;

@end
