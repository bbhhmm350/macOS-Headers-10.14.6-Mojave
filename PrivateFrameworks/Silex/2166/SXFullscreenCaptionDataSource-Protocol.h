//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSString, SXComponentTextRules, SXComponentTextStyle, SXFullscreenCaption, SXTextResizer;
@protocol SXComponentTextStyle, SXTextStyle;

@protocol SXFullscreenCaptionDataSource <NSObject>
- (NSString *)contentSizeCategoryForCaption:(SXFullscreenCaption *)arg1;
- (SXComponentTextRules *)textRulesForCaption:(SXFullscreenCaption *)arg1;
- (SXTextResizer *)textResizerForCaption:(SXFullscreenCaption *)arg1;
- (id <SXComponentTextStyle>)componentTextStyleForIdentifier:(NSString *)arg1 inheritingFromComponentTextStyle:(SXComponentTextStyle *)arg2;
- (id <SXTextStyle>)textStyleForIdentifier:(NSString *)arg1;
@end
