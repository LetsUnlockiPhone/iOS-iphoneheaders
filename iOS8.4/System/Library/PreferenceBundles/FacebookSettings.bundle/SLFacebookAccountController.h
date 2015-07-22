/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, NSString, SLFacebookSession, PSSpecifier, UIBarButtonItem;

@interface SLFacebookAccountController : ACUIViewController {

	ACAccount* _account;
	NSString* _password;
	SLFacebookSession* _session;
	PSSpecifier* _fullNameSpecifier;
	UIBarButtonItem* _saveButton;
	BOOL _userWantsToMergeContacts;

}
-(void)_deleteButtonTapped:(id)arg1 ;
-(id)_loginSpecifiers;
-(id)usernameWithSpecifier:(id)arg1 ;
-(void)_didEditPasswordField:(id)arg1 ;
-(void)_authenticateAccountIfNeeded;
-(void)_showErrorMessage:(id)arg1 withTitle:(id)arg2 ;
-(BOOL)_confirmContactsMerge;
-(void)setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)passwordWithSpecifier:(id)arg1 ;
-(id)_fullNameSpecifier;
-(id)fullNameWithSpecifier:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(void)doneButtonTapped:(id)arg1 ;
-(id)specifiers;
@end
