//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSCopying-Protocol.h>

@class NSString;

@interface NSSNewsTerminationItem : NSObject <NSCopying>
{
    unsigned long long _processType;
    NSString *_bundleID;
}

@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) unsigned long long processType; // @synthesize processType=_processType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProcessType:(unsigned long long)arg1 bundleID:(id)arg2;
- (id)init;

@end

