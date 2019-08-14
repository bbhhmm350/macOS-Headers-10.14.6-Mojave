//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/UIActivityItemSource-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, RCCaptureSession, RCComposition, RCSSavedRecordingService, _RCCompositionUndoItem;

@interface RCCompositionController : NSObject <UIActivityItemSource>
{
    BOOL _hasStartedRecording;
    NSMutableDictionary *_accessTokensByName;
    NSMutableArray *_undoableCompositionItemStack;
    NSMutableArray *_finalizeCompletionBlocks;
    BOOL _hasLoggedUsageStatisticRecordingEvent;
    unsigned long long _usageHistoryMask;
    _RCCompositionUndoItem *_trimCancelUndoItem;
    RCSSavedRecordingService *_sharedService;
    RCComposition *_composition;
    RCCaptureSession *_activeCaptureSession;
}

+ (id)compositionControllerForSavedRecording:(id)arg1;
+ (id)compositionControllerForComposedAVURL:(id)arg1;
@property(readonly, nonatomic) RCCaptureSession *activeCaptureSession; // @synthesize activeCaptureSession=_activeCaptureSession;
@property(retain, nonatomic) RCComposition *composition; // @synthesize composition=_composition;
- (void).cxx_destruct;
- (id)_compositionByReplacingDecomposedFragments:(id)arg1;
- (void)_eaccess_saveCompositionAfterCommitingFinalizedCaptureDataSource:(id)arg1;
- (void)_eaccess_saveCompositionAfterAppendingInProgressCaptureDataSource:(id)arg1;
- (void)_eaccess_repairDecomposedFragmentMetadataIfNecessaryAndSave:(BOOL)arg1;
- (void)_eaccess_saveCompositionAndRecordingDuration:(BOOL)arg1;
- (id)_nextCaptureWaveformDataSourceWithDestinationTimeRange:(CDStruct_73a5d3ca)arg1 isOverdub:(BOOL)arg2;
- (void)_endAccessSessionWithToken:(id)arg1 forKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)rcs_repairDecomposedFragmentMetadataIfNecessary;
- (void)rcs_composeToFinalDestinationAndDeleteDecomposedFragments:(BOOL)arg1 composeWaveform:(BOOL)arg2 canGenerateWaveformByProcessingAVURL:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)deleteCompositionFromFileSystem;
- (void)deleteCompositionFromFileSystemAndDatabase;
- (BOOL)isCaptureSessionActive;
@property(readonly, nonatomic) BOOL isTopUndoableCompositionFromCapture;
@property(readonly, nonatomic) unsigned long long countOfUndoableCompositions;
- (void)performCompositionRedoWithRedoItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performTrimModeCancelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)performCompositionUndoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sanitizeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finalizingComposedAssetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_finalizeComposedAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)endTrimAccessSessionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)beginAccessSessionToTrimAsCopy:(BOOL)arg1 assetReadyBlock:(CDUnknownBlockType)arg2;
- (void)beginAccessSessionToExportWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)beginAccessSessionToPlayTimeRange:(CDStruct_73a5d3ca)arg1 readyToPlayBlock:(CDUnknownBlockType)arg2;
- (void)activeRecordingSessionWillFinish;
- (void)beginRecordingWithInputDevice:(id)arg1 captureInsertionRange:(CDStruct_73a5d3ca)arg2 isUndoable:(BOOL)arg3 isOverdub:(BOOL)arg4 sessionPreparedBlock:(CDUnknownBlockType)arg5 sessionFinishedBlock:(CDUnknownBlockType)arg6;
- (void)_endAccessSessions:(CDUnknownBlockType)arg1;
- (void)trimDidSave;
- (void)endAccessSessionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)endPreviewAccessSession;
- (void)endEditingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)prepareToBeginEditingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_setEditingFlag:(BOOL)arg1;
@property(readonly, nonatomic) NSString *savedRecordingUUID;
- (void)reloadComposition;
- (void)dealloc;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (BOOL)compositionIsShareable;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)_activitySourceRecording;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
