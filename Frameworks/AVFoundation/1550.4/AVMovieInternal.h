//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetInspectorLoader, NSArray, NSData, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface AVMovieInternal : NSObject
{
    AVAssetInspectorLoader *loader;
    NSURL *URL;
    NSData *data;
    NSDictionary *initializationOptions;
    NSArray *tracks;
    long long makeTracksArrayOnce;
}

- (void).cxx_destruct;

@end
