/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface LogDumpUtility : NSObject
+(id)getHomeDirPath;
+(BOOL)createDirectoy:(id)arg1 ;
+(id)getDefaultLogDumpPath;
+(void)AddFileToMarco:(id)arg1 logCategory:(int)arg2 ;
+(id)openLogDump:(int)arg1 logNameType:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 marcoLog:(int)arg5 fullFilename:(id*)arg6 ;
+(id)createLogFilename:(int)arg1 logNameType:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 marcoLog:(int)arg5 ;
@end
