//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TOpenWithMenuFactory.h"

@protocol TOpenWithPopupMenuItemProtocol;

@interface TOpenWithPopupMenuFactory : TOpenWithMenuFactory
{
    id <TOpenWithPopupMenuItemProtocol> _appStoreAndOtherTarget;
}

- (void)addNotApplicableMenuItem:(id)arg1;
- (void)_buildOpenWithMenuOnMainThread:(id)arg1 command:(SEL)arg2 currentAppNode:(const struct TFENode *)arg3 defaultAppNode:(const struct TFENode *)arg4 openerAppsNodes:(const struct TFENodeVector *)arg5;
- (void)preflightOpenWithPopupButton:(id)arg1 appStoreAndOtherTarget:(id)arg2 command:(SEL)arg3;

@end
