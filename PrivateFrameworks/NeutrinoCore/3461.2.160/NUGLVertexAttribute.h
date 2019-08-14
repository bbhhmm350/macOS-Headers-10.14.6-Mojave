//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NUGLVertexAttribute : NSObject
{
    BOOL _normalized;
    unsigned int _type;
    int _size;
    NSString *_name;
}

+ (id)vec4Attribute:(id)arg1;
+ (id)vec2Attribute:(id)arg1;
@property(readonly, nonatomic) BOOL normalized; // @synthesize normalized=_normalized;
@property(readonly) int size; // @synthesize size=_size;
@property(readonly) unsigned int type; // @synthesize type=_type;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (long long)_typeSize;
@property(readonly) long long sizeInBytes;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 size:(int)arg3 normalized:(BOOL)arg4;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 size:(int)arg3;
- (id)init;

@end
