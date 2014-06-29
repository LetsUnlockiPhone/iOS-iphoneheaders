/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIFullscreenAnimationView.h>

@class UIView;

@interface SBUISlideAppTransitionView : SBUIFullscreenAnimationView {

	UIView* _fromView;
	UIView* _toView;

}
-(void)beginTransitionWithDuration:(double)arg1 delay:(double)arg2 ;
-(void)appSlideAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)endTransition;
-(void)beginTransition;
-(void)dealloc;
-(void)setToView:(id)arg1 ;
-(void)setFromView:(id)arg1 ;
@end
