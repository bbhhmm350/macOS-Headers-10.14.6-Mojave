//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol IOBluetoothDaemonNSXPCDelegate;

@interface IOBluetoothDaemonNSXPCClient : NSObject
{
    id <IOBluetoothDaemonNSXPCDelegate> _delegate;
    NSXPCConnection *_connection;
}

@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property id <IOBluetoothDaemonNSXPCDelegate> delegate; // @synthesize delegate=_delegate;
- (void)aacpCustomDataEvent:(unsigned int)arg1 withData:(id)arg2 forDevice:(id)arg3;
- (void)switchEvent:(unsigned int)arg1;
- (void)sendAACPCustomData:(unsigned int)arg1 withData:(id)arg2 forDevice:(id)arg3;
- (void)debugMessage;
- (void)getAccessoryAddressString:(CDUnknownBlockType)arg1;
- (void)captureAccessoryLogs:(CDUnknownBlockType)arg1;
- (void)clearAccessoryCrashLog;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end
