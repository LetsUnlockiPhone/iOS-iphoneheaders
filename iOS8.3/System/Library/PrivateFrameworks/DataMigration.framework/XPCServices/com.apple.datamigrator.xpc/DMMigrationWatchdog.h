/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:29:30 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/XPCServices/com.apple.datamigrator.xpc/com.apple.datamigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface DMMigrationWatchdog : NSObject {

	NSObject*<OS_dispatch_source> _timer;

}
-(void)_takeStackshot;
-(id)initWithEstimatedMigrationTime:(double)arg1 ;
-(void)cancel;
-(void)resume;
@end

