//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNImageSpecifier.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _VNURLImageSpecifier : VNImageSpecifier
{
    NSURL *_url;
}

- (void).cxx_destruct;
- (id)newImageBufferWithOptions:(id)arg1 error:(id *)arg2;
- (id)url;
- (id)initWithURL:(id)arg1;

@end
