//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMDStickerRegistry : NSObject
{
    NSMutableDictionary *_stickerPackGUIDToPackMap;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *stickerPackGUIDToPackMap; // @synthesize stickerPackGUIDToPackMap=_stickerPackGUIDToPackMap;
- (void)retrieveStickerWithProperties:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)_isRecipeBasedSticker:(id)arg1;
- (id)_cachedPathForStickerWithProperties:(id)arg1;
- (void)dealloc;
- (id)init;

@end

