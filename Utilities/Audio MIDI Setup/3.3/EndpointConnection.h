//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MIDIEndpointWidget, NSBezierPath;

@interface EndpointConnection : NSObject
{
    MIDIEndpointWidget *mSource;
    MIDIEndpointWidget *mDestination;
    NSBezierPath *mConnection;
}

+ (void)initialize;
+ (id)connectionFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (BOOL)intersectsRect:(struct CGRect)arg1;
- (BOOL)pointInConnection:(struct CGPoint)arg1;
- (id)getDestinationDevice;
- (id)getSourceDevice;
- (id)getDestination;
- (id)getSource;
- (BOOL)equalsConnection:(id)arg1;
- (void)sever;
- (void)drawSelected:(BOOL)arg1;
- (void)dealloc;
- (id)initWithSource:(id)arg1 destination:(id)arg2;
- (void)privUpdateConnection;

@end

