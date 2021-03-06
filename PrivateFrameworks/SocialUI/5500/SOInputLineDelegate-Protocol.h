//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SocialUI/NSTextViewDelegate-Protocol.h>

@class NSArray, NSDictionary, SOInputLine;

@protocol SOInputLineDelegate <NSTextViewDelegate>
- (NSDictionary *)defaultTypingAttributesForInputLine:(SOInputLine *)arg1;
- (BOOL)inputLineUsingiMessageService:(SOInputLine *)arg1;
- (BOOL)inputLine:(SOInputLine *)arg1 canAttachFilesAtURLs:(NSArray *)arg2;

@optional
- (BOOL)inputLineShouldInsertNewLine:(SOInputLine *)arg1;
- (void)inputLineRequestedNextOutgoingMessage:(SOInputLine *)arg1;
- (void)inputLineRequestedPriorOutgoingMessage:(SOInputLine *)arg1;
- (BOOL)inputLine:(SOInputLine *)arg1 didChangeSignificantly:(int)arg2;
@end

