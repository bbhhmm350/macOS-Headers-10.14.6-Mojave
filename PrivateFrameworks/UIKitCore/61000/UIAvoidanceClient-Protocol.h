//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIAvoidanceObject-Protocol.h>

@class NSSet, NSString, NSValue;
@protocol UIAvoidanceClientApplicator, UIAvoidanceClientDelegate;

@protocol UIAvoidanceClient <UIAvoidanceObject>
@property(retain, nonatomic) NSValue *avoidancePosition;
@property(retain, nonatomic) id <UIAvoidanceClientApplicator> avoidanceApplicator;
@property(retain, nonatomic) id <UIAvoidanceClientDelegate> avoidanceController;
@property(readonly, nonatomic) NSSet *blockades;
- (void)removeBlockadeWithIdentifier:(NSString *)arg1;
- (void)addBlockadeWithIdentifier:(NSString *)arg1;
@end
