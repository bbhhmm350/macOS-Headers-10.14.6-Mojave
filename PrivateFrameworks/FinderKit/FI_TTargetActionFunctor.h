//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FI_TTargetActionFunctor : NSObject
{
    unique_function_63952f55 _functor;
}

+ (id)targetActionGlue:(unique_function_63952f55 *)arg1;
+ (id)targetActionGlue:(id)arg1 withFunctor:(unique_function_63952f55 *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)action:(id)arg1;
- (id)initWithFunctor:(unique_function_63952f55 *)arg1;
- (void)bindTarget:(id)arg1;

@end

