//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, UICollectionView, UIView;

@protocol UICollectionViewFocusDelegate_Legacy <UICollectionViewDelegate>

@optional
- (NSIndexPath *)indexPathForPreferredFocusedItemForCollectionView:(UICollectionView *)arg1;
- (BOOL)collectionView:(UICollectionView *)arg1 shouldUpdateFocusFromItemAtIndexPath:(NSIndexPath *)arg2 toView:(UIView *)arg3 heading:(unsigned long long)arg4;
- (void)collectionView:(UICollectionView *)arg1 didUnfocusItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (void)_collectionView:(UICollectionView *)arg1 didFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)_collectionView:(UICollectionView *)arg1 canFocusItemAtIndexPath:(NSIndexPath *)arg2;
@end
