//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class IPMarimbaExporter, IPMarimbaSlideshow;

@interface IPMarimbaKeepsakeExporter : NSObject
{
    IPMarimbaExporter *mSlideshowExporter;
    IPMarimbaSlideshow *mSlideshow;
    id _delegate;
}

- (void)exporterDidFinish;
- (void)start;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithKeepsakeAlbum:(id)arg1;

@end
