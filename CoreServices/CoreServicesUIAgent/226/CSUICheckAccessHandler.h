//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CSUIMessageHandler.h"

@interface CSUICheckAccessHandler : CSUIMessageHandler
{
}

+ (BOOL)canBeUsedBySandboxedApplications;
+ (unsigned char)accessForPath:(const basic_string_a1f69cfb *)arg1;
- (void)handleMessageWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
