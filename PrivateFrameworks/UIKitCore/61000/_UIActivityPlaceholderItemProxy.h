//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIActivityPlaceholderItemProxy : NSProxy <NSCopying>
{
    id _uikit_placeholderItem;
}

+ (id)unproxiedItemsForItems:(id)arg1;
+ (id)unproxiedItemForItem:(id)arg1;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (Class)class;
- (Class)superclass;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)isProxy;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id placeholderItem; // @dynamic placeholderItem;
- (id)initWithPlaceholderItem:(id)arg1;

@end
