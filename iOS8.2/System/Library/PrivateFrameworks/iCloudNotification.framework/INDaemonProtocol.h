/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/ind
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol INDaemonProtocol <NSObject>
@required
-(void)registerAccountWithID:(id)arg1 foriCloudNotificationsWithReason:(unsigned)arg2 completion:(/*^block*/id)arg3;
-(void)unregisterAccountWithID:(id)arg1 fromiCloudNotificationsWithCompletion:(/*^block*/id)arg2;
-(void)clearAllRegistrationDigestsWithCompletion:(/*^block*/id)arg1;
-(void)diagnosticReportWithCompletion:(/*^block*/id)arg1;

@end

