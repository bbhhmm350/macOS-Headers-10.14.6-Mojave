//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXMIDIParser : NSObject
{
}

- (unsigned short)_channelForStatusByte:(unsigned char)arg1;
- (unsigned long long)_expectedPacketLengthForEventType:(long long)arg1;
- (long long)_eventTypeForStatusByte:(unsigned char)arg1;
- (id)parse:(const struct MIDIPacketList *)arg1 error:(id *)arg2;

@end
