//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PLCoreOperator : NSObject
{
    NSMutableDictionary *_operators;
}

+ (id)registeredOperators;
+ (id)registeredOperatorsOfSuperClassType:(Class)arg1;
+ (void)registerOperator:(Class)arg1;
@property(retain) NSMutableDictionary *operators; // @synthesize operators=_operators;
- (void).cxx_destruct;
- (id)tablesToTrimConditionsForTrimDate:(id)arg1;
- (void)log;
- (void)startOperatorsOfSuperClassType:(Class)arg1;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependanciesWithBlock:(CDUnknownBlockType)arg1;
- (void)initOperatorDependancies;
- (void)dealloc;
- (id)init;

@end

