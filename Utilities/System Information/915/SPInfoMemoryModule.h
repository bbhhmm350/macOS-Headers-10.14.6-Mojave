//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface SPInfoMemoryModule : NSObject
{
    NSBundle *_bundle;
    NSString *_displayName;
    NSString *_slotName;
    NSString *_dimmType;
    NSString *_dimmSize;
    NSString *_dimmStatus;
    BOOL _populated;
}

@property(readonly) NSString *dimmStatus; // @synthesize dimmStatus=_dimmStatus;
@property(readonly) BOOL isPopulated; // @synthesize isPopulated=_populated;
@property(readonly) NSString *dimmType; // @synthesize dimmType=_dimmType;
@property(readonly) NSString *dimmSize; // @synthesize dimmSize=_dimmSize;
@property(readonly) NSString *slotName; // @synthesize slotName=_slotName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)dealloc;
- (id)initWithModuleInfo:(id)arg1 usesECC:(BOOL)arg2 fromDocument:(id)arg3;
- (id)localizedString:(id)arg1;

@end
