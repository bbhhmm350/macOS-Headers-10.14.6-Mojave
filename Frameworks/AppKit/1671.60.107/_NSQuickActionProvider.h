//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, _NSExtensionQuickActionProviderSource, _NSLegacyServiceQuickActionProviderSource, _NSQuickActionPresentation;
@protocol _NSQuickActionProviderObserver;

@interface _NSQuickActionProvider : NSObject
{
    id <_NSQuickActionProviderObserver> _observer;
    _NSQuickActionPresentation *_presentation;
    _NSLegacyServiceQuickActionProviderSource *_legacyServiceSource;
    _NSExtensionQuickActionProviderSource *_extensionSource;
    BOOL _isObservingSources;
    BOOL _isObservingConfiguration;
}

+ (id)providerWithObserver:(id)arg1 presentationMode:(id)arg2;
- (void).cxx_destruct;
- (id)beginConfiguration;
- (void)dealloc;
- (void)cancel;
@property(readonly) NSSet *activeQuickActions;
@property(readonly) NSSet *allQuickActions;
@property(readonly) NSArray *activeOrderedQuickActions;
@property(readonly) NSArray *allOrderedQuickActions;
- (void)configurationDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (id)initWithObserver:(id)arg1 presentation:(id)arg2;

@end
