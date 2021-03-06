/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILocalNotification.h>

@class NSDate, NSTimeZone, NSCalendar, NSString, NSData;

@interface UIConcreteLocalNotification : UILocalNotification {

	NSDate* fireDate;
	NSTimeZone* timeZone;
	unsigned repeatInterval;
	NSCalendar* repeatCalendar;
	int totalRepeatCount;
	int remainingRepeatCount;
	NSString* alertBody;
	BOOL hasAction;
	NSString* alertAction;
	NSString* alertLaunchImage;
	NSString* soundName;
	int applicationIconBadgeNumber;
	NSData* userInfoData;
	BOOL hideAlertTitle;
	BOOL allowSnooze;
	int soundType;
	BOOL interruptAudioAndLockDevice;
	BOOL resumeApplicationInBackground;
	BOOL fireNotificationsWhenAppRunning;
	BOOL showAlarmStatusBarItem;
	NSString* customLockSliderLabel;
	NSString* firedNotificationName;
	NSString* snoozedNotificationName;
	BOOL isSystemAlert;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(BOOL)isValid;
-(void)setFireDate:(id)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(void)setRepeatInterval:(unsigned)arg1 ;
-(int)applicationIconBadgeNumber;
-(void)setApplicationIconBadgeNumber:(int)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)userInfo;
-(unsigned)repeatInterval;
-(id)timeZone;
-(void)setTotalRepeatCount:(int)arg1 ;
-(void)setSoundType:(int)arg1 ;
-(void)setRepeatCalendar:(id)arg1 ;
-(void)setRemainingRepeatCount:(int)arg1 ;
-(void)setAlertBody:(id)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(void)setAlertAction:(id)arg1 ;
-(void)setAlertLaunchImage:(id)arg1 ;
-(void)setSoundName:(id)arg1 ;
-(void)_setUserInfoData:(id)arg1 ;
-(void)setHideAlertTitle:(BOOL)arg1 ;
-(void)setAllowSnooze:(BOOL)arg1 ;
-(void)setInterruptAudioAndLockDevice:(BOOL)arg1 ;
-(void)setResumeApplicationInBackground:(BOOL)arg1 ;
-(void)setFireNotificationsWhenAppRunning:(BOOL)arg1 ;
-(void)setShowAlarmStatusBarItem:(BOOL)arg1 ;
-(void)setCustomLockSliderLabel:(id)arg1 ;
-(void)setFiredNotificationName:(id)arg1 ;
-(void)setSnoozedNotificationName:(id)arg1 ;
-(void)setIsSystemAlert:(BOOL)arg1 ;
-(id)fireDate;
-(id)repeatCalendar;
-(int)totalRepeatCount;
-(id)alertBody;
-(BOOL)hasAction;
-(id)alertAction;
-(id)alertLaunchImage;
-(id)soundName;
-(BOOL)hideAlertTitle;
-(BOOL)allowSnooze;
-(int)soundType;
-(BOOL)interruptAudioAndLockDevice;
-(BOOL)resumeApplicationInBackground;
-(BOOL)fireNotificationsWhenAppRunning;
-(BOOL)showAlarmStatusBarItem;
-(id)customLockSliderLabel;
-(id)firedNotificationName;
-(id)snoozedNotificationName;
-(id)nextFireDateForLastFireDate:(id)arg1 ;
-(id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2 ;
-(int)compareFireDates:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(void)clearNonSystemProperties;
-(int)remainingRepeatCount;
-(BOOL)isSystemAlert;
@end

