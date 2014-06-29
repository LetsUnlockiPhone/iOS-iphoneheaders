/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextBaseCommand.h>

@class TSWPSelection, TSSPropertyMap, TSWPCharacterStyle, TSWPStorage, NSMutableArray;

@interface TSWPFormatTextCommand : TSWPTextBaseCommand {

	TSWPSelection* _selection;
	TSSPropertyMap* _overridePropertyMap;
	TSWPCharacterStyle* _overrideStyle;
	TSWPStorageTransaction* _undoRedoTransaction;
	bool _coalesceable;
	bool _disableCharacterStylePromotion;
	TSWPStorage* _storage;
	NSMutableArray* _changeDetails;

}

@property (nonatomic,readonly) TSWPStorage * storage;                     //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) NSMutableArray * changeDetails;              //@synthesize changeDetails=_changeDetails - In the implementation block
+(void)changeCharacterStylesInStorage:(id)arg1 range:(NSRange)arg2 overrideStyle:(id)arg3 overridePropertyMap:(id)arg4 undoRedoTransaction:(TSWPStorageTransaction*)arg5 ;
-(id)storage;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(FormatTextCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const FormatTextCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(bool)canCoalesceWithCommand:(id)arg1 ;
-(void)coalesceWithCommand:(id)arg1 ;
-(bool)shouldRunSynchronously;
-(id)initWithStorage:(id)arg1 selection:(id)arg2 overridePropertyMap:(id)arg3 coalesceable:(bool)arg4 ;
-(id)initWithStorage:(id)arg1 selection:(id)arg2 propertyKey:(int)arg3 propertyValue:(id)arg4 ;
-(id)initWithStorage:(id)arg1 selection:(id)arg2 propertyKey:(int)arg3 propertyValue:(id)arg4 coalesceable:(bool)arg5 ;
-(void)p_commitWithRange:(NSRange)arg1 impliedUIFormatDirectionIsRTL:(bool)arg2 ;
-(void)p_invalidateSelection:(id)arg1 ;
-(bool)p_propertyMap:(id)arg1 containsOnlyPropertiesOfStyleClass:(Class)arg2 ;
-(bool)p_rangeEncompassesWholeParagraph:(NSRange)arg1 paragraphRange:(NSRange)arg2 ;
-(void)setChangeDetails:(id)arg1 ;
-(id)changeDetails;
-(id)initWithStorage:(id)arg1 selection:(id)arg2 style:(id)arg3 coalesceable:(bool)arg4 disableCharacterStylePromotion:(bool)arg5 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(void)undoRedo;
-(bool)process;
-(id)actionString;
@end
