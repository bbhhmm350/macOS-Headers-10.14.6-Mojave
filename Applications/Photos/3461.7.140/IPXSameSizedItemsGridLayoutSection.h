//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXCollectionsLayoutSection.h"

#import "IPXCollectionsLayoutGridNavigating-Protocol.h"

@class NSMutableArray, NSString;

@interface IPXSameSizedItemsGridLayoutSection : IPXCollectionsLayoutSection <IPXCollectionsLayoutGridNavigating>
{
    struct {
        CDStruct_0e3fad5d contentInset;
        struct CGSize headerSize;
        struct CGSize footerSize;
        CDStruct_0e3fad5d columnsAndRowsInset;
        struct CGSize desiredItemSize;
        struct CGSize desiredItemGap;
        long long desiredColumnCount;
        long long desiredRowCount;
        char allowsVariableItemGap;
        char honorsImageAspectRatio;
    } _configurationParameters;
    CDStruct_b57a036a _layoutParameterBlock;
    struct {
        CDStruct_e29a1851 public;
        unsigned long long itemPlacement;
        char itemPlacementIsTopToBottom;
        char itemPlacementIsLeftToRight;
        char itemPlacementSecondaryDirectionIsVertical;
    } _calculationsParameterBlock;
    NSMutableArray *_cachedItemAttributesLookupArray;
    long long _dropOperationDisplacedColumnIndex;
    long long _dropOperationDisplacedRowIndex;
    double _dropOperationHorizontalDisplacement;
}

+ (long long)columnCountForWidth:(double)arg1 usingConfigurationParameters:(const struct *)arg2;
+ (double)widthForColumnCount:(unsigned long long)arg1 usingConfigurationParameters:(const struct *)arg2;
+ (long long)rowCountForHeight:(double)arg1 usingConfigurationParameters:(const struct *)arg2;
+ (double)heightForRowCount:(unsigned long long)arg1 usingConfigurationParameters:(const struct *)arg2;
+ (BOOL)getCalculations:(CDStruct_e29a1851 *)arg1 forTilingNumberOfItems:(long long)arg2 withPlacement:(unsigned long long)arg3 inCandidateBounds:(struct CGRect)arg4 usingConfigurationParameters:(const struct *)arg5;
+ (void)getDefaultConfigurationParameters:(struct *)arg1;
- (void).cxx_destruct;
- (BOOL)shouldUseGridNavigationForDirection:(int)arg1;
- (id)indexPathForItemAtGridLocation:(CDStruct_79c71658)arg1;
- (CDStruct_318dd791)gridRectForItemAtIndexPath:(id)arg1;
- (CDStruct_79c71658)gridCapacity;
- (id)indexPathForDropLocation:(struct CGPoint)arg1 dropPosition:(long long *)arg2;
- (id)newLayoutAttributesForItemWithIndexPath:(id)arg1 containedInRect:(struct CGRect)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChangeFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
- (struct CGRect)bounds;
- (void)prepareInBounds:(struct CGRect)arg1 withPlacement:(unsigned long long)arg2;
- (BOOL)shouldCacheHeaderLayoutAttributes;
- (void)_cacheItemLayoutAttributes;
- (void)_enumerateItemsInColumns:(struct _NSRange)arg1 andRows:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (long long)_virtualInsertionColumnForXPosition:(double)arg1;
- (BOOL)_getColumns:(struct _NSRange *)arg1 andRows:(struct _NSRange *)arg2 inRect:(struct CGRect)arg3;
- (long long)_virtualRowForYPosition:(double)arg1;
- (long long)_virtualColumnForXPosition:(double)arg1;
- (struct CGRect)_rectOfFooter;
- (struct CGRect)_rectOfHeader;
- (struct CGRect)_rectOfItem:(long long)arg1 inColumn:(long long)arg2 row:(long long)arg3;
- (struct CGRect)rectOfItemAtIndex:(long long)arg1;
- (struct CGRect)rectOfItemInColumn:(long long)arg1 row:(long long)arg2;
- (long long)_itemIndexForRow:(long long)arg1 column:(long long)arg2;
- (struct CGRect)rectOfColumn:(long long)arg1;
- (struct CGRect)rectOfRow:(long long)arg1;
- (struct CGRect)columnsAndRowsRect;
- (BOOL)secondaryItemPlacementIsVertical;
- (BOOL)primaryItemPlacementIsVertical;
@property(readonly, nonatomic) long long itemCount;
@property(readonly, nonatomic) long long rowCount;
@property(readonly, nonatomic) long long columnCount;
@property(readonly, nonatomic) struct CGSize itemGap;
@property(readonly, nonatomic) struct CGSize itemSize;
- (void)setConfigurationWithParameters:(const struct *)arg1;
- (void)getConfigurationParameters:(struct *)arg1;
@property(nonatomic) BOOL honorsImageAspectRatio;
@property(nonatomic) BOOL allowsVariableItemGap;
@property(nonatomic) long long desiredRowCount;
@property(nonatomic) long long desiredColumnCount;
@property(nonatomic) struct CGSize desiredItemSize;
@property(nonatomic) struct CGSize desiredItemGap;
@property(nonatomic) CDStruct_0e3fad5d columnsAndRowsInset;
@property(nonatomic) struct CGSize footerSize;
@property(nonatomic) struct CGSize headerSize;
@property(nonatomic) CDStruct_0e3fad5d contentInset;
- (id)initWithLayout:(id)arg1 sectionIndex:(long long)arg2 itemCount:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
