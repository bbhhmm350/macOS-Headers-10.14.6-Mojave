//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface AUConnectedClientNode : NSObject
{
    NSString *key;
    NSString *value;
    NSMutableArray *children;
    BOOL isLeaf;
}

+ (id)nodeWithClient:(id)arg1;
+ (id)nodeWithClientDict:(id)arg1;
+ (id)rootItem;
@property(nonatomic) BOOL isLeaf; // @synthesize isLeaf;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children;
@property(copy, nonatomic) NSString *value; // @synthesize value;
@property(copy, nonatomic) NSString *key; // @synthesize key;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
