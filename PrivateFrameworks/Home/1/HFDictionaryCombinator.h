//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface HFDictionaryCombinator : NSObject
{
    NSSet *_keysToReconcile;
    NSSet *_keysToSkip;
}

+ (BOOL)_isKindOfContainerClass:(id)arg1;
@property(copy, nonatomic) NSSet *keysToSkip; // @synthesize keysToSkip=_keysToSkip;
@property(copy, nonatomic) NSSet *keysToReconcile; // @synthesize keysToReconcile=_keysToReconcile;
- (void).cxx_destruct;
- (void)_reconcileKey:(id)arg1 fromDictionary:(id)arg2 andDictionary:(id)arg3 intoResultDictionary:(id)arg4 withReconcilationHandler:(CDUnknownBlockType)arg5;
- (id)_mergeVal1:(id)arg1 withVal2:(id)arg2;
- (id)combineResultDictionary:(id)arg1 withResultDictionary:(id)arg2 reconcilationHandler:(CDUnknownBlockType)arg3;

@end
