//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ABBookUndoableCommand.h"

@class NSString;
@protocol ABCardViewDataSourceProvider, NSObject;

@interface ABCardViewEditPropertyCommand : ABBookUndoableCommand
{
    id <ABCardViewDataSourceProvider> _dataSourceProvider;
    id <NSObject> _oldValue;
    id <NSObject> _updatedValue;
    NSString *_propertyKey;
}

@property(retain, nonatomic) id <ABCardViewDataSourceProvider> dataSourceProvider; // @synthesize dataSourceProvider=_dataSourceProvider;
@property(retain, nonatomic) id <NSObject> updatedValue; // @synthesize updatedValue=_updatedValue;
@property(copy, nonatomic) NSString *propertyKey; // @synthesize propertyKey=_propertyKey;
@property(retain, nonatomic) id <NSObject> oldValue; // @synthesize oldValue=_oldValue;
- (void)executeUndo;
- (void)execute;
- (void)dealloc;
- (id)initWithDataSourceProvider:(id)arg1 propertyKey:(id)arg2 oldValue:(id)arg3 updatedValue:(id)arg4;

@end
