//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBundle;

@interface SPInfoView : NSView
{
    NSBundle *_bundle;
}

+ (id)createFromNib;
+ (id)createFromNibNamed:(id)arg1;
- (void)setViewHeight:(double)arg1 animate:(BOOL)arg2;
- (void)loadData;
- (id)localizedString:(id)arg1;

@end

