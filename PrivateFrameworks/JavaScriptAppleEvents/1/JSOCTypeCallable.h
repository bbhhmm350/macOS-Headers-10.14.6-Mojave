//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <JavaScriptAppleEvents/JSOCTypePointer.h>

@class JSOCType, NSArray;

@interface JSOCTypeCallable : JSOCTypePointer
{
    JSOCType *_returnValueType;
    NSArray *_argumentTypes;
    BOOL _variadic;
    BOOL _nullTerminated;
}

@property(readonly) NSArray *argumentTypes; // @synthesize argumentTypes=_argumentTypes;
- (void).cxx_destruct;
- (BOOL)nullTerminated;
- (BOOL)variadic;
- (long long)numberOfArguments;
- (id)argumentTypeAtIndex:(long long)arg1;
@property(readonly) JSOCType *returnValueType;
- (const char *)objCTypes;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithReturnValueType:(id)arg1 argumentTypes:(id)arg2 variadic:(BOOL)arg3 nullTerminated:(BOOL)arg4;

@end

