//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolCSSSourceRange, RWIProtocolCSSStyleId;

@interface RWIProtocolCSSStyle : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *height;
@property(copy, nonatomic) NSString *width;
@property(retain, nonatomic) RWIProtocolCSSSourceRange *range;
@property(copy, nonatomic) NSString *cssText;
@property(copy, nonatomic) NSArray *shorthandEntries;
@property(copy, nonatomic) NSArray *cssProperties;
@property(retain, nonatomic) RWIProtocolCSSStyleId *styleId;
- (id)initWithCssProperties:(id)arg1 shorthandEntries:(id)arg2;

@end
