//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IFSecEquivalence : NSObject
{
    NSMutableDictionary *_filesList;
    NSString *_alternateRoot;
}

+ (BOOL)shouldAddPath:(id)arg1 withInstallRoot:(id)arg2 withFSObject:(struct _BOMFSObject *)arg3;
+ (id)normalizePath:(id)arg1;
- (void)updateEquivalentSecRefForPaths;
- (void)gatherApplicationSecRefsForPaths:(id)arg1;
- (void)dealloc;
- (id)initWithTargetVolume:(id)arg1;
- (void)setApplicationSecRef:(struct OpaqueSecTrustedApplicationRef *)arg1 forPath:(id)arg2;
- (struct OpaqueSecTrustedApplicationRef *)applicationSecRefForPath:(id)arg1;

@end

