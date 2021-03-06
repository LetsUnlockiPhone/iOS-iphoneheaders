/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBStatusBarStateProvider.h>
#import <UIKit/UIStatusBarStateObserver.h>

@class NSString;

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver> {

	char _overridePercent;
	char _killActivity;
	char _itemIsDisabled[25];
	char _itemWasDisabled[25];
	char _timeEnabled;
	char _timeCloaked;
	char _allButBatteryCloaked;
	char _telephonyAndBluetoothCloaked;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)enableTime:(char)arg1 ;
-(void)setTimeCloaked:(char)arg1 ;
-(void)setTelephonyAndBluetoothItemsCloaked:(char)arg1 ;
-(void)enableTime:(char)arg1 crossfade:(char)arg2 crossfadeDuration:(double)arg3 ;
-(char)isTimeEnabled;
-(void)_updateDisabledItems;
-(void)setAllItemsExceptBatteryCloaked:(char)arg1 ;
-(char)_shouldPostForVisitedItem:(int)arg1 withUpdates:(char)arg2 toAggregatorData:(const SCD_Struct_SB37*)arg3 ;
-(void)_composePostDataFromAggregatorData:(SCD_Struct_SB37*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const SCD_Struct_SB37*)arg2 withActions:(int)arg3 ;
@end

