//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDStats : NSObject
{
}

+ (id)familyNames;
+ (id)hardwareModel;
+ (id)sharedInstance;
- (void)addToDictionary:(id)arg1 perfMetric:(id)arg2;
- (void)addToDictionary:(id)arg1 perfMetricFamily:(id)arg2;
- (id)dictionary;
- (void)addToStatsPrinter:(id)arg1 perfMetricFamily:(id)arg2;
- (id)string;
- (void)dealloc;
- (id)init;

@end

