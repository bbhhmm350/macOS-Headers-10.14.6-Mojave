//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICNFIMAPMessageDetails : NSObject
{
    BOOL _isInvalid;
    unsigned int _messageFlags;
    unsigned int _uid;
}

+ (id)searchDetails:(id)arg1 forUid:(unsigned int)arg2 skippingUid:(unsigned int)arg3;
+ (id)newMessageDetailsWithPersistentIDType:(BOOL)arg1;
@property(nonatomic) BOOL isInvalid; // @synthesize isInvalid=_isInvalid;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(nonatomic) unsigned int messageFlags; // @synthesize messageFlags=_messageFlags;
- (id)description;
- (id)init;

@end
