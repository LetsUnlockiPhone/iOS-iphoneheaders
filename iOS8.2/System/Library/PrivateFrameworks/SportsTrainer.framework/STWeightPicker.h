/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsTrainer/SportsTrainer-Structs.h>
#import <UIKit/UIPickerView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSString;

@interface STWeightPicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate> {

	int _selectedWeightUnit;
	float _actualWeight;
	id _weightPickerDelegate;

}

@property (assign,nonatomic) id<STWeightPickerDelegate> weightPickerDelegate;              //@synthesize weightPickerDelegate=_weightPickerDelegate - In the implementation block
@property (nonatomic,readonly) int selectedWeightUnit;                                     //@synthesize selectedWeightUnit=_selectedWeightUnit - In the implementation block
@property (assign,nonatomic) float weightInLbs; 
@property (nonatomic,readonly) float weightInKg; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)lbsForKg:(float)arg1 ;
+(float)kgForLbs:(float)arg1 ;
+(id)weightFormatter;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)pickerImageNamePrefix;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(float)_weightForRow:(int)arg1 ;
-(void)setWeightInLbs:(float)arg1 animated:(char)arg2 ;
-(float)weightInKg;
-(void)saveCurrentWeight;
-(float)_weightFractionForRow:(int)arg1 ;
-(id<STWeightPickerDelegate>)weightPickerDelegate;
-(void)setWeightPickerDelegate:(id<STWeightPickerDelegate>)arg1 ;
-(int)selectedWeightUnit;
-(float)weightInLbs;
-(void)setWeightInLbs:(float)arg1 ;
@end
