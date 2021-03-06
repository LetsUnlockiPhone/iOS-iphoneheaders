/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:35:56 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GAXSpringboardServer/GAXSpringboardServer-Structs.h>
#import <GAXSpringboardServer/__GAXSpringBoardOverride_super.h>

@interface GAXSpringBoardOverride : __GAXSpringBoardOverride_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_revealSpotlight;
-(void)statusBarReturnActionTap:(GSEventRef)arg1 ;
-(char)_gaxShouldAllowOpeningURL:(id)arg1 ;
-(void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(char)arg4 animating:(char)arg5 activationSettings:(id)arg6 withResult:(/*^block*/id)arg7 ;
-(char)_requestPermissionToOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 ;
-(char)handleEvent:(GSEventRef)arg1 withNewEvent:(id)arg2 ;
-(void)batteryStatusDidChange:(id)arg1 ;
@end

