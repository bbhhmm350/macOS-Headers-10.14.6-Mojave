//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAXMLDocument : NSObject
{
    struct _xmlDoc *_document;
}

- (id)performXPathQuery:(id)arg1;
- (void)dealloc;
- (id)initWithHTMLData:(id)arg1;
- (id)initWithHTMLString:(id)arg1;
- (id)initWithXMLData:(id)arg1;
- (id)initWithXMLString:(id)arg1;

@end
