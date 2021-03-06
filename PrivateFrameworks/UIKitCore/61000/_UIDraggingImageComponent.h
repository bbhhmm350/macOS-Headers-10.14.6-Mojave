//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString, UIImage, UIView;

@interface _UIDraggingImageComponent : NSObject <NSCopying>
{
    BOOL _ignoresAccessibilityFilters;
    BOOL _hidesImage;
    UIView *_view;
    UIImage *_image;
    NSString *_key;
    struct CGRect _frame;
}

@property(readonly, nonatomic) BOOL hidesImage; // @synthesize hidesImage=_hidesImage;
@property(readonly, nonatomic) BOOL ignoresAccessibilityFilters; // @synthesize ignoresAccessibilityFilters=_ignoresAccessibilityFilters;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithNoImageAndFrame:(struct CGRect)arg1 key:(id)arg2;
- (id)initHidingDragImage;
- (id)initWithView:(id)arg1;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2 key:(id)arg3;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2 ignoreAccessibilityFilters:(BOOL)arg3 key:(id)arg4;

@end

