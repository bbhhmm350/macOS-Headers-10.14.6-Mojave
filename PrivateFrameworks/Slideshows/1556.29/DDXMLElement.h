//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/DDXMLNode.h>

@interface DDXMLElement : DDXMLNode
{
}

+ (id)resolvePrefixForURI:(id)arg1 atNode:(struct _xmlNode *)arg2;
+ (id)resolveNamespaceForPrefix:(id)arg1 atNode:(struct _xmlNode *)arg2;
+ (id)nodeWithPrimitive:(struct _xmlKind *)arg1;
+ (id)elementWithName:(id)arg1 xmlns:(id)arg2;
- (void)setChildren:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChild:(id)arg1;
- (void)removeChildAtIndex:(unsigned long long)arg1;
- (void)removeAllChildren;
- (void)removeChild:(struct _xmlNode *)arg1;
- (id)resolvePrefixForNamespaceURI:(id)arg1;
- (id)resolveNamespaceForName:(id)arg1;
- (void)setNamespaces:(id)arg1;
- (id)namespaceForPrefix:(id)arg1;
- (id)namespaces;
- (void)removeNamespaceForPrefix:(id)arg1;
- (void)removeAllNamespaces;
- (void)removeNamespace:(struct _xmlNs *)arg1;
- (void)addNamespace:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)attributeForName:(id)arg1;
- (id)attributes;
- (void)removeAttributeForName:(id)arg1;
- (void)removeAllAttributes;
- (void)removeAttribute:(struct _xmlAttr *)arg1;
- (void)addAttribute:(id)arg1;
- (id)elementsWithName:(id)arg1 uri:(id)arg2;
- (id)elementsForLocalName:(id)arg1 URI:(id)arg2;
- (id)elementsForName:(id)arg1;
- (id)initWithCheckedPrimitive:(struct _xmlKind *)arg1;
- (id)initWithUncheckedPrimitive:(struct _xmlKind *)arg1;
- (id)initWithXMLString:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 stringValue:(id)arg2;
- (id)initWithName:(id)arg1 URI:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)attributesAsDictionary;
- (void)addAttributeWithName:(id)arg1 stringValue:(id)arg2;
- (void)setXmlns:(id)arg1;
- (id)xmlns;
- (id)elementForName:(id)arg1 xmlns:(id)arg2;
- (id)elementForName:(id)arg1;

@end
