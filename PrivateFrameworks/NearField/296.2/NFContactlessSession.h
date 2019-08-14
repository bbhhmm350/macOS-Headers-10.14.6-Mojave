//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NearField/NFSession.h>

#import <NearField/NFContactlessSessionCallbacks-Protocol.h>

@class NFApplet, NFWeakReference, NSDictionary, NSString;
@protocol NFContactlessSessionDelegate;

@interface NFContactlessSession : NFSession <NFContactlessSessionCallbacks>
{
    NSDictionary *_appletsById;
    NFWeakReference *_delegate;
    BOOL _fieldNotificationSent;
    NFApplet *_activeApplet;
}

@property(readonly) NFApplet *activeApplet; // @synthesize activeApplet=_activeApplet;
- (BOOL)stopCardEmulation:(id *)arg1;
- (BOOL)stopCardEmulation;
- (BOOL)startHostCardEmulation:(id *)arg1;
- (BOOL)startHostCardEmulation;
- (BOOL)startCardEmulation:(id *)arg1;
- (BOOL)startCardEmulation;
- (BOOL)setActiveApplet:(id)arg1 error:(id *)arg2;
- (BOOL)setActiveApplet:(id)arg1;
- (id)appletWithIdentifier:(id)arg1;
- (id)allApplets;
- (void)didFelicaStateChange:(id)arg1;
- (void)didSelectApplet:(id)arg1;
- (void)didDetectFieldNotification:(id)arg1;
- (void)didDetectField:(BOOL)arg1;
- (void)didEndUnexpectedly;
- (void)endSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)endSession;
- (void)didStartSession:(id)arg1;
@property id <NFContactlessSessionDelegate> delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
