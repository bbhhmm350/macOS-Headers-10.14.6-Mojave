//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/_AMKeynote5Item.h>

@class NSString, _AMKeynote5MasterSlide, _AMKeynote5SlideTransition;

@interface _AMKeynote5Slide : _AMKeynote5Item
{
}

- (void)show;
- (void)jumpTo;
@property(readonly, copy) _AMKeynote5SlideTransition *transition;
@property(copy) NSString *title;
@property(readonly) long long slideNumber;
@property BOOL skipped;
@property(copy) NSString *notes;
@property(copy) _AMKeynote5MasterSlide *master;
- (long long)id;
@property(copy) NSString *body;

@end
