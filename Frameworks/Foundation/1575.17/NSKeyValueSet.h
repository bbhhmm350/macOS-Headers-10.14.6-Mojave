//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSSet.h>

#import <Foundation/NSKeyValueProxyCaching-Protocol.h>

@class NSKeyValueNonmutatingSetMethodSet, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching>
{
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingSetMethodSet *_methods;
}

+ (id)_proxyShare;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)_proxyNonGCFinalize;
- (CDStruct_a70f6672)_proxyLocator;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end
