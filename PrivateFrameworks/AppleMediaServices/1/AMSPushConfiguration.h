//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface AMSPushConfiguration : NSObject
{
    NSString *_userNotificationExtensionId;
    NSSet *_enabledActionTypes;
}

@property(retain) NSSet *enabledActionTypes; // @synthesize enabledActionTypes=_enabledActionTypes;
@property(retain) NSString *userNotificationExtensionId; // @synthesize userNotificationExtensionId=_userNotificationExtensionId;
- (void).cxx_destruct;
- (id)initWithEnabledActionTypes:(id)arg1;

@end

