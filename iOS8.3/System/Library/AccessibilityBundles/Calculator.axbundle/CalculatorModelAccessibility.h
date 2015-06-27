/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:34:57 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/Calculator.axbundle/Calculator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calculator/__CalculatorModelAccessibility_super.h>

@class AXTimer;

@interface CalculatorModelAccessibility : __CalculatorModelAccessibility_super

@property (nonatomic,retain) AXTimer * speakResultTimer; 
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)setSpeakResultTimer:(AXTimer *)arg1 ;
-(char)_accessibilityShouldEchoDisplayValueAfterKeyPress:(unsigned)arg1 ;
-(AXTimer *)speakResultTimer;
-(void)_setDisplayValue:(id)arg1 userEntered:(char)arg2 ;
-(void)dealloc;
-(void)buttonPressed:(unsigned)arg1 ;
@end
