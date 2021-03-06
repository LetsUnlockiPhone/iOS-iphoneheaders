/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLRemoteSession.h>

@class ACAccountStore;

@interface VURemoteSession : SLRemoteSession {

	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
+(void)incrementPowerAssertion;
+(void)decrementPowerAssertion;
+(void)refreshPowerAssertion;
-(ACAccountStore *)accountStore;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
@end

