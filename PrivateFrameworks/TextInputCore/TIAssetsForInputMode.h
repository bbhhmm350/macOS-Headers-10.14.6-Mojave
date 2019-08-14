//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TIAssetsForInputMode : NSObject
{
    NSMutableDictionary *_assetsByInputModeLevel;
    NSString *_inputMode;
}

@property(readonly, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
- (void).cxx_destruct;
- (id)assetContentItemsMatching:(id)arg1;
- (void)removeAllInputModeLevels;
- (void)addAssetsForInputModeLevel:(id)arg1;
- (id)recursiveDescription;
- (void)dealloc;
- (id)initWithInputMode:(id)arg1;

@end
