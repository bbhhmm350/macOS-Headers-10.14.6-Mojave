//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAppleEventDescriptor, NSDate, NSString, NSURL, OSALanguageInstance;

@interface OSAScriptPrivate : NSObject
{
    NSString *_source;
    unsigned int _compiledScriptID;
    void *_reserved1;
    void *_reserved2;
    NSURL *_url;
    BOOL _dontSetScriptLocation;
    BOOL _isExecuting;
    NSDate *_date;
    OSALanguageInstance *_languageInstance;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_executionThread;
    NSAppleEventDescriptor *_defaultTarget;
}

- (void)finalize;
- (void)dealloc;
- (id)init;

@end

