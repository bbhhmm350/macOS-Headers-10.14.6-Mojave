//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXObjectsControllerChangeReceiver-Protocol.h"

@class IPXFavoriteMemoriesAlbumThumbnailInfo, IPXFavoriteMemoriesObjectsController, NSString, PFDirectMessagingMulticaster, PFSerialQueue, PXMemoriesSpec;
@protocol IPXFavoriteMemoriesAlbumThumbnailChangeMulticaster, PFDispatchQueueClearing;

@interface IPXFavoriteMemoriesAlbumThumbnailGenerator : NSObject <IPXObjectsControllerChangeReceiver>
{
    BOOL _observingMemoriesChanges;
    struct PFDirectMessagingMulticaster *_changeMulticaster;
    IPXFavoriteMemoriesObjectsController *_objectsController;
    IPXFavoriteMemoriesAlbumThumbnailInfo *_favoriteMemoriesAlbumThumbnailInfo;
    PFSerialQueue<PFDispatchQueueClearing> *_favoriteMemoriesAlbumRenderDispatchQueue;
    PXMemoriesSpec *_spec;
}

+ (id)thumbnailGeneratorForDatabase:(id)arg1;
@property(retain, nonatomic) PXMemoriesSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) BOOL observingMemoriesChanges; // @synthesize observingMemoriesChanges=_observingMemoriesChanges;
@property(retain, nonatomic) PFSerialQueue<PFDispatchQueueClearing> *favoriteMemoriesAlbumRenderDispatchQueue; // @synthesize favoriteMemoriesAlbumRenderDispatchQueue=_favoriteMemoriesAlbumRenderDispatchQueue;
@property(retain, nonatomic) IPXFavoriteMemoriesAlbumThumbnailInfo *favoriteMemoriesAlbumThumbnailInfo; // @synthesize favoriteMemoriesAlbumThumbnailInfo=_favoriteMemoriesAlbumThumbnailInfo;
@property(retain, nonatomic) IPXFavoriteMemoriesObjectsController *objectsController; // @synthesize objectsController=_objectsController;
@property(retain, nonatomic) PFDirectMessagingMulticaster<IPXFavoriteMemoriesAlbumThumbnailChangeMulticaster> *changeMulticaster; // @synthesize changeMulticaster=_changeMulticaster;
- (void).cxx_destruct;
- (struct CGColorSpace *)deviceRGBSpace;
- (struct CGImage *)cgImageForEmptyFavoriteMemoriesAlbum;
- (void)objectsController:(id)arg1 representativeImageProperties:(unsigned long long)arg2 changedForObjects:(id)arg3;
- (void)objectsControllerObjectsCollectionChanged:(id)arg1;
- (void)renderFourMemoryLayoutForMemories:(id)arg1 inContext:(struct CGContext *)arg2 withResolution:(long long)arg3;
- (void)renderCompositionLayerForMemories:(id)arg1 inContext:(struct CGContext *)arg2 withResolution:(long long)arg3 radiusFraction:(double)arg4 positionFractions:(struct CGPoint *)arg5;
- (struct CGPoint)pointForRequestedResolution:(long long)arg1 withFraction:(struct CGPoint)arg2;
- (id)layerForMemory:(id)arg1 withResolution:(long long)arg2;
- (id)layerForVersion:(id)arg1 withSize:(struct CGSize)arg2;
- (struct CGImage *)newImageForVersion:(id)arg1 withSize:(struct CGSize)arg2;
- (void)beginRenderWithResolution:(long long)arg1;
- (void)invalidateThumbnailForFavoriteMemoriesAlbum;
- (struct CGImage *)bestThumbnailForFavoriteMemoriesAlbumWithResolution:(long long)arg1 colorSpace:(id)arg2;
- (void)removeChangeReceiver:(id)arg1;
- (void)addChangeReceiver:(id)arg1;
- (id)multicaster:(id)arg1 queueForSelector:(SEL)arg2;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;
- (id)_favoriteMemoryKeyVersionsAffectingThumbnail;
- (id)_favoriteMemoriesAffectingThumbnail:(id)arg1;
- (id)_thumbnailDiskCacheKey;
- (struct PFDirectMessagingMulticaster *)_changeMulticasterAllowingCreation:(BOOL)arg1;
- (struct PFDirectMessagingMulticaster *)_newChangeMulticaster;
- (void)_stopObservingMemoriesChanges;
- (void)_starObservingMemoriesChanges;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
