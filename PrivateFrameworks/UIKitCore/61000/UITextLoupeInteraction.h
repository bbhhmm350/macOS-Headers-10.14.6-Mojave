//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UITextInteraction.h>

__attribute__((visibility("hidden")))
@interface UITextLoupeInteraction : UITextInteraction
{
    Class _configuratorClass;
}

- (void)canBeginDragCursor:(id)arg1;
- (void)loupeGestureWithState:(long long)arg1 atGesturePoint:(CDUnknownBlockType)arg2 modifierFlags:(long long)arg3 shouldCancel:(char *)arg4;
- (void)loupeGestureWithState:(long long)arg1 atGesturePoint:(CDUnknownBlockType)arg2 shouldCancel:(char *)arg3;
- (void)loupeGesture:(id)arg1;
- (BOOL)_isShiftKeyBeingHeldForGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)finishSetup;
- (id)initWithConfigurator:(Class)arg1;

@end

