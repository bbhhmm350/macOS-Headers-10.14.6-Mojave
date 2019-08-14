//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSMutableDictionary;
@protocol NSLocking;

@interface AttributeMgr : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary *mAttributes;
    BOOL mIsModified;
    NSDate *mModificationDate;
    id <NSLocking> mAttrLock;
}

+ (void)initialize;
- (void)setModificationDate:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)modificationDate;
- (void)setIsModified:(BOOL)arg1;
- (BOOL)isModified;
- (unsigned long long)count;
- (void)removeAllAttributes;
- (void)removeAttribute:(id)arg1;
- (void)setAttribute:(id)arg1 object:(id)arg2;
- (id)allAttributes;
- (id)attribute:(id)arg1;
- (BOOL)hasAttribute:(id)arg1;
- (id)description;
- (void)encodeWithDictionary:(id)arg1;
- (void)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
