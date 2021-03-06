/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBLockScreenViewDelegate <NSObject>
@required
-(char)lockScreenViewIsCurrentlyBeingDisplayed;
-(char)wantsToShowStatusBarTime;
-(char)shouldShowSlideToUnlockTextImmediately;
-(void)removeCoordinatedPresentingController:(id)arg1;
-(void)addCoordinatedPresentingController:(id)arg1;
-(void)lockScreenView:(id)arg1 didScrollToPage:(int)arg2;
-(char)isAllowingWallpaperBlurUpdates;
-(void)lockScreenView:(id)arg1 didEndScrollingOnPage:(int)arg2;
-(void)lockScreenViewDidBeginScrolling:(id)arg1;
-(char)lockScreenViewPhonePluginIsActive;
-(void)lockScreenViewDidScrollWithNewScrollPercentage:(float)arg1 tracking:(char)arg2;
-(void)lockScreenViewWillEndDraggingWithPercentScrolled:(float)arg1 percentScrolledVelocity:(float)arg2 targetScrollPercentage:(float)arg3;
-(id)effectiveCustomSlideToUnlockText;

@end

