//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class NSLayoutConstraint;

@interface CIMFuzzyPinyinTableView : NSTableView
{
    BOOL _tableWidthAdjusted;
    NSLayoutConstraint *_tableWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *tableWidthConstraint; // @synthesize tableWidthConstraint=_tableWidthConstraint;
@property(nonatomic) BOOL tableWidthAdjusted; // @synthesize tableWidthAdjusted=_tableWidthAdjusted;
- (void).cxx_destruct;
- (void)adjustColumnWidth;

@end
