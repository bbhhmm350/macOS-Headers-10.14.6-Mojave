//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber;

@interface FARemoveFamilyMemberRequest : FAFamilyCircleRequest
{
    NSNumber *_memberDSID;
}

@property(readonly, copy) NSNumber *memberDSID; // @synthesize memberDSID=_memberDSID;
- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFamilyMemberDSID:(id)arg1;

@end
