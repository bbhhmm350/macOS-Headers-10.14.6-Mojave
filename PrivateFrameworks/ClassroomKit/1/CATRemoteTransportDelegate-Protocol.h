//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CATRemoteConnectionTrustDecision, CATRemoteTransport;

@protocol CATRemoteTransportDelegate <NSObject>

@optional
- (void)transportDidSecure:(CATRemoteTransport *)arg1;
- (void)transport:(CATRemoteTransport *)arg1 encounteredTrustDecisionWhileTryingToSecure:(CATRemoteConnectionTrustDecision *)arg2;
- (void)transportWillSecure:(CATRemoteTransport *)arg1;
@end
