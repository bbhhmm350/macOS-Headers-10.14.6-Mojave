//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIColor;

@interface _UIHighlightView : UIView
{
    UIColor *_color;
    double _cornerRadius;
    struct CGRect _invertedHighlightClipRect;
    NSArray *_cornerRadii;
    NSMutableArray *_innerBounds;
    NSMutableArray *_innerQuads;
    BOOL _invertHighlight;
}

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)setInvertHighlight:(BOOL)arg1 clipRect:(struct CGRect)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setQuads:(id)arg1 boundaryRect:(struct CGRect)arg2;
- (void)setFrames:(id)arg1 boundaryRect:(struct CGRect)arg2;
- (void)setCornerRadii:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setColor:(id)arg1;
- (void)cleanUp;
- (id)initWithFrame:(struct CGRect)arg1;

@end

