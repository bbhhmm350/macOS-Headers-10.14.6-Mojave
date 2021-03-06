//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameController/GCMicroGamepad.h>

#import <GameController/GCNamedProfile-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, NSString, _GCControllerButtonInput, _GCControllerDirectionPad;

@interface _GCMicroGamepad : GCMicroGamepad <GCNamedProfile, NSSecureCoding>
{
    GCController *_controller;
    CDUnknownBlockType _valueChangedHandler;
    _GCControllerDirectionPad *_dpad;
    _GCControllerButtonInput *_button0;
    _GCControllerButtonInput *_button1;
    BOOL _dpadFlippedY;
}

+ (BOOL)supportsSecureCoding;
- (id)buttonX;
- (id)buttonA;
- (id)dpad;
- (void)setValueChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)valueChangedHandler;
- (id)controller;
- (void).cxx_destruct;
- (BOOL)supportsDpadTaps;
- (void)setController:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
@property(readonly) NSString *name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(BOOL)arg2;
- (id)initWithController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

