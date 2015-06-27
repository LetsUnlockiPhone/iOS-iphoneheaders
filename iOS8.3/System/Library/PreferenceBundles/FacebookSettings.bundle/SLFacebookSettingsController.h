/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:57:01 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/SLSettingsController.h>
#import <FacebookSettings/SLFacebookRegistrationBuddyDelegate.h>
#import <FacebookSettings/SLFacebookLoginInfoViewControllerDelegate.h>
#import <FacebookSettings/SLFacebookContactUpaterDelegate.h>

@protocol OS_dispatch_queue;
@class PSSpecifier, ACAccount, ACAccountType, NSObject, NSString, PSSetupController, SLFacebookUpdateContactsFooterView, SLFacebookRegistrationBuddy, SLFacebookContactUpdater, UIAlertView, SLNetworkReachabilityWarning, NSDictionary;

@interface SLFacebookSettingsController : SLSettingsController <SLFacebookRegistrationBuddyDelegate, SLFacebookLoginInfoViewControllerDelegate, SLFacebookContactUpaterDelegate> {

	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _updateContactsSpecifier;
	ACAccount* _account;
	ACAccountType* _facebookAccountType;
	NSObject*<OS_dispatch_queue> _accountRefreshQueue;
	NSString* _email;
	NSString* _password;
	PSSetupController* _loginInfoViewControllerWrapper;
	SLFacebookUpdateContactsFooterView* _updateContactsFooterView;
	SLFacebookRegistrationBuddy* _registrationBuddy;
	SLFacebookContactUpdater* _contactUpdater;
	UIAlertView* _appInstallAlert;
	char _shouldPresentSignInInfo;
	char _userWantsToMergeContacts;
	char _isSavingNewAccount;
	SLNetworkReachabilityWarning* _networkWarning;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _accessList;
	int _mode;

}

@property (assign,nonatomic) int mode;                              //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_deleteButtonTapped:(id)arg1 ;
-(id)_specifierForAccount:(id)arg1 ;
-(void)_handleAccountAuthenticationWithResult:(char)arg1 error:(id)arg2 ;
-(void)_showAppDownloadAlert;
-(void)_cancelUpdateContactsTapped:(id)arg1 ;
-(void)_confirmAccountDeletion;
-(void)contactUpdater:(id)arg1 didFinishUpdatingContacts:(int)arg2 ;
-(void)contactUpdater:(id)arg1 didUpdateProgress:(float)arg2 ;
-(id)_accessList;
-(char)_updateViewMode;
-(id)_networkWarning;
-(id)_facebookApp;
-(id)_loginSpecifiers;
-(void)_showErrorMessage:(id)arg1 withTitle:(id)arg2 ;
-(char)_confirmContactsMerge;
-(id)presentingViewControllerforRegistrationBuddy:(id)arg1 ;
-(void)registrationBuddyDidCancel:(id)arg1 ;
-(void)registrationBuddy:(id)arg1 didFailWithErrorCode:(int)arg2 ;
-(void)registrationBuddy:(id)arg1 didCompleteWithUsername:(id)arg2 password:(id)arg3 ;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_loadFreshSpecifiers;
-(id)_installFacebookSpecifiers;
-(id)_specifiersForNoAccountMode;
-(id)_specifiersForAccountMode;
-(id)_specifiersForVerificationMode;
-(id)_specifiersForMergingContacts;
-(id)_facebookAccountType;
-(void)_signInButtonSpecifierTapped:(id)arg1 ;
-(id)_learnMoreLinkGroupSpecifier;
-(id)_createNewAccountSpecifier;
-(id)_dataclassSpecifiers;
-(id)_authorizedAppsListSpecifiers;
-(void)_updateContactsTapped:(id)arg1 ;
-(char)_isFacebookParentalRestrictionEnabled;
-(void)_setDataclassEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isDataclassEnabledWithSpecifier:(id)arg1 ;
-(void)_setAppAllowedAccess:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isAppAllowedAccountAccessWithSpecifier:(id)arg1 ;
-(id)_facebookAppSettingsSpecifier;
-(void)_learnMoreLinkButtonTapped:(id)arg1 ;
-(void)_fetchNameForAccount:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_presentLegalPrompt;
-(void)_authenticateAndAddAccount;
-(void)_dismissLegalPrompt;
-(void)loginInfoViewController:(id)arg1 userDidProvideConsent:(char)arg2 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)navigationItem;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)_willEnterForeground:(id)arg1 ;
-(id)_passwordSpecifier;
-(void)appInstallerWillStart:(id)arg1 ;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_updateDoneButton;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)_createNewAccountButtonTapped:(id)arg1 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(void)_updateSignInButton;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)specifiers;
-(void)returnPressedAtEnd;
-(char)shouldReloadSpecifiersOnResume;
@end
