/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/SLSettingsController.h>
#import <WeiboSettings/WEAccountCreationDelegate.h>
#import <WeiboSettings/WEPContactUpdaterDelegate.h>

@class ACAccountType, ACAccount, NSArray, NSMutableDictionary, PSSpecifier, WEPContactUpdater, WEPUpdateContactsFooterView, SLNetworkReachabilityWarning, UIAlertView, PSSetupController, NSString;

@interface WEPSettingsController : SLSettingsController <WEAccountCreationDelegate, WEPContactUpdaterDelegate> {

	ACAccountType* _weiboAccountType;
	ACAccount* _signInAccount;
	NSArray* _accounts;
	NSMutableDictionary* _authorizedAppList;
	NSArray* _accountStateDependentSpecifiers;
	NSArray* _authorizedAppListSpecifiers;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _updateContactsGroupSpecifier;
	PSSpecifier* _updateContactsSpecifier;
	WEPContactUpdater* _contactUpdater;
	WEPUpdateContactsFooterView* _updateContactsFooterView;
	SLNetworkReachabilityWarning* _networkWarning;
	UIAlertView* _appInstallAlert;
	PSSetupController* _accountCreationContainerVC;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_loginSpecifiers;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_learnMoreLinkGroupSpecifier;
-(id)_authorizedAppsListSpecifiers;
-(void)_setAppAllowedAccess:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isAppAllowedAccountAccessWithSpecifier:(id)arg1 ;
-(void)_learnMoreLinkButtonTapped:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_showAppDownloadAlert;
-(void)_handleAccountAuthenticationWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_cancelUpdateContactsTapped:(id)arg1 ;
-(id)_networkWarning;
-(void)_signInButtonTapped:(id)arg1 ;
-(void)_reloadAuthorizedAppList;
-(id)_accountListSpecifiers;
-(id)_noAccountsSpecifiers;
-(id)_createNewAccountButtonSpecifier;
-(void)accountCreationController:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)_updateContactsButtonTapped:(id)arg1 ;
-(void)_showActivationAlert;
-(id)_weiboApp;
-(id)_specifierForAccount:(id)arg1 ;
-(void)weiboContactUpdater:(id)arg1 didFinishUpdatingContacts:(long long)arg2 ;
-(BOOL)_isSinaWeiboParentalRestrictionEnabled;
-(void)weiboContactUpdater:(id)arg1 didUpdateProgress:(float)arg2 ;
-(id)_weiboAccountType;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)navigationItem;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(void)appInstallerWillStart:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_createNewAccountButtonTapped:(id)arg1 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(void)_updateSignInButton;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)specifiers;
-(void)returnPressedAtEnd;
@end

