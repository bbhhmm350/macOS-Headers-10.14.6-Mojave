//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInteractionPreviewContext-Protocol.h>

@class NSString, UIViewController;

@interface SXComponentInteractionPreviewContext : NSObject <SXComponentInteractionPreviewContext>
{
    UIViewController *_viewController;
    struct CGRect _sourceRect;
}

@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 sourceRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
