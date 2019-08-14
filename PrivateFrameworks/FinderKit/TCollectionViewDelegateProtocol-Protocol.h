//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/TBrowserViewDelegate-Protocol.h>
#import <FinderKit/TFloatingInputWindowDelegateProtocol-Protocol.h>

@class NSCollectionView, NSEvent;

@protocol TCollectionViewDelegateProtocol <TBrowserViewDelegate, TFloatingInputWindowDelegateProtocol>
- (void)endSelectionCoalescing:(NSEvent *)arg1;
- (void)startSelectionCoalescing:(NSEvent *)arg1;
- (_Bool)handleQuickLookWithEvent:(NSEvent *)arg1;
- (_Bool)handleKeyDown:(NSEvent *)arg1 currentKey:(unsigned short)arg2;
- (_Bool)handleMouseUp:(NSEvent *)arg1;
- (_Bool)handleMouseDragged:(NSEvent *)arg1;
- (_Bool)handleMouseDown:(NSEvent *)arg1;

@optional
- (void)collectionViewDidLayout:(NSCollectionView *)arg1;
- (void)collectionViewWillLayout:(NSCollectionView *)arg1;
@end
