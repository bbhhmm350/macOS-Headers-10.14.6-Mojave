//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PDFKit/PDFAction.h>

#import <PDFKit/NSCopying-Protocol.h>

@class PDFActionNamedPrivateVars;

@interface PDFActionNamed : PDFAction <NSCopying>
{
    PDFActionNamedPrivateVars *_private2;
}

- (void).cxx_destruct;
- (id)toolTip;
- (void)addNameToDictionaryRef:(struct __CFDictionary *)arg1;
- (const struct __CFDictionary *)createDictionaryRef;
- (void)commonInit;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)description;
@property(nonatomic) long long name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(long long)arg1;

@end
