//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <ClassKit/CLSContextProvider-Protocol.h>
#import <ClassKit/CLSContextProviderInternal-Protocol.h>

@interface CLSContextProviderExtensionContext : NSExtensionContext <CLSContextProviderInternal, CLSContextProvider>
{
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (void)updateDescendantsOfContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateDescendantsOfContextPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMainAppContextPathWithCompletion:(CDUnknownBlockType)arg1;

@end
