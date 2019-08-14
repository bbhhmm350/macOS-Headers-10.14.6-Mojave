//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SUCatalogInstance : NSObject
{
    BOOL _predicateScanOnly;
    NSString *_catalogURL;
    NSString *_catalogName;
    long long _scanInterval;
    long long _stagingDelay;
}

@property(readonly) BOOL predicateScanOnly; // @synthesize predicateScanOnly=_predicateScanOnly;
@property(readonly) long long stagingDelay; // @synthesize stagingDelay=_stagingDelay;
@property(readonly) long long scanInterval; // @synthesize scanInterval=_scanInterval;
@property(readonly) NSString *catalogName; // @synthesize catalogName=_catalogName;
@property(readonly) NSString *catalogURL; // @synthesize catalogURL=_catalogURL;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end
