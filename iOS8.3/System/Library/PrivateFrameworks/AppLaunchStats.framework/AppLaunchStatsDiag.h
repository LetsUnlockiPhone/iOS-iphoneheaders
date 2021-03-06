/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:37:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AppLaunchStats/AppLaunchStats-Structs.h>
@class NSObject;

@interface AppLaunchStatsDiag : NSObject {

	NSObject*<OS_dispatch_queue> APLSDiagQueue;
	NSObject*<OS_dispatch_source> APLSDiagTimer;
	int diagToken;
	BOOL diagTimerOn;
	BOOL hasTransitionedToCoreDuet;

}

@property (assign) BOOL hasTransitionedToCoreDuet; 
-(id)init;
-(void)dumpDiagnosticIntoFile;
-(void)turnOffDiagnostic;
-(BOOL)checkDuetDiagState;
-(void)turnOnDiagnostic:(long long)arg1 ;
-(void)base64EncodeFile:(const char*)arg1 dumpfile:(_sFILE*)arg2 ;
-(void)initializeDiag:(BOOL)arg1 ;
-(BOOL)hasTransitionedToCoreDuet;
-(void)setHasTransitionedToCoreDuet:(BOOL)arg1 ;
@end

