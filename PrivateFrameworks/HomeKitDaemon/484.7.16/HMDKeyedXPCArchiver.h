//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSKeyedArchiver;

@interface HMDKeyedXPCArchiver : HMFObject
{
    NSKeyedArchiver *_archiver;
}

@property(readonly, nonatomic) NSKeyedArchiver *archiver; // @synthesize archiver=_archiver;
- (void).cxx_destruct;
- (id)encodedData;
- (void)finishEncoding;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)_configure;
- (void)dealloc;
- (id)initForWritingWithMessage:(id)arg1;

@end
