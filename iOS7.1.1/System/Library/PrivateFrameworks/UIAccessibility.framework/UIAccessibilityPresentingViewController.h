/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIWindow;

@interface UIAccessibilityPresentingViewController : UIViewController {

	UIWindow* _presentationWindow;

}
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(/*^block*/ id)arg3 ;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_voiceOverStatusChanged;
-(void)_cleanUpPresentationWindow;
@end

