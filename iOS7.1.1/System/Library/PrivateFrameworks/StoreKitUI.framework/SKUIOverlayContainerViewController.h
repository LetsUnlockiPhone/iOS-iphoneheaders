/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIControl, UITapGestureRecognizer, NSMutableArray, NSArray;

@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate> {

	UIControl* _backstopView;
	bool _isAdjustingViewsForDismiss;
	long long _selectedViewControllerIndex;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSMutableArray* _viewControllers;

}

@property (nonatomic,readonly) UIControl * backstopControl; 
@property (nonatomic,readonly) NSArray * viewControllers;                //@synthesize viewControllers=_viewControllers - In the implementation block
-(void)dealloc;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(bool)shouldAutomaticallyForwardAppearanceMethods;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)viewControllers;
-(void).cxx_destruct;
-(void)_tapAction:(id)arg1 ;
-(void)showViewControllers:(id)arg1 ;
-(void)showViewController:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)dismissWithFadeTransitionCompletionBlock:(/*^block*/ id)arg1 ;
-(void)dismissWithFlipTransition:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(id)backstopControl;
-(void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)_frameAction:(id)arg1 ;
-(void)_removeChildren;
-(void)_fadeInViewController:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_slideInViewController:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_pushViewController:(id)arg1 ;
-(void)_positionViewControllersForOrientation:(long long)arg1 ;
-(CGRect)_frameToCenterViewController:(id)arg1 ;
-(id)_viewControllerForPoint:(CGPoint)arg1 ;
-(long long)_indexOfViewControllerForPoint:(CGPoint)arg1 ;
-(void)_popViewControllers;
-(double)_overlaySpacingForOrientation:(long long)arg1 ;
-(id)_selectedViewController;
@end

