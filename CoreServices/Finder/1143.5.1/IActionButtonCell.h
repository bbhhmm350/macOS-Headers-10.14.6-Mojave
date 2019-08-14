//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TButtonCell.h"

@interface IActionButtonCell : TButtonCell
{
    _Bool _inRollOverState;
}

@property(readonly) _Bool inRollOverState; // @synthesize inRollOverState=_inRollOverState;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)updateActionButtonImage;
- (_Bool)isSelected;
- (id)imageForActionButtonState:(int)arg1;
- (BOOL)isOpaque;
- (void)initCommon;
- (id)init;

@end
