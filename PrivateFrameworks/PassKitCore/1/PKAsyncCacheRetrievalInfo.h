//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PKAsyncCacheRetrievalInfo : NSObject
{
    struct os_unfair_lock_s _lock;
    _Bool _itemFetched;
    id _item;
    NSMutableArray *_deliveryBlocks;
}

- (void).cxx_destruct;
- (void)deliverItem:(id)arg1;
- (id)synchronouslyRetrieve:(CDUnknownBlockType)arg1 outDeliveryBlocks:(id *)arg2;
- (void)addDeliveryBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
