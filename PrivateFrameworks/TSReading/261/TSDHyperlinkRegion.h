//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, TSDBezierPath;

@interface TSDHyperlinkRegion : NSObject
{
    NSURL *mURL;
    TSDBezierPath *mBezierPath;
}

+ (id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2;
@property(retain, nonatomic) TSDBezierPath *bezierPath; // @synthesize bezierPath=mBezierPath;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=mURL;
- (id)initWithURL:(id)arg1 bezierPath:(id)arg2;
- (void)dealloc;

@end
