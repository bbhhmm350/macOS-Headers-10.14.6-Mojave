//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXResourceResponse.h>

@class UIImage;

@interface SXImageResourceResponse : SXResourceResponse
{
    unsigned long long _imageQuality;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long imageQuality; // @synthesize imageQuality=_imageQuality;
- (void).cxx_destruct;

@end
