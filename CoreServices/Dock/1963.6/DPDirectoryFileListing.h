//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DPFileListing.h"

@class NSDate, NSString;

@interface DPDirectoryFileListing : DPFileListing
{
    NSString *_path;
    NSDate *_lastModifiedDate;
}

+ (id)directoryFileListingWithPath:(id)arg1;
- (void).cxx_destruct;
- (id)_filesForFolder:(id)arg1 date:(id *)arg2;
- (void)fetchFiles:(BOOL)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
