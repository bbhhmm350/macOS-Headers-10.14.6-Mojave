//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol CNUIIDSIDQueryControllerWrapper
- (BOOL)refreshIDStatusForDestinations:(NSArray *)arg1 service:(NSString *)arg2 listenerID:(NSString *)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4 completionBlock:(void (^)(NSDictionary *))arg5;
@end

