//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <JavaScriptAppleEvents/JSOCFunctionPointer.h>

@class NSInvocation, NSMutableDictionary;

@interface JSOCClosure : JSOCFunctionPointer
{
    NSMutableDictionary *_userInfo;
    NSInvocation *_invocation;
}

+ (void *)staticPointerValueWithType:(id)arg1 invocationBlock:(CDUnknownBlockType)arg2;
@property(retain) NSInvocation *invocation; // @synthesize invocation=_invocation;
@property(readonly, retain) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithType:(id)arg1 invocationBlock:(CDUnknownBlockType)arg2;
- (id)initWithThunk:(CDUnknownFunctionPointerType)arg1 type:(id)arg2;

@end
