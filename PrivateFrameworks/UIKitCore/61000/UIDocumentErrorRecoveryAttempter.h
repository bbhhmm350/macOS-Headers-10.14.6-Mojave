//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIDocument;

__attribute__((visibility("hidden")))
@interface UIDocumentErrorRecoveryAttempter : NSObject
{
    UIDocument *_document;
    id _wrappedRecoveryAttempter;
    CDUnknownBlockType _continuerOrNil;
    long long _silentRecoveryOptionIndex;
    CDUnknownBlockType _appModalRecoveryAttempter;
    CDUnknownBlockType _recoveryCancelerOrNil;
    struct {
        unsigned int attemptedRecovery:1;
    } _errorRecoveryAttempterFlags;
}

- (void).cxx_destruct;
- (void)cancelRecovery;
- (BOOL)attemptSilentRecoveryFromError:(id)arg1 error:(id *)arg2;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 silentRecoveryOptionIndex:(unsigned long long)arg2 appModalRecoveryAttempter:(CDUnknownBlockType)arg3 recoveryCanceler:(CDUnknownBlockType)arg4;
- (id)initWithDocument:(id)arg1 wrappedRecoveryAttempter:(id)arg2;

@end
