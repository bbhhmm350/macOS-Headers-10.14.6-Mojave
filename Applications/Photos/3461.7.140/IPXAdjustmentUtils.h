//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPXAdjustmentUtils : NSObject
{
}

+ (void)toggleDisplayAsStill:(id)arg1 windowForAlert:(id)arg2 externalEditSessionController:(id)arg3 undoManager:(id)arg4;
+ (id)reprocessVersion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)rawMethodVersion:(id)arg1;
+ (BOOL)canReprocessVersion:(id)arg1;
+ (BOOL)isMasterInputKey:(id)arg1 forOperationIdentifier:(id)arg2;
+ (id)displayNameForOperationIdentifier:(id)arg1 key:(id)arg2;
+ (id)displayNameForOperationIdentifier:(id)arg1;

@end
