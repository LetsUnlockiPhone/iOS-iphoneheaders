/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:07:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegSignInController.h>

@class CNFRegSigninLearnMoreView;

@interface CNFRegSplashSignInController : CNFRegSignInController {

	CNFRegSigninLearnMoreView* _signInView;

}
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)passwordTextField;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)specifierList;
-(void)_setFieldsEnabled:(char)arg1 animated:(char)arg2 ;
-(void)setUsernameText:(id)arg1 ;
-(id)usernameTextField;
-(id)_existingLearnMoreViewForSpecifier:(id)arg1 ;
-(id)_existingLearnMoreViewForSection:(int)arg1 ;
-(char)usernameIsEmpty;
-(char)passwordIsEmpty;
-(void)setPasswordText:(id)arg1 ;
@end

