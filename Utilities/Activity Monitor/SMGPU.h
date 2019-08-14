//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SMGPU : NSObject
{
    unsigned int _service;
    NSString *_name;
    NSString *_prettyName;
    unsigned long long _registryID;
}

@property unsigned int service; // @synthesize service=_service;
@property unsigned long long registryID; // @synthesize registryID=_registryID;
@property(retain) NSString *prettyName; // @synthesize prettyName=_prettyName;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)prettifiedDeviceName:(id)arg1;
@property(readonly) float percentUtilization;
- (void)dealloc;
- (id)initWithName:(id)arg1 service:(unsigned int)arg2 registryID:(unsigned long long)arg3;

@end
