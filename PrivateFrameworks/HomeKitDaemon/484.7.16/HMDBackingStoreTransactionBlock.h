//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDBackingStore, HMDBackingStoreTransactionOptions, NSMutableArray, NSString;

@interface HMDBackingStoreTransactionBlock : HMFObject <HMFLogging>
{
    BOOL _committed;
    HMDBackingStoreTransactionOptions *_options;
    HMDBackingStore *_backingStore;
    NSMutableArray *_objects;
}

+ (id)logCategory;
+ (void)sort:(id)arg1;
@property(nonatomic) BOOL committed; // @synthesize committed=_committed;
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(nonatomic) __weak HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) HMDBackingStoreTransactionOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)dumpDebug;
- (void)dumpDebug:(id)arg1;
- (id)debugString:(BOOL)arg1;
@property(readonly, copy) NSString *description;
- (void)save;
- (void)save:(CDUnknownBlockType)arg1;
- (void)runWithoutSave:(CDUnknownBlockType)arg1;
- (void)run;
- (void)run:(CDUnknownBlockType)arg1;
- (void)addObjects:(id)arg1;
- (void)add:(id)arg1 withMessage:(id)arg2;
- (void)add:(id)arg1;
- (id)initWithBackingStore:(id)arg1 options:(id)arg2 label:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
