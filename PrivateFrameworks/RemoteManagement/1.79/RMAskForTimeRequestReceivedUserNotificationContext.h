//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RemoteManagement/RMUserNotificationContext.h>

@class FAFamilyMember, NSNumber;

@interface RMAskForTimeRequestReceivedUserNotificationContext : RMUserNotificationContext
{
    FAFamilyMember *_familyMember;
    NSNumber *_childDSID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *childDSID; // @synthesize childDSID=_childDSID;
@property(retain, nonatomic) FAFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (void).cxx_destruct;
- (void)_fetchAndWriteFamilyPhotoURLIfNeeded:(CDUnknownBlockType)arg1;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 familyMember:(id)arg2 requestedResourceName:(id)arg3;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 childName:(id)arg2 childDSID:(id)arg3 requestedResourceName:(id)arg4;

@end
