//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class THAButton;

@interface THAButtonEvent : NSObject
{
    THAButton *_button;
    unsigned long long _state;
    double _timestamp;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) THAButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (id)serialize;

@end
