//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPBaseLayer.h"

@class CALayer;

@interface CenteredImageLayer : IPBaseLayer
{
    CALayer *_imageLayer;
    struct CGSize _imageSize;
}

- (void)recenterContent;
- (struct CGRect)imageBounds;
- (void)setContents:(id)arg1;
- (void)dealloc;
- (id)init;

@end
