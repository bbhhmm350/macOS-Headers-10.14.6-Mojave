//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CHRecentCall;

@interface DeserializedTransaction : NSObject
{
    CHRecentCall *_call;
    unsigned long long _type;
}

@property unsigned long long type; // @synthesize type=_type;
@property(retain) CHRecentCall *call; // @synthesize call=_call;
- (void).cxx_destruct;
- (id)initWithCall:(id)arg1 andType:(unsigned long long)arg2;

@end
