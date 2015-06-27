/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDBackingAccount.h>

@class ACAccountStore, ACAccount;

@interface CKDBackingiOSAccount : CKDBackingAccount {

	ACAccountStore* _accountStore;
	ACAccount* _parentAppleAccount;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) ACAccount * ckAccount; 
@property (nonatomic,retain) ACAccount * parentAppleAccount;               //@synthesize parentAppleAccount=_parentAppleAccount - In the implementation block
+(id)primaryAccountInStore:(id)arg1 ;
+(id)accountWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(void)determineCloudKitInfoFromEmail:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)identifier;
-(BOOL)allowsCellularAccess;
-(ACAccountStore *)accountStore;
-(BOOL)cloudPhotosIsEnabled;
-(BOOL)cloudKitIsEnabled;
-(id)dsid;
-(id)cloudKitAuthToken;
-(id)iCloudAuthToken;
-(id)primaryEmail;
-(ACAccount *)ckAccount;
-(id)accountPropertiesForDataclass:(id)arg1 ;
-(id)_initWithParentAccount:(id)arg1 inStore:(id)arg2 ;
-(ACAccount *)parentAppleAccount;
-(void)setParentAppleAccount:(ACAccount *)arg1 ;
@end
