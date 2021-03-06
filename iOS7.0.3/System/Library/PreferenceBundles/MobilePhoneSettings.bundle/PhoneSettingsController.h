/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <MobilePhoneSettings/PhoneSettingsListController.h>
#import <MobilePhoneSettings/TPSetPINViewControllerDelegate.h>

@class NSString, NSArray, TPSetPINViewController;

@interface PhoneSettingsController : PhoneSettingsListController <TPSetPINViewControllerDelegate> {

	NSString* _cachedMobileIdentity;
	MGNotificationTokenStructRef _capabilitiesChangedNotificationToken;
	NSArray* _originalSpecifiers;
	TPSetPINViewController* _setPINViewController;

}

@property (retain) NSArray * originalSpecifiers;                               //@synthesize originalSpecifiers=_originalSpecifiers - In the implementation block
@property (retain) TPSetPINViewController * setPINViewController;              //@synthesize setPINViewController=_setPINViewController - In the implementation block
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)_updateCachedMobileIdentity;
-(void)_settingSaveError:(id)arg1 ;
-(void)_callStatusChanged:(id)arg1 ;
-(void)_simChanged:(id)arg1 ;
-(void)_updateSpecifiers:(BOOL)arg1 ;
-(void)_settingsResumed;
-(BOOL)shouldShowMyNumberEditor;
-(void)setOriginalSpecifiers:(id)arg1 ;
-(void)changeVoicemailPassword:(id)arg1 ;
-(void)setSetPINViewController:(id)arg1 ;
-(id)setPINViewController;
-(void)_handleVoicemailPasswordChangeTaskNotification:(id)arg1 ;
-(BOOL)_shouldShowSpecifier:(id)arg1 ;
-(BOOL)_specifier:(id)arg1 isEqualToSpecifier:(id)arg2 ;
-(void)simRemoved;
-(void)setTTYEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)showMyAccount:(id)arg1 ;
-(int)showCallGroup;
-(int)showCarrierSpacer;
-(int)showVoicemailPassword;
-(int)showSIMSpacer;
-(void)setMyNumber:(id)arg1 specifier:(id)arg2 ;
-(id)myNumber:(id)arg1 ;
-(id)originalSpecifiers;
-(void)handleURL:(id)arg1 ;
-(id)specifiers;
-(void)setPINViewControllerFinished:(id)arg1 success:(BOOL)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
@end

