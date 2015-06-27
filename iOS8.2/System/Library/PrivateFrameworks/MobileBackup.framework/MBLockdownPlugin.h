/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <backupd/MBPlugin.h>

@interface MBLockdownPlugin : NSObject <MBPlugin>
-(id)preparingBackupWithEngine:(id)arg1 ;
-(id)endedBackupWithEngine:(id)arg1 error:(id)arg2 ;
-(id)startingRestoreWithEngine:(id)arg1 ;
-(id)endingRestoreWithEngine:(id)arg1 ;
-(id)endedRestoreWithEngine:(id)arg1 error:(id)arg2 ;
-(id)_setLockdownValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 connection:(lockdown_connectionRef)arg4 ;
-(char)_shouldDisableDeviceRestore;
-(id)_setPurpleBuddyRestoreState:(id)arg1 withEngine:(id)arg2 ;
-(id)_restoreLockdownKeysWithEngine:(id)arg1 ;
@end
