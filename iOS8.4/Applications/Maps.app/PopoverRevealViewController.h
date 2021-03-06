/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIViewController;

@interface PopoverRevealViewController : UIViewController {

	UIViewController* _rootViewController;
	UIViewController* _revealedViewController;
	char _animating;

}

@property (nonatomic,retain) UIViewController * rootViewController;                  //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) UIViewController * revealedViewController;              //@synthesize revealedViewController=_revealedViewController - In the implementation block
-(UIViewController *)revealedViewController;
-(void)dismissRevealedViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)revealViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRevealedViewController:(UIViewController *)arg1 ;
-(id)navigationItem;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)viewDidLoad;
-(id)initWithRootViewController:(id)arg1 ;
@end

