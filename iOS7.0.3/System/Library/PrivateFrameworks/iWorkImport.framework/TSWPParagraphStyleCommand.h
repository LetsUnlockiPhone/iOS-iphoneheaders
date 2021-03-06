/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSWPTextCommand.h>

@class TSWPParagraphStyle;

@interface TSWPParagraphStyleCommand : TSWPTextCommand {

	TSWPParagraphStyle* _paragraphStyle;
	BOOL _stripCharacterStyles;

}
-(id)initWithStorage:(id)arg1 selection:(id)arg2 paragraphStyle:(id)arg3 stripCharacterStyles:(BOOL)arg4 ;
-(void)doCommit;
-(int)persistenceKind;
-(void)doUndoRedo;
-(void)dealloc;
-(id)actionString;
@end

