/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMLoggingAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMLoggingAgent/IMUserNotificationListener.h>

@class NSMutableDictionary, NSDate;

@interface IMLoggingAgentServer : NSObject <IMUserNotificationListener> {

	NSMutableDictionary* _sessions;
	NSDate* _lastActivity;
	char _pendingInactivityTimer;
	char _automationRunning;

}

@property (nonatomic,readonly) char isRunning; 
+(id)sharedInstance;
-(void)_sessionBecameInactive:(id)arg1 ;
-(void)_noteActivity;
-(void)_serverBecameInactive;
-(void)_setInactivityTimer;
-(void)endAllSessions;
-(id)_sessionForSessionType:(id)arg1 allowCreation:(char)arg2 ;
-(void)_reallyEndSession:(id)arg1 ;
-(void)endSession:(id)arg1 fromSender:(id)arg2 endNow:(char)arg3 ;
-(void)_notePoorNetworkConditions;
-(void)pulseForSession:(id)arg1 forSender:(id)arg2 ;
-(void)beginSession:(id)arg1 fromSender:(id)arg2 beginSessionFlags:(int)arg3 endSessionFlags:(int)arg4 ;
-(void)endSession:(id)arg1 fromSender:(id)arg2 ;
-(void)noteCheckpoint:(id)arg1 forSession:(id)arg2 checkpointTime:(double)arg3 forSender:(id)arg4 ;
-(void)logDescription:(id)arg1 withLog:(id)arg2 forSession:(id)arg3 forSender:(id)arg4 time:(double)arg5 ;
-(void)logCallInfo:(id)arg1 category:(id)arg2 forSession:(id)arg3 forSender:(id)arg4 ;
-(void)addCallMetric:(id)arg1 value:(id)arg2 forSession:(id)arg3 forSender:(id)arg4 ;
-(void)addLogFile:(id)arg1 forSession:(id)arg2 forSender:(id)arg3 forCategory:(id)arg4 ;
-(void)logCallQuality:(id)arg1 withLog:(id)arg2 forSession:(id)arg3 forSender:(id)arg4 ;
-(void)forceNetworkDump;
-(void)performAction:(int)arg1 forSession:(id)arg2 forSender:(id)arg3 peer:(id)arg4 request:(id)arg5 userInfo:(id)arg6 ;
-(void)noteFailureReason:(id)arg1 forSession:(id)arg2 forSender:(id)arg3 ;
-(void)noteEvent:(int)arg1 forSession:(id)arg2 forSender:(id)arg3 ;
-(void)noteInitiator:(id)arg1 forSession:(id)arg2 forSender:(id)arg3 ;
-(void)noteReceiver:(id)arg1 forSession:(id)arg2 forSender:(id)arg3 ;
-(void)log:(id)arg1 level:(int)arg2 category:(id)arg3 sender:(id)arg4 pid:(int)arg5 type:(id)arg6 time:(unsigned long long)arg7 ;
-(void)event:(id)arg1 level:(int)arg2 category:(id)arg3 sender:(id)arg4 pid:(int)arg5 type:(id)arg6 time:(unsigned long long)arg7 ;
-(void)terminate;
-(void)dealloc;
-(id)init;
-(void)start;
-(char)isRunning;
-(void)stop;
-(void)_clearInactivityTimer;
-(void)userNotificationDidFinish:(id)arg1 ;
@end
