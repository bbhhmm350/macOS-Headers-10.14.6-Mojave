//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DiskPartition : NSObject
{
}

+ (int)writeHFSBlock0:(id)arg1 atOffset:(unsigned long long)arg2;
+ (int)writeDiskBlock0:(id)arg1;
+ (int)writeHFSPartitionMap:(id)arg1 atOffset:(unsigned long long)arg2;
+ (int)writeDiskHeader:(id)arg1 writeFormatSelfFlag:(BOOL)arg2 atOffset:(unsigned long long)arg3;

@end
