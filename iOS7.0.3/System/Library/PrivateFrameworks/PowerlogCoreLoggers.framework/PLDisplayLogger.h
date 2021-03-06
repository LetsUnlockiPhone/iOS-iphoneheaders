/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
#import <PowerlogLoggerSupport/PLLogger.h>

@class NSNumber, NSDate, NSDictionary;

@interface PLDisplayLogger : PLLogger {

	IONotificationPortRef ioNotifyPort;
	unsigned notificationRef;
	unsigned frameBufferNotificationRef;
	unsigned backlightService;
	IOMobileFramebufferRef framebufferRef;
	IOHIDEventSystemClientRef _HIDSystemClient;
	IOHIDServiceClientRef _ALSPlugin;
	NSNumber* _mieEnabled;
	BOOL _shouldLog;
	BOOL _backlightEnabled;
	double _brightness;
	double _userCommittedBrightness;
	BOOL _previousBacklightEnabled;
	unsigned multitouchService;
	NSDate* displayOffTimeStamp;

}

@property (nonatomic,readonly) NSDictionary * displayParameters; 
@property (nonatomic,retain) NSNumber * mieEnabled;                           //@synthesize mieEnabled=_mieEnabled - In the implementation block
@property (assign,nonatomic) BOOL backlightEnabled;                           //@synthesize backlightEnabled=_backlightEnabled - In the implementation block
@property (assign,nonatomic) double brightness;                               //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) double userCommittedBrightness;                  //@synthesize userCommittedBrightness=_userCommittedBrightness - In the implementation block
-(void)dealloc;
-(id)init;
-(void)log;
-(void)setBrightness:(double)arg1 ;
-(double)brightness;
-(void)logALSCurves;
-(id)displayParameters;
-(void)setBacklightEnabled:(BOOL)arg1 ;
-(void)setMieEnabled:(id)arg1 ;
-(BOOL)backlightEnabled;
-(id)mieEnabled;
-(id)getReadableTouchState:(id)arg1 ;
-(void)setUserCommittedBrightness:(double)arg1 ;
-(double)userCommittedBrightness;
@end

