//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class NSString;

@protocol MFActivityProgressUpdater <NSObject>
- (void)resetProgressItemsWithTotal:(unsigned long long)arg1 andStatusMessage:(NSString *)arg2;
- (void)incrementProgressIndicator;
- (void)setProgressItemTotal:(unsigned long long)arg1;
@end
