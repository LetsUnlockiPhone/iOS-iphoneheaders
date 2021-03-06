/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>

@class UIView;

@interface SBUIStarkStartupAnimation : SBUIStarkScreenAnimationController {

	UIView* _fromLockoutView;

}

@property (nonatomic,retain,readonly) UIView * fromLockoutView;              //@synthesize fromLockoutView=_fromLockoutView - In the implementation block
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(UIView *)fromLockoutView;
-(void)_cancelAnimation;
-(id)initFromLockoutView:(id)arg1 starkScreenController:(id)arg2 ;
-(id)initWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3 ;
-(void)dealloc;
-(void)beginAnimation;
@end

