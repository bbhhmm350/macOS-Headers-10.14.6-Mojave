//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OSAKit/OSAScriptElement.h>

@class NSString;

@interface OSAControlElement : OSAScriptElement
{
    NSString *_controlName;
}

+ (id)elementWithName:(id)arg1 text:(id)arg2;
- (BOOL)generateIntoText:(id)arg1 indent:(unsigned int)arg2;
- (void)setControlName:(id)arg1;
- (id)controlName;
- (void)dealloc;
- (id)initWithName:(id)arg1 text:(id)arg2;
- (id)initWithName:(id)arg1;

@end
