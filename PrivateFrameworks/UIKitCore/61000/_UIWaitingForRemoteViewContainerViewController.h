//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface _UIWaitingForRemoteViewContainerViewController : UIViewController
{
    UIActivityIndicatorView *_loadingSpinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
- (void).cxx_destruct;
- (void)stopSpinner;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
