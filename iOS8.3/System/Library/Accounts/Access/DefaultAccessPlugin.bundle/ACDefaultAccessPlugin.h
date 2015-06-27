/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:54:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Accounts/Access/DefaultAccessPlugin.bundle/DefaultAccessPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DefaultAccessPlugin/ACDAccountAccessPlugin.h>

@class NSString;

@interface ACDefaultAccessPlugin : NSObject <ACDAccountAccessPlugin>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_fullAccessEntitlementForAccountType:(id)arg1 ;
+(id)_defaultAccessEntitlementForAccountType:(id)arg1 ;
+(char)_accessAlertSupportedByAccountType:(id)arg1 ;
+(id)_supportedAccountTypeIdentifiers;
+(char)supportsAccountTypeWithIdentifier:(id)arg1 ;
-(void)_presentAccessAlertforClient:(id)arg1 onAccountType:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(char)_shouldGrantClient:(id)arg1 unrestrictedAccessToAccountType:(id)arg2 ;
-(char)_shouldGrantClient:(id)arg1 defaultAccessToAccountType:(id)arg2 ;
-(void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(char)arg5 completion:(/*^block*/id)arg6 ;
-(void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end
