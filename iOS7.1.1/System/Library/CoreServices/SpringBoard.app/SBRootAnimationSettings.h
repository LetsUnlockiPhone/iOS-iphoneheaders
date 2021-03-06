/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class SBReducedMotionFadeSettings, SBUnlockSettings, SBCenterAppLaunchSettings, SBCenterAppSuspendSettings, SBCrossfadeAppLaunchSettings, SBCrossfadeAppSuspendSettings, SBFolderOpenSettings, SBFolderCloseSettings;

@interface SBRootAnimationSettings : _UISettings {

	SBReducedMotionFadeSettings* _reducedMotionSettings;
	SBUnlockSettings* _unlockSettings;
	SBCenterAppLaunchSettings* _centerLaunchSettings;
	SBCenterAppSuspendSettings* _centerSuspendSettings;
	SBCrossfadeAppLaunchSettings* _crossfadeLaunchSettings;
	SBCrossfadeAppSuspendSettings* _crossfadeSuspendSettings;
	SBFolderOpenSettings* _folderOpenSettings;
	SBFolderCloseSettings* _folderCloseSettings;

}

@property (retain) SBReducedMotionFadeSettings * reducedMotionSettings;                   //@synthesize reducedMotionSettings=_reducedMotionSettings - In the implementation block
@property (retain) SBUnlockSettings * unlockSettings;                                     //@synthesize unlockSettings=_unlockSettings - In the implementation block
@property (retain) SBCenterAppLaunchSettings * centerLaunchSettings;                      //@synthesize centerLaunchSettings=_centerLaunchSettings - In the implementation block
@property (retain) SBCenterAppSuspendSettings * centerSuspendSettings;                    //@synthesize centerSuspendSettings=_centerSuspendSettings - In the implementation block
@property (retain) SBCrossfadeAppLaunchSettings * crossfadeLaunchSettings;                //@synthesize crossfadeLaunchSettings=_crossfadeLaunchSettings - In the implementation block
@property (retain) SBCrossfadeAppSuspendSettings * crossfadeSuspendSettings;              //@synthesize crossfadeSuspendSettings=_crossfadeSuspendSettings - In the implementation block
@property (retain) SBFolderOpenSettings * folderOpenSettings;                             //@synthesize folderOpenSettings=_folderOpenSettings - In the implementation block
@property (retain) SBFolderCloseSettings * folderCloseSettings;                           //@synthesize folderCloseSettings=_folderCloseSettings - In the implementation block
+(id)settingsControllerModule;
-(id)reducedMotionSettings;
-(void)setReducedMotionSettings:(id)arg1 ;
-(id)unlockSettings;
-(void)setUnlockSettings:(id)arg1 ;
-(id)centerLaunchSettings;
-(void)setCenterLaunchSettings:(id)arg1 ;
-(id)centerSuspendSettings;
-(void)setCenterSuspendSettings:(id)arg1 ;
-(id)crossfadeLaunchSettings;
-(void)setCrossfadeLaunchSettings:(id)arg1 ;
-(id)crossfadeSuspendSettings;
-(void)setCrossfadeSuspendSettings:(id)arg1 ;
-(id)folderOpenSettings;
-(void)setFolderOpenSettings:(id)arg1 ;
-(id)folderCloseSettings;
-(void)setFolderCloseSettings:(id)arg1 ;
-(void)setDefaultValues;
@end

