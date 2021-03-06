/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CalPreferences, NSString, NSArray;

@interface CalFoundationPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (nonatomic,readonly) char logAutoFlush; 
@property (nonatomic,readonly) char logEmitUserNotifications; 
@property (nonatomic,readonly) NSString * logFilePath; 
@property (nonatomic,readonly) NSArray * logSimpleConfiguration; 
+(id)shared;
-(id)init;
-(char)logAutoFlush;
-(char)logEmitUserNotifications;
-(NSArray *)logSimpleConfiguration;
-(NSString *)logFilePath;
@end

