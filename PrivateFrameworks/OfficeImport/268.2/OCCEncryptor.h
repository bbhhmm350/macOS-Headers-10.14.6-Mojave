//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OCCEncryptor : NSObject
{
    NSString *mOutputFilename;
    struct OCCStreamer *mStreamer;
}

+ (id)allocTempFileWithBase:(id)arg1 filename:(id *)arg2;
@property(readonly, nonatomic) NSString *outputFilename; // @synthesize outputFilename=mOutputFilename;
- (void).cxx_destruct;
- (BOOL)encryptIntoOutputFile;
- (BOOL)encrypt;
- (id)initWithStreamer:(struct OCCStreamer *)arg1;
- (void)dealloc;

@end
