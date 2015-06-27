/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AAAccountManager, AAAccount, NSDictionary, NSURL;

@interface SYDAccount : NSObject {

	AAAccountManager* _accountManager;
	AAAccount* _account;
	char _allowsCellular;
	NSDictionary* _accountProperties;
	char _needsToReloadAccount;

}

@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,readonly) NSURL * serverURL; 
@property (nonatomic,readonly) char allowsCellular;                    //@synthesize allowsCellular=_allowsCellular - In the implementation block
+(id)enabledAccountForManager:(id)arg1 ;
-(char)allowsCellular;
-(void)_loadAccountIfNecessary;
-(void)_accountsChangedNotification;
-(void)dealloc;
-(id)init;
-(id)description;
-(char)isValid;
-(NSURL *)serverURL;
-(void)shutdown;
-(id)credentials;
@end
