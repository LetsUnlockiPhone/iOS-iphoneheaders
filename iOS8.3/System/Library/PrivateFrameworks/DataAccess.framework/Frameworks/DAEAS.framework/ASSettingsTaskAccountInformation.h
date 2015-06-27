/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:24:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class ASSettingsTaskAccountEmailAddresses, NSString;

@interface ASSettingsTaskAccountInformation : ASItem {

	ASSettingsTaskAccountEmailAddresses* _emailAddressList;
	NSString* _accountId;

}

@property (nonatomic,retain) ASSettingsTaskAccountEmailAddresses * emailAddressList;              //@synthesize emailAddressList=_emailAddressList - In the implementation block
@property (nonatomic,retain) NSString * accountId;                                                //@synthesize accountId=_accountId - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(ASSettingsTaskAccountEmailAddresses *)emailAddressList;
-(void)setEmailAddressList:(ASSettingsTaskAccountEmailAddresses *)arg1 ;
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)accountId;
@end
