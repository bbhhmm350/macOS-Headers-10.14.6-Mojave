//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ACDEClient/ACCTicketManagerProtocol-Protocol.h>

@class ACMAuthContext, NSData, NSString;

@protocol ACMTicketManagerProtocol <ACCTicketManagerProtocol>

@optional
- (ACMAuthContext *)initialTokenNotTiedToSessionWithRealm:(NSString *)arg1;
- (NSData *)sciFiSignatureForToken:(ACMAuthContext *)arg1;
@end
