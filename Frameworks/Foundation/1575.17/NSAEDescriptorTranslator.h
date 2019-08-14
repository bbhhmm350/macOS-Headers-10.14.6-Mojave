//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSAEDescriptorTranslator : NSObject
{
    id _descToObjMap;
    id _objToDescMap;
}

+ (id)sharedAEDescriptorTranslator;
+ (id)_descriptorByTranslatingDictionary:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3;
+ (id)_descriptorByTranslatingDate:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3;
+ (id)_descriptorByTranslatingData:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3;
+ (id)_descriptorByTranslatingArray:(id)arg1 ofObjectsOfType:(id)arg2 inSuite:(id)arg3;
+ (id)_descriptorByTranslatingNumber:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3;
+ (id)_descriptorByTranslatingString:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3;
+ (id)_stringByTranslatingAliasDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3;
+ (id)_stringByTranslatingFSSpecDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3;
+ (id)_dateByTranslatingLongDateTimeDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3;
+ (id)_valueByTranslatingOSAErrorRangeDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3;
+ (id)_numberByTranslatingNumericDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3;
+ (id)_stringByTranslatingTextDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3;
+ (id)_arrayByTranslatingAEList:(id)arg1 toType:(id)arg2 inSuite:(id)arg3;
+ (id)_dictionaryByTranslatingAERecord:(id)arg1 toType:(id)arg2 inSuite:(id)arg3;
+ (id)_propertyContainerClassDescriptionFromDictionaryType:(id)arg1 inSuite:(id)arg2;
+ (id)_descriptorByTranslatingNull:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3;
- (id)descriptorByTranslatingObject:(id)arg1 ofType:(id)arg2 inSuite:(id)arg3;
- (id)objectByTranslatingDescriptor:(id)arg1 toType:(id)arg2 inSuite:(id)arg3;
- (void)registerTranslator:(id)arg1 selector:(SEL)arg2 toTranslateFromClass:(Class)arg3;
- (void)registerTranslator:(id)arg1 selector:(SEL)arg2 toTranslateFromDescriptorType:(unsigned int)arg3;
- (void)dealloc;
- (id)init;
- (void)_setUpFoundationTranslations;

@end
