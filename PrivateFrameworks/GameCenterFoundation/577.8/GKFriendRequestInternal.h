//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSDate, NSString;

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal
{
    NSString *_message;
    NSDate *_date;
}

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (int)defaultFamiliarity;
- (void)dealloc;

@end
