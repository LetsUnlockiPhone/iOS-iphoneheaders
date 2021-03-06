/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol RUSignInViewControllerDelegate;
@class SKUICircleProgressIndicator, UILabel, UITextField, UIBarButtonItem, UIButton, UITapGestureRecognizer, MPUShapeView, NSString;

@interface RUSignInViewController : UIViewController <UIGestureRecognizerDelegate, UITextFieldDelegate> {

	int _accountChangeIgnoreCount;
	SKUICircleProgressIndicator* _activityIndicatorView;
	UILabel* _appleIDTitleLabel;
	UITextField* _appleIDTextField;
	UIBarButtonItem* _cancelBarButtonItem;
	UIButton* _continueButton;
	UIButton* _createAccountButton;
	UITapGestureRecognizer* _dismissGestureRecognizer;
	MPUShapeView* _entryContentView;
	UIButton* _forgotPasswordButton;
	char _isAuthenticating;
	char _isLoading;
	CGRect _keyboardFrame;
	UILabel* _loadingLabel;
	UILabel* _passwordTitleLabel;
	UITextField* _passwordTextField;
	UILabel* _titleLabel;
	id<RUSignInViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RUSignInViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelAction:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<RUSignInViewControllerDelegate>)arg1 ;
-(id<RUSignInViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)_keyboardWillChangeFrameNotification:(id)arg1 ;
-(void)_dismissKeyboardAction:(id)arg1 ;
-(void)_textFieldDidChangeAction:(id)arg1 ;
-(void)_continueAction:(id)arg1 ;
-(void)_forgotPasswordAction:(id)arg1 ;
-(void)_createAccountAction:(id)arg1 ;
-(void)_updateAccountRelatedControls;
-(void)_updateContinueButtonVisibilityAnimated:(char)arg1 ;
-(void)_setLoading:(char)arg1 ;
-(void)_beginIgnoringAccountChanges;
-(void)_endIgnoringAccountChanges;
-(void)resetFakeLoadingState;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(void)_keyboardWillHideNotification:(id)arg1 ;
@end

