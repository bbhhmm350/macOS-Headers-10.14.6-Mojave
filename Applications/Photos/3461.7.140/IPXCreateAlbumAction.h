//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXCreateNamedModelInFolderAction.h"

@class LiAddressList;

@interface IPXCreateAlbumAction : IPXCreateNamedModelInFolderAction
{
    LiAddressList *_initialVersionsAddresses;
    BOOL _containsSharedStreamContent;
}

+ (long long)albumSubclass;
+ (long long)albumType;
+ (Class)classForAddVersionsToAlbumActionWithSharedContent:(BOOL)arg1;
- (void).cxx_destruct;
- (id)ipx_destinationAlbum;
- (id)createdAlbum;
- (id)createModelWithName:(id)arg1 parentFolder:(id)arg2;
- (id)defaultActionName;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 initialVersions:(id)arg3;

@end
