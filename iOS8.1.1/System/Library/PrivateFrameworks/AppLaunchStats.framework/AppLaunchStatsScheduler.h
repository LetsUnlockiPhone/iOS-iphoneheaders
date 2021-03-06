/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <AppLaunchStats/DuetLoggerProtocol.h>
#import <AppLaunchStats/DuetSaveAndRestore.h>

@class AppLaunchStatsState, NSDate, NSRunLoop, PCPersistentTimer;

@interface AppLaunchStatsScheduler : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {

	BOOL usefulDate;
	/*^block*/id theCallback;
	AppLaunchStatsState* aplsState;
	long long timeZoneSecondsFromGMT;
	NSDate* fireWakeupDate;
	NSDate* startDate;
	NSRunLoop* aplsRunloop;
	PCPersistentTimer* pcpTimer;

}
-(void)restore:(id)arg1 ;
-(void)timerFired:(id)arg1 ;
-(void)save:(id)arg1 ;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)checkTimeZone;
-(void)programTimer;
-(id)init:(id)arg1 withRunLoop:(id)arg2 withCallback:(/*^block*/id)arg3 ;
-(void)generateFireDates;
@end

