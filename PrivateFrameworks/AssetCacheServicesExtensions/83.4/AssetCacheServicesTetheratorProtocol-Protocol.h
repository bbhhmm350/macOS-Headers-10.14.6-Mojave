//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssetCacheServicesExtensions/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol AssetCacheServicesTetheratorErrorProtocol;

@protocol AssetCacheServicesTetheratorProtocol <NSObject>
- (void)sendErrorReporter:(id <AssetCacheServicesTetheratorErrorProtocol>)arg1;
- (void)status:(void (^)(NSDictionary *, NSError *))arg1;
- (void)isEnabled:(void (^)(BOOL, NSError *))arg1;
- (void)disable:(void (^)(BOOL, NSError *))arg1;
- (void)enableWithStartAddress:(NSString *)arg1 endAddress:(NSString *)arg2 cachingServerInfo:(NSDictionary *)arg3 callback:(void (^)(BOOL, NSError *))arg4;
@end
