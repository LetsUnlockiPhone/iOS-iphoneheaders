/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <HealthKitUI/HealthKitUI-Structs.h>
@class _HKMedicalIDData, UIViewController;

@interface HKEmergencyCardTableItem : NSObject {

	BOOL _isInEditMode;
	_HKMedicalIDData* _data;
	UIViewController* _owningViewController;

}

@property (nonatomic,retain) _HKMedicalIDData * data;                                     //@synthesize data=_data - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * owningViewController;              //@synthesize owningViewController=_owningViewController - In the implementation block
@property (nonatomic,readonly) BOOL isInEditMode;                                         //@synthesize isInEditMode=_isInEditMode - In the implementation block
-(id)initInEditMode:(BOOL)arg1 ;
-(void)commitEditing;
-(id)titleForHeader;
-(id)init;
-(id)title;
-(_HKMedicalIDData *)data;
-(void)setData:(_HKMedicalIDData *)arg1 ;
-(long long)numberOfRows;
-(UIEdgeInsets)separatorInset;
-(void)setOwningViewController:(UIViewController *)arg1 ;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(id)titleForFooter;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(id)_dequeueNoValueCellInTableView:(id)arg1 withTitle:(id)arg2 ;
-(UIViewController *)owningViewController;
-(BOOL)isInEditMode;
@end

