/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <RadioUI/RUSignInViewControllerDelegate.h>
#import <RadioUI/RUTermsViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol RUWelcomeViewControllerDelegate;
@class SKUICircleProgressIndicator, NSDate, CADisplayLink, UIAlertView, UIButton, UILabel, NSMutableArray, UICollectionView, RUSignInViewController, RUTermsViewController, _RUWelcomeTicker;

@interface RUWelcomeViewController : UIViewController <RUSignInViewControllerDelegate, RUTermsViewControllerDelegate, UIAlertViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	SKUICircleProgressIndicator* _activityIndicatorView;
	NSDate* _autoRetryMinimumDate;
	CADisplayLink* _displayLink;
	UIAlertView* _failedAlertView;
	bool _isOptingIn;
	double _lastTimestamp;
	UIButton* _learnMoreButton;
	UILabel* _loadingLabel;
	NSMutableArray* _optInCompletionHandlers;
	UICollectionView* _scrollingStackCollectionView;
	UIButton* _signInButton;
	RUSignInViewController* _signInViewController;
	RUTermsViewController* _termsViewController;
	_RUWelcomeTicker* _ticker;
	UILabel* _titleLabel;
	bool _displayingLoading;
	<RUWelcomeViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <RUWelcomeViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDisplayingLoading,nonatomic) bool displayingLoading;                //@synthesize displayingLoading=_displayingLoading - In the implementation block
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void).cxx_destruct;
-(void)setDisplayingLoading:(bool)arg1 ;
-(bool)isDisplayingLoading;
-(void)attemptOptInWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)_sortCollectionCells:(id)arg1 byDistanceFromCenter:(CGPoint)arg2 ;
-(void)signInViewController:(id)arg1 didCompleteWithAuthenticateResponse:(id)arg2 ;
-(void)termsViewController:(id)arg1 didAcceptTerms:(bool)arg2 ;
-(void)_layoutForOrientation:(long long)arg1 ;
-(void)_learnMoreAction:(id)arg1 ;
-(void)_updateSignInButtonTitle;
-(void)_displayLinkAction:(id)arg1 ;
-(void)_scrollWithCurrentTimestemp:(double)arg1 ;
-(void)_attemptOptForReason:(long long)arg1 allowAuthentication:(bool)arg2 ;
-(void)_completeWithStatus:(long long)arg1 didOptIn:(bool)arg2 retryInterval:(double)arg3 ;
-(id)_stackImageNames;
-(bool)_canAutomaticallyOptIn;
-(void)_endScrollingIfNecessary;
-(void)_presentSignInViewController;
-(void)_optInWithActiveAccountWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_checkAcceptedTermsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_resumeScrollingIfNecessary;
-(void)_createEndScrollingAnimation;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(void)_signInAction:(id)arg1 ;
@end

