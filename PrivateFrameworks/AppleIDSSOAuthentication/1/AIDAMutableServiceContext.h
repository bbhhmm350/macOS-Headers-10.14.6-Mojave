//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppleIDSSOAuthentication/AIDAServiceContext.h>

@class NSDictionary, NSWindow;

@interface AIDAMutableServiceContext : AIDAServiceContext
{
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSWindow *hostWindow; // @dynamic hostWindow;
@property(nonatomic) BOOL shouldForceOperation; // @dynamic shouldForceOperation;
@property(copy, nonatomic) NSDictionary *authenticationResults; // @dynamic authenticationResults;

@end
