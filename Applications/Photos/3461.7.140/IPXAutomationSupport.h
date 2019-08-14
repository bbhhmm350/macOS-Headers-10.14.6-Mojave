//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXAutomationSupport-Protocol.h"
#import "IPXAutomationViewerSupport-Protocol.h"
#import "IPXLibrarySearchManagerDelegate-Protocol.h"
#import "RDDatabaseGlobalMessagesReceiver-Protocol.h"

@class NSCondition, NSString;

@interface IPXAutomationSupport : NSObject <RDDatabaseGlobalMessagesReceiver, IPXLibrarySearchManagerDelegate, IPXAutomationSupport, IPXAutomationViewerSupport>
{
    BOOL _libraryIsOpen;
    NSCondition *_libraryOpenCondition;
}

@property(retain, nonatomic) NSCondition *libraryOpenCondition; // @synthesize libraryOpenCondition=_libraryOpenCondition;
@property(nonatomic) BOOL libraryIsOpen; // @synthesize libraryIsOpen=_libraryIsOpen;
- (void).cxx_destruct;
- (id)searchLibrary:(id)arg1;
- (id)databaseForUuid:(id)arg1 wait:(BOOL)arg2;
- (id)sharingDatabase:(BOOL)arg1;
- (id)defaultDatabase:(BOOL)arg1;
- (id)touchBar;
- (id)topViewController;
- (id)mondrianMediaView;
- (BOOL)viewerCanSelectPrevious;
- (BOOL)viewerCanSelectNext;
- (id)viewerScrollView;
- (id)_lookupSubviewKindOfClass:(Class)arg1 inView:(id)arg2 recursive:(BOOL)arg3;
- (struct CGPoint)_panOffsetFromZoomOrigin:(struct CGPoint)arg1 forViewController:(id)arg2;
- (BOOL)zoomItemViewController:(id)arg1 to:(double)arg2 origin:(struct CGPoint)arg3 handler:(CDUnknownBlockType)arg4;
- (BOOL)zoomTo:(double)arg1 origin:(struct CGPoint)arg2 handler:(CDUnknownBlockType)arg3;
- (id)itemViewControllersForVersion:(id)arg1;
- (id)itemViewControllers;
- (id)viewerControllers;
- (id)viewer;
- (id)selectedImportAsset;
- (unsigned long long)selectionManagerVersionsCount;
- (void)selectionManagerSelectAll;
- (void)selectionManagerSelectPrevious;
- (void)selectionManagerSelectNext;
- (void)selectionManagerSelectNone;
- (id)selectionManagerVersionAtOffset:(long long)arg1;
- (id)selectionManagerPrimarySelection;
- (id)selectionManagerSelectedVersions;
- (id)selectionManagerSelectedIndexes;
- (void)selectionManagerSelectVersionsAtIndexes:(id)arg1;
- (void)selectionManagerExtendSelectVersionAtIndex:(unsigned long long)arg1;
- (void)selectionManagerSelectVersionAtIndex:(unsigned long long)arg1;
- (unsigned long long)selectionManagerIndexOfVersion:(id)arg1;
- (id)sourceListSelectedContainer;
- (void)sourceListSelectContainer:(id)arg1;
- (void)openEditorWithVersion:(id)arg1;
- (void)pauseSlideshow;
- (id)playAndLoopSlideshow:(BOOL)arg1 fullscreen:(BOOL)arg2 shouldBlock:(BOOL)arg3;
- (void)navigateToSlideshowEditor:(id)arg1;
- (BOOL)isSlideshowEditorControllerActive;
- (id)albumWithUuid:(id)arg1;
- (id)slideshowWithAlbumUuid:(id)arg1;
- (id)allSlideshowAlbums;
- (id)slideshowAdHocController;
- (id)projectBrowser;
- (id)versionsForModelIds:(id)arg1;
- (id)versionsForCount:(unsigned long long)arg1;
- (id)versionsForContainer:(id)arg1;
- (id)versionsForSelectedContainer;
- (void)versionsForSelectedContainer:(CDUnknownBlockType)arg1;
- (id)setCanonicalLibraryPath:(id)arg1;
- (id)database;
- (id)libraryPath;
- (void)setLibraryPath:(id)arg1;
- (id)burstFavoriteAction:(id)arg1 versionsToUnfavorite:(id)arg2 favoritingOption:(long long)arg3;
- (id)slideshowEditorController;
- (id)editorController;
- (id)workspaceController;
- (id)workspace;
- (id)selectionMonitor;
- (id)appController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (void)_syncMainThread:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
