//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalOperation.h>

@class EWSExchangeServiceBinding;

@interface CalExchangeOperation : CalOperation
{
    EWSExchangeServiceBinding *_binding;
}

@property EWSExchangeServiceBinding *binding; // @synthesize binding=_binding;
- (BOOL)executeInContext:(id)arg1 error:(id *)arg2;
- (BOOL)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id *)arg4;

@end
