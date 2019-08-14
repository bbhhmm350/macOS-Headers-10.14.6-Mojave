//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXEditUndoRedo.h"

@class IPAPhotoEffect, NSDictionary;

@interface IPXEditEffectUndoRedo : IPXEditUndoRedo
{
    IPAPhotoEffect *_newEffect;
    IPAPhotoEffect *_oldEffect;
    NSDictionary *_depthData;
    BOOL _hasChanges;
}

- (void).cxx_destruct;
- (void)_removeAllEffects;
- (void)performAction;
- (void)_applyEffect:(id)arg1 replacing:(id)arg2;
- (void)editAtomicallyWithDescriptionEditController:(CDUnknownBlockType)arg1;
- (void)redo;
- (void)undo;
- (id)defaultActionName;
- (id)_getDepthData;
- (id)_previousEffect;
- (id)initWithImageItemController:(id)arg1 delegate:(id)arg2 depthEffect:(id)arg3 depthData:(id)arg4;
- (id)initWithImageItemController:(id)arg1 delegate:(id)arg2 effect:(id)arg3;

@end
