//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKitLegacy/DOMObject.h>

@class DOMCSSStyleSheet, NSString;

@interface DOMCSSRule : DOMObject
{
}

@property(readonly) DOMCSSRule *parentRule;
@property(readonly) DOMCSSStyleSheet *parentStyleSheet;
@property(copy) NSString *cssText;
@property(readonly) unsigned short type;
- (void)dealloc;

@end

