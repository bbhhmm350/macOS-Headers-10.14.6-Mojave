//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/NSObject-Protocol.h>

@class ICNFMCAccountProxy, NFFolder, NFNote, NSString;

@protocol NFLocalToRemotePusherProtocol <NSObject>
+ (const char *)logCategory;
- (BOOL)deleteFolderFromRemote:(NFFolder *)arg1 fromParent:(NFFolder *)arg2 accountProxy:(ICNFMCAccountProxy *)arg3 errorIsFatal:(char *)arg4;
- (BOOL)moveFolderOnRemote:(NFFolder *)arg1 toParent:(NFFolder *)arg2 originalParent:(NFFolder *)arg3 accountProxy:(ICNFMCAccountProxy *)arg4 errorIsFatal:(char *)arg5;
- (BOOL)updateFolderOnRemote:(NFFolder *)arg1 inParent:(NFFolder *)arg2 accountProxy:(ICNFMCAccountProxy *)arg3 errorIsFatal:(char *)arg4;
- (BOOL)addFolderToRemote:(NFFolder *)arg1 inParent:(NFFolder *)arg2 accountProxy:(ICNFMCAccountProxy *)arg3 errorIsFatal:(char *)arg4;
- (BOOL)deleteNoteFromRemoteWithID:(NSString *)arg1 fromFolder:(NFFolder *)arg2 accountProxy:(ICNFMCAccountProxy *)arg3 errorIsFatal:(char *)arg4;
- (BOOL)moveNoteOnRemote:(NFNote *)arg1 toFolder:(NFFolder *)arg2 originalFolder:(NFFolder *)arg3 accountProxy:(ICNFMCAccountProxy *)arg4 errorIsFatal:(char *)arg5;
- (BOOL)updateNoteOnRemote:(NFNote *)arg1 inFolder:(NFFolder *)arg2 accountProxy:(ICNFMCAccountProxy *)arg3 errorIsFatal:(char *)arg4;
- (BOOL)addNoteToRemote:(NFNote *)arg1 inFolder:(NFFolder *)arg2 accountProxy:(ICNFMCAccountProxy *)arg3 errorIsFatal:(char *)arg4;
@end
