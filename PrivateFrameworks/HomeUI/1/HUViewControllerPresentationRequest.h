//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface HUViewControllerPresentationRequest : NSObject
{
    BOOL _animated;
    UIViewController *_viewController;
    unsigned long long _preferredPresentationType;
}

+ (id)requestWithViewController:(id)arg1;
@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(nonatomic) unsigned long long preferredPresentationType; // @synthesize preferredPresentationType=_preferredPresentationType;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1;

@end

