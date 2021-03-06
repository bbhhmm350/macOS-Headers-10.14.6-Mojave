//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaPlayer/MPFuture.h>

@class NSMapTable;

@interface MPInvalidationFuture : MPFuture
{
    NSMapTable *_invalidationBlocks;
    BOOL _invalid;
}

@property(readonly, nonatomic, getter=isInvalid) BOOL invalid; // @synthesize invalid=_invalid;
- (void).cxx_destruct;
- (void)invalidate;
- (id)onInvalid:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)onInvalid:(CDUnknownBlockType)arg1;

@end

