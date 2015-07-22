/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression {

	int _fontStyle;

}

@property (nonatomic,readonly) int fontStyle;              //@synthesize fontStyle=_fontStyle - In the implementation block
-(BOOL)isNumber;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 isPartOfWord:(BOOL)arg3 ;
-(BOOL)isNaturalSuperscript;
-(BOOL)canFormWordStartingWithExpression:(id)arg1 ;
-(BOOL)_isPrime;
-(id)mathMLString;
-(int)fontStyle;
@end
