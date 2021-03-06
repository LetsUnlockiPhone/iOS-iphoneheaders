/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:24:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SPLocalServerProtocol <NSObject>
@required
-(void)setLogLevel:(id)arg1;
-(void)fetchInstalledGlancesWithCompletion:(/*^block*/id)arg1;
-(void)installAllApplicationsForProcessWithIdentifier:(id)arg1;
-(void)cancelPendingInstallations;
-(void)installApplicationWithIdentifier:(id)arg1 installer:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeApplicationWithIdentifier:(id)arg1 installer:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)showUserNotification:(int)arg1 applicationName:(id)arg2;
-(void)hideUserNotification;
-(void)wakeExtensionForWatchApp:(id)arg1;
-(void)installProvisioningProfileWithName:(id)arg1 profileData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setAlwaysInstall:(id)arg1;
-(void)getAlwaysInstallWithCompletion:(/*^block*/id)arg1;
-(void)fetchInstalledApplicationsWithCompletion:(/*^block*/id)arg1;

@end

