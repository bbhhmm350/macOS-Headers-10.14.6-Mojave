//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFResourceAccessClient-Protocol.h>

@class NSString;

@interface PFResourceAccessToken : NSObject <PFResourceAccessClient>
{
    struct NSObject *_resource;
    int _stackDepth;
    void *_stack[10];
    char **_symbols;
    BOOL _invalidated;
    NSString *_reason;
}

@property BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(readonly) NSObject *resource; // @synthesize resource=_resource;
@property(readonly) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)backtraceForLog;
- (void)resourceWillShutdown:(struct NSObject *)arg1;
- (void)dealloc;
- (id)initWithResource:(struct NSObject *)arg1 reason:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
