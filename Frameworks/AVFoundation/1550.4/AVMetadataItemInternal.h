//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSLocale, NSString;
@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface AVMetadataItemInternal : NSObject
{
    struct OpaqueFigMetadataReader *reader;
    long long itemIndex;
    NSString *identifier;
    NSString *keySpace;
    id <NSObject><NSCopying> key;
    NSString *commonKey;
    NSLocale *locale;
    NSString *extendedLanguageTag;
    NSString *languageCode;
    id <NSObject><NSCopying> value;
    CDStruct_1b6d18a9 time;
    CDStruct_1b6d18a9 duration;
    NSDate *startDate;
    NSDate *discoveryTimestamp;
    NSString *dataType;
    NSDictionary *extras;
}

@end
