/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <Calculator/Calculator-Structs.h>
@class NSMutableString, NSString;

@interface Computation : NSObject {

	NSMutableString* _computationString;
	NSString* _displayString;
	NSRange _selectionRange;

}

@property (nonatomic,readonly) NSString * displayString;              //@synthesize displayString=_displayString - In the implementation block
-(id)currentResult;
-(BOOL)shouldShowResult;
-(NSRange)rangeOfSelectedOperand;
-(NSRange)selectOperandAtDisplayIndex:(unsigned)arg1 ;
-(void)deselectOperand;
-(void)replaceDigit:(unsigned)arg1 ;
-(void)insertDigit:(unsigned)arg1 ;
-(void)addDigit:(unsigned)arg1 ;
-(void)insertDecimal;
-(void)addDecimal;
-(void)addOperator:(id)arg1 ;
-(void)deleteFromSelection;
-(void)deleteFromEnd;
-(id)initWithStartingValue:(id)arg1 ;
-(void)_updateDisplayString;
-(id)_displayifyString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)displayString;
@end

