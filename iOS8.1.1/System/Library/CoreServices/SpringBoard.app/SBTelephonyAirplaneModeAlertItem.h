/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBLaunchAlertItem.h>

@interface SBTelephonyAirplaneModeAlertItem : SBLaunchAlertItem {

	BOOL _wasDeviceLocked;

}

@property (assign,nonatomic) BOOL wasDeviceLocked;              //@synthesize wasDeviceLocked=_wasDeviceLocked - In the implementation block
-(void)setWasDeviceLocked:(BOOL)arg1 ;
-(BOOL)wasDeviceLocked;
-(BOOL)dismissOnLock;
-(BOOL)reappearsAfterLock;
@end

