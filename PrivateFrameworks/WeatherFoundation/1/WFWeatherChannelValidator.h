//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFWeatherChannelValidator : NSObject
{
}

+ (BOOL)isLeafNodeType:(id)arg1;
+ (id)expectedStructure;
- (BOOL)validateDictionary:(id)arg1 expectedStructure:(id)arg2;
- (BOOL)validateResponseData:(id)arg1;

@end
