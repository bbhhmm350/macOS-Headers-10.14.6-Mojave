//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPCoreSpotlightExtensionsTask : NSObject
{
    CDUnknownBlockType _filterBlock;
    CDUnknownBlockType _performBlock;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType performBlock; // @synthesize performBlock=_performBlock;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
- (void).cxx_destruct;
- (void)start;
- (void)_performWithExtensionsEnumerator:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

