//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol AudioComponentPreferenceProtocol
- (void)getInterAppIcon:(NSString *)arg1 reply:(void (^)(NSData *))arg2;
- (void)getExtensionIcon:(NSString *)arg1 reply:(void (^)(NSData *))arg2;
- (void)setComponentUserTags:(NSDictionary *)arg1 tags:(NSArray *)arg2;
- (void)getComponentUserTags:(NSDictionary *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)getExtensionComponentList:(NSString *)arg1 linkedSDKVersion:(int)arg2 reply:(void (^)(NSArray *))arg3;
- (void)setExtensionComponentList:(NSString *)arg1 linkedSDKVersion:(int)arg2 components:(NSArray *)arg3 reply:(void (^)(int))arg4;
@end

