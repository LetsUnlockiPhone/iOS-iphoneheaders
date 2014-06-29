/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMDaemonCore/IMDAccount.h>

@class IDSAccount;

@interface IMDIDSAccount : IMDAccount {

	IDSAccount* _idsAccount;

}

@property (nonatomic,readonly) IDSAccount * idsAccount;              //@synthesize idsAccount=_idsAccount - In the implementation block
-(void)dealloc;
-(void)writeAccountDefaults:(id)arg1 ;
-(id)accountDefaults;
-(id)idsAccount;
-(id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 idsAccount:(id)arg4 ;
@end
