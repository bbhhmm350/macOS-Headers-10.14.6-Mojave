//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <CryptoTokenKit/TKTokenDriverProtocol-Protocol.h>

@class NSString, TKTokenDriver;

__attribute__((visibility("hidden")))
@interface TKTokenDriverContext : NSExtensionContext <TKTokenDriverProtocol>
{
    BOOL _invalidated;
    TKTokenDriver *_driver;
    NSString *_tokenID;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(retain) NSString *tokenID; // @synthesize tokenID=_tokenID;
@property(retain) TKTokenDriver *driver; // @synthesize driver=_driver;
- (void).cxx_destruct;
- (void)dealloc;
- (void)acquireTokenEndpointWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
