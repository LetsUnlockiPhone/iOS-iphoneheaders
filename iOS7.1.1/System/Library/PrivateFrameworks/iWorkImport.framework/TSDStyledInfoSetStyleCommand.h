/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCommand.h>
#import <iWorkImport/TSDPropagatableCommand.h>

@class TSDStyledInfo, TSSStyle;

@interface TSDStyledInfoSetStyleCommand : TSKCommand <TSDPropagatableCommand> {

	TSDStyledInfo* mInfo;
	TSSStyle* mStyle;

}

@property (nonatomic,retain) TSDStyledInfo * info; 
@property (nonatomic,retain) TSSStyle * style; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(StyledInfoSetStyleCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const StyledInfoSetStyleCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithStyledInfo:(id)arg1 style:(id)arg2 ;
-(bool)modifiesAnyObjectPassingTest:(/*^block*/ id)arg1 ;
-(void)populateChangePropagationMapAfterCommit:(id)arg1 ;
-(id)subclassInitFromUnarchiver:(id)arg1 ;
-(void)p_do;
-(id)initWithStyledInfo:(id)arg1 ;
-(id)stylesheetForNewStyle;
-(void)computeStyle;
-(void)dealloc;
-(void)setStyle:(id)arg1 ;
-(void)undo;
-(void)redo;
-(id)style;
-(void)commit;
-(id)info;
-(void)setInfo:(id)arg1 ;
-(bool)process;
@end

