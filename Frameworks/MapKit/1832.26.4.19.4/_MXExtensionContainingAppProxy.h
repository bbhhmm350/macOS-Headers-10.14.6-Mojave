//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface _MXExtensionContainingAppProxy : NSObject
{
    NSMutableSet *_extensionUIIdentifiers;
    NSMutableSet *_extensionNonUIIdentifiers;
    NSString *_containingAppIdentifer;
}

@property(readonly, copy, nonatomic) NSString *containingAppIdentifer; // @synthesize containingAppIdentifer=_containingAppIdentifer;
@property(retain, nonatomic) NSMutableSet *extensionNonUIIdentifiers; // @synthesize extensionNonUIIdentifiers=_extensionNonUIIdentifiers;
@property(retain, nonatomic) NSMutableSet *extensionUIIdentifiers; // @synthesize extensionUIIdentifiers=_extensionUIIdentifiers;
- (void).cxx_destruct;
- (id)initWithContainingAppIdentifer:(id)arg1;

@end
