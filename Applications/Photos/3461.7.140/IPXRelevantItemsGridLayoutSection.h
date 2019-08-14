//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXCollectionsLayoutSection.h"

#import "IPXCollectionsLayoutGridNavigating-Protocol.h"

@class NSMutableArray, NSMutableData, NSString;
@protocol IPXRelevantItemsGridLayoutSectionRelevancyProvider;

@interface IPXRelevantItemsGridLayoutSection : IPXCollectionsLayoutSection <IPXCollectionsLayoutGridNavigating>
{
    id <IPXRelevantItemsGridLayoutSectionRelevancyProvider> _itemRelevancyProvider;
    CDStruct_5fdb3ec4 _configurationParameters;
    struct {
        struct {
            long long columnCount;
            long long rowCount;
            long long maximumItemCount;
            long long maximumHeroCount;
            char allowUnfilledRows;
        } boundsIndependent;
        int gridSlotConsumptionOrder;
        struct CGRect contentRect;
        struct CGRect headerRect;
        struct CGRect columnsAndRowsRect;
        struct CGRect footerRect;
        struct CGSize itemUnitSize;
        struct CGSize itemSpacing;
    } _calculated;
    long long _presentedItemsCount;
    NSMutableData *_presentedItemsArrayBuffer;
    struct {
        long long _field1;
        CDStruct_318dd791 _field2;
    } *_presentedItemsArray;
    NSMutableArray *_cachedItemLayoutAttributesForPresentedItemsArrayIndexArray;
    NSMutableData *_gridRowAndColumnToPresentedItemsArrayIndexLookupBuffer;
    long long *_gridRowAndColumnToPresentedItemsArrayIndexLookup;
}

+ (struct CGSize)itemSizeForSectionWidth:(double)arg1 usingConfigurationParameters:(const CDStruct_5fdb3ec4 *)arg2;
+ (struct CGSize)maximumSizeForConfigurationParameters:(const CDStruct_5fdb3ec4 *)arg1;
+ (void)getDefaultConfigurationParameters:(CDStruct_5fdb3ec4 *)arg1;
@property(nonatomic) __weak id <IPXRelevantItemsGridLayoutSectionRelevancyProvider> itemRelevancyProvider; // @synthesize itemRelevancyProvider=_itemRelevancyProvider;
- (void).cxx_destruct;
- (BOOL)shouldUseGridNavigationForDirection:(int)arg1;
- (id)indexPathForItemAtGridLocation:(CDStruct_79c71658)arg1;
- (CDStruct_318dd791)gridRectForItemAtIndexPath:(id)arg1;
- (CDStruct_79c71658)gridCapacity;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
- (void)_enumerateLayoutAttributesForItemsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)bounds;
- (void)prepareInBounds:(struct CGRect)arg1 withPlacement:(unsigned long long)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChangeFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
- (id)headerSupplementaryViewKind;
- (int)gridSlotConsumptionOrderForPlacement:(unsigned long long)arg1;
- (id)initWithLayout:(id)arg1 sectionIndex:(long long)arg2 itemCount:(long long)arg3;
- (void)_placeSectionItemsInGrid;
- (long long)_first:(long long)arg1 itemRelevancies:(CDStruct_4bcfbbae *)arg2;
- (id)_gridRowAndColumnToSectionItemsArrayIndexLookupDescription;
- (long long)_presentedItemsArrayIndexForGridLocation:(CDStruct_79c71658)arg1;
- (CDStruct_79c71658)_gridSizeForMediaItem:(id)arg1;
- (struct CGRect)_layoutRectForGridRect:(CDStruct_318dd791)arg1;
- (CDStruct_318dd791)_gridRectForLayoutRect:(struct CGRect)arg1;
- (void)setConfigurationWithParameters:(const CDStruct_5fdb3ec4 *)arg1;
- (void)getConfigurationParameters:(CDStruct_5fdb3ec4 *)arg1;
@property(nonatomic) BOOL allowUnfilledRows;
@property(nonatomic) long long maximumHeroCount;
@property(nonatomic) long long rowCount;
@property(nonatomic) long long columnCount;
@property(nonatomic) struct CGSize itemSpacing;
@property(nonatomic) struct CGSize itemSize;
@property(nonatomic) CDStruct_0e3fad5d columnsAndRowsInset;
@property(nonatomic) struct CGSize footerSize;
@property(nonatomic) struct CGSize headerSize;
@property(nonatomic) CDStruct_0e3fad5d contentInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
