//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/NSCopying-Protocol.h>
#import <CommerceKit/NSSecureCoding-Protocol.h>

@class CKDownloadAsset, NSError;

@interface CKDownloadStatus : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _state;
    BOOL _isAssetCached;
    unsigned long long _bytesDownloaded;
    unsigned long long _bytesExpected;
    double _estimatedTimeRemaining;
    NSError *_error;
    CKDownloadAsset *_downloadedAsset;
}

+ (BOOL)supportsSecureCoding;
@property(retain) CKDownloadAsset *downloadedAsset; // @synthesize downloadedAsset=_downloadedAsset;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL isAssetCached; // @synthesize isAssetCached=_isAssetCached;
@property double estimatedTimeRemaining; // @synthesize estimatedTimeRemaining=_estimatedTimeRemaining;
@property unsigned long long bytesExpected; // @synthesize bytesExpected=_bytesExpected;
@property unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property unsigned char state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end
