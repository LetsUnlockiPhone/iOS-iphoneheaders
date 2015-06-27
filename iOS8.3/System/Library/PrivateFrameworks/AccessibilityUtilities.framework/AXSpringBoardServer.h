/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:32:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXServer.h>

@class AXAccessQueue, NSMutableArray, NSMutableDictionary;

@interface AXSpringBoardServer : AXServer {

	AXAccessQueue* _accessQueue;
	/*^block*/id _currentAlertHandler;
	NSMutableArray* _gestureOverrides;
	NSMutableArray* _actionHandlers;
	NSMutableDictionary* _reachabilityHandlers;

}

@property (nonatomic,retain) AXAccessQueue * accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,copy) id currentAlertHandler;                                    //@synthesize currentAlertHandler=_currentAlertHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * gestureOverrides;                       //@synthesize gestureOverrides=_gestureOverrides - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionHandlers;                         //@synthesize actionHandlers=_actionHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * reachabilityHandlers;              //@synthesize reachabilityHandlers=_reachabilityHandlers - In the implementation block
+(id)server;
-(void)gaxUnlockDevice;
-(id)_gax_axSpringBoardServerInstanceDelegate;
-(void)gaxBackboardStateDidChange:(SCD_Struct_AX4)arg1 ;
-(void)gaxFrontmostAppDidCheckIn:(id)arg1 ;
-(char)gaxIsSystemAppHostingFacetimeCall:(int*)arg1 ;
-(void)gaxUpdateStateOfHostedApplicationWithIdentifier:(id)arg1 scaleFactorNumber:(id)arg2 centerStringRepresentation:(id)arg3 animationDurationNumber:(id)arg4 ;
-(void)gaxLaunchApplication:(id)arg1 withConfiguration:(unsigned)arg2 ;
-(id)gaxPrepareForTransitionToWorkspaceWithAppID:(id)arg1 ;
-(void)gaxDidChangeMode:(unsigned)arg1 shouldAcquireLockScreenAssertion:(char)arg2 gaxState:(SCD_Struct_AX4)arg3 ;
-(void)gaxEndRequiringWallpaper;
-(char)gaxIsWebAppAndForegroundRunning:(id)arg1 ;
-(void)activateApp:(id)arg1 ;
-(void)beginRequiringWallpaper;
-(id)snapshotInCallServiceRemoteView;
-(id)mainScreenContextHostManagerForApplicationWithIdentifier:(id)arg1 ;
-(id)hostViewForApplicationContextHostManager:(id)arg1 enableAndOrderFront:(char)arg2 ;
-(void)disableHostingForApplicationContextHostManager:(id)arg1 withHostView:(id)arg2 ;
-(void)animateWallpaperStyleToNormal;
-(void)updateLockAndIdleTimers;
-(void)animateWallpaperStyleToOriginal;
-(char)applicationWithIdentifierIsTranslucent:(id)arg1 ;
-(id)appNameForDisplayID:(id)arg1 ;
-(id)appIconForBundleID:(id)arg1 format:(int)arg2 ;
-(void)quitTopApplication;
-(void)gaxUnlockDevice;
-(id)_gax_axSpringBoardServerInstanceDelegate;
-(void)gaxBackboardStateDidChange:(SCD_Struct_AX4)arg1 ;
-(void)gaxFrontmostAppDidCheckIn:(id)arg1 ;
-(char)gaxIsSystemAppHostingFacetimeCall:(int*)arg1 ;
-(void)gaxUpdateStateOfHostedApplicationWithIdentifier:(id)arg1 scaleFactorNumber:(id)arg2 centerStringRepresentation:(id)arg3 animationDurationNumber:(id)arg4 ;
-(void)gaxLaunchApplication:(id)arg1 withConfiguration:(unsigned)arg2 ;
-(id)gaxPrepareForTransitionToWorkspaceWithAppID:(id)arg1 ;
-(void)gaxDidChangeMode:(unsigned)arg1 shouldAcquireLockScreenAssertion:(char)arg2 gaxState:(SCD_Struct_AX4)arg3 ;
-(void)gaxEndRequiringWallpaper;
-(char)gaxIsWebAppAndForegroundRunning:(id)arg1 ;
-(void)activateApp:(id)arg1 ;
-(void)beginRequiringWallpaper;
-(id)snapshotInCallServiceRemoteView;
-(id)mainScreenContextHostManagerForApplicationWithIdentifier:(id)arg1 ;
-(id)hostViewForApplicationContextHostManager:(id)arg1 enableAndOrderFront:(char)arg2 ;
-(void)disableHostingForApplicationContextHostManager:(id)arg1 withHostView:(id)arg2 ;
-(void)animateWallpaperStyleToNormal;
-(void)updateLockAndIdleTimers;
-(void)animateWallpaperStyleToOriginal;
-(char)applicationWithIdentifierIsTranslucent:(id)arg1 ;
-(id)appNameForDisplayID:(id)arg1 ;
-(id)appIconForBundleID:(id)arg1 format:(int)arg2 ;
-(void)quitTopApplication;
-(void)gaxUnlockDevice;
-(id)_gax_axSpringBoardServerInstanceDelegate;
-(void)gaxBackboardStateDidChange:(SCD_Struct_AX4)arg1 ;
-(void)gaxFrontmostAppDidCheckIn:(id)arg1 ;
-(char)gaxIsSystemAppHostingFacetimeCall:(int*)arg1 ;
-(void)gaxUpdateStateOfHostedApplicationWithIdentifier:(id)arg1 scaleFactorNumber:(id)arg2 centerStringRepresentation:(id)arg3 animationDurationNumber:(id)arg4 ;
-(void)gaxLaunchApplication:(id)arg1 withConfiguration:(unsigned)arg2 ;
-(id)gaxPrepareForTransitionToWorkspaceWithAppID:(id)arg1 ;
-(void)gaxDidChangeMode:(unsigned)arg1 shouldAcquireLockScreenAssertion:(char)arg2 gaxState:(SCD_Struct_AX4)arg3 ;
-(void)gaxEndRequiringWallpaper;
-(char)gaxIsWebAppAndForegroundRunning:(id)arg1 ;
-(void)activateApp:(id)arg1 ;
-(void)beginRequiringWallpaper;
-(id)snapshotInCallServiceRemoteView;
-(id)mainScreenContextHostManagerForApplicationWithIdentifier:(id)arg1 ;
-(id)hostViewForApplicationContextHostManager:(id)arg1 enableAndOrderFront:(char)arg2 ;
-(void)disableHostingForApplicationContextHostManager:(id)arg1 withHostView:(id)arg2 ;
-(void)animateWallpaperStyleToNormal;
-(void)updateLockAndIdleTimers;
-(void)animateWallpaperStyleToOriginal;
-(char)applicationWithIdentifierIsTranslucent:(id)arg1 ;
-(id)appNameForDisplayID:(id)arg1 ;
-(id)appIconForBundleID:(id)arg1 format:(int)arg2 ;
-(void)quitTopApplication;
-(char)_shouldValidateEntitlements;
-(char)isScreenLockedWithPasscode:(char*)arg1 ;
-(char)isNotificationCenterVisible;
-(AXAccessQueue *)accessQueue;
-(void)setAccessQueue:(AXAccessQueue *)arg1 ;
-(void)dealloc;
-(id)init;
-(int)activeInterfaceOrientation;
-(char)hasActiveCall;
-(void)setGestureOverrides:(NSMutableArray *)arg1 ;
-(void)setActionHandlers:(NSMutableArray *)arg1 ;
-(void)setReachabilityHandlers:(NSMutableDictionary *)arg1 ;
-(void)setCurrentAlertHandler:(id)arg1 ;
-(id)currentAlertHandler;
-(NSMutableArray *)gestureOverrides;
-(NSMutableDictionary *)reachabilityHandlers;
-(NSMutableArray *)actionHandlers;
-(void)_didConnectToServer;
-(id)_handleReplyResult:(id)arg1 ;
-(id)_handleGestureOverrideResult:(id)arg1 ;
-(id)_handleActionResult:(id)arg1 ;
-(id)_handleReachabilityResult:(id)arg1 ;
-(char)_shouldValidateEntitlements;
-(void)_willClearServer;
-(void)_wasDisconnectedFromClient;
-(void)_didConnectToClient;
-(void)cleanupAlertHandler;
-(void)showAlert:(int)arg1 withHandler:(/*^block*/id)arg2 withData:(id)arg3 ;
-(void)registerSpringBoardActionHandler:(/*^block*/id)arg1 withIdentifierCallback:(/*^block*/id)arg2 ;
-(void)setCancelGestureActivation:(unsigned)arg1 cancelEnabled:(char)arg2 ;
-(void)registerOverrideIntentForGesture:(unsigned)arg1 withHandler:(/*^block*/id)arg2 withIdentifierCallback:(/*^block*/id)arg3 ;
-(void)registerReachabilityHandler:(/*^block*/id)arg1 withIdentifierCallback:(/*^block*/id)arg2 ;
-(id)_serviceName;
-(void)takeScreenshot;
-(void)openAssistiveTouchCustomGestureCreation;
-(void)openSCATCustomGestureCreation;
-(void)openSCATCommonTasks;
-(void)setHearingAidControlVisible:(char)arg1 ;
-(void)startHearingAidServer;
-(int)topEventPidOverride;
-(char)isOrientationLocked;
-(void)setOrientationLocked:(char)arg1 ;
-(void)resetDimTimer;
-(char)isSideSwitchUsedForOrientation;
-(char)isRingerMuted;
-(float)reachabilityOffset;
-(float)volumeLevel;
-(void)hideAlert;
-(void)showAlert:(int)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setShowSpeechPlaybackControls:(char)arg1 ;
-(void)removeActionHandler:(id)arg1 ;
-(void)removeOverrideIntent:(id)arg1 ;
-(void)cancelReachabilityDetection;
-(char)toggleIncomingCall;
-(void)setReachabilityEnabledDuration:(double)arg1 ;
-(void)removeReachabilityHandler:(id)arg1 ;
-(char)isInspectorMinimized;
-(char)isPointInsideAccessibilityInspector:(id)arg1 ;
-(int)activeApplicationOrientation;
-(void)copyStringToPasteboard:(id)arg1 ;
-(char)_shouldDispatchLocally;
-(id)_axSpringBoardServerInstanceDelegate;
-(id)_axSpringBoardServerInstance;
-(void)toggleNotificationCenter;
-(char)_isSystemAppFrontmostExcludingSiri:(char)arg1 ;
-(char)isSystemSleeping;
-(char)isSyncingRestoringResettingOrUpdating;
-(char)areSystemGesturesDisabledNatively;
-(char)areSystemGesturesDisabledByAccessibility;
-(id)installedApps;
-(void)unlockDevice;
-(char)isMediaPlaying;
-(void)pauseMedia;
-(void)resumeMedia;
-(char)hasActiveOrPendingCall;
-(char)hasActiveOrPendingCallOrFaceTime;
-(char)isMakingEmergencyCall;
-(void)showNotificationCenter;
-(void)hideNotificationCenter;
-(char)isControlCenterVisible;
-(char)showNotificationCenter:(char)arg1 ;
-(void)showControlCenter:(char)arg1 ;
-(char)isAppSwitcherVisible;
-(void)openAppSwitcher;
-(void)dismissAppSwitcher;
-(void)openSiri;
-(void)dismissSiri;
-(char)isSiriVisible;
-(char)isSiriTalkingOrListening;
-(void)setSiriIsTalking:(char)arg1 ;
-(void)openVoiceControl;
-(char)isVoiceControlRunning;
-(char)isGuidedAccessActive;
-(char)isSpeakThisTemporarilyDisabled;
-(id)systemAppInfoWithQuery:(unsigned)arg1 ;
-(char)isSystemAppShowingAnAlert;
-(id)focusedAppPID;
-(int)purpleBuddyPID;
-(id)runningAppPIDs;
-(char)isSystemAppFrontmost;
-(char)isSystemAppFrontmostExludingSiri;
-(char)isPurpleBuddyAppFrontmost;
-(char)isSettingsAppFrontmost;
-(id)applicationWithIdentifier:(id)arg1 ;
-(id)focusedAppProcess;
-(id)runningAppProcesses;
-(id)_axSpringBoardServerInstanceIfExists;
-(int)pid;
-(void)setVolume:(float)arg1 ;
@end
