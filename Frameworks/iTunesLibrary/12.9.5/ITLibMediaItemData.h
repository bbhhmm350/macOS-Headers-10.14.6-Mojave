//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface ITLibMediaItemData : NSObject
{
    NSURL *_URL;
    unsigned long long _playlistCount;
    BOOL _downloadable;
}

@property(nonatomic) BOOL downloadable; // @synthesize downloadable=_downloadable;
@property(nonatomic) unsigned long long playlistCount; // @synthesize playlistCount=_playlistCount;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)dealloc;
- (id)init;

@end
