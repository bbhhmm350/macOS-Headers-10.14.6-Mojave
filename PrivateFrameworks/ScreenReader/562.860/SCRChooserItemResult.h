//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReader/NSCopying-Protocol.h>

@class NSData, NSString, NSValue, SCRElement, SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRChooserItemResult : NSObject <NSCopying>
{
    SCRUIElement *_uiElement;
    SCRElement *_element;
    NSData *_loader;
    NSString *_rotorIdentifier;
    NSValue *_textRange;
    NSString *_descriptionOverride;
}

+ (id)chooserElementForUIElement:(id)arg1;
@property(copy, nonatomic) NSString *descriptionOverride; // @synthesize descriptionOverride=_descriptionOverride;
@property(readonly, nonatomic) NSValue *textRange; // @synthesize textRange=_textRange;
@property(copy, nonatomic) NSString *rotorIdentifier; // @synthesize rotorIdentifier=_rotorIdentifier;
@property(retain, nonatomic) NSData *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) SCRElement *element; // @synthesize element=_element;
@property(readonly, nonatomic) SCRUIElement *uiElement; // @synthesize uiElement=_uiElement;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUIElement:(id)arg1 textRange:(id)arg2;

@end
