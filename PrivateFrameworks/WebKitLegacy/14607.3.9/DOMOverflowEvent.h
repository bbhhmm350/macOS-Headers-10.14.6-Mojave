//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKitLegacy/DOMEvent.h>

@interface DOMOverflowEvent : DOMEvent
{
}

- (void)initOverflowEvent:(unsigned short)arg1 horizontalOverflow:(BOOL)arg2 verticalOverflow:(BOOL)arg3;
@property(readonly) BOOL verticalOverflow;
@property(readonly) BOOL horizontalOverflow;
@property(readonly) unsigned short orient;

@end
