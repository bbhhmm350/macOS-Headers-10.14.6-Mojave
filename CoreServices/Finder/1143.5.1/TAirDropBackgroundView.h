//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TDrawRectView.h"

@class TAirDropCollectionViewLayout;

@interface TAirDropBackgroundView : TDrawRectView
{
    struct TNSRef<TAirDropCollectionViewLayout, void> _layoutController;
    _Bool _isInArcMode;
    struct TKeyValueBinder _isInArcModeBinder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(getter=isInArcMode) _Bool inArcMode; // @dynamic inArcMode;
@property(retain) TAirDropCollectionViewLayout *layoutController; // @dynamic layoutController;
- (void)dealloc;
- (void)initCommon;

@end
