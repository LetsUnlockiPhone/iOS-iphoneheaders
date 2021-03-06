/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <identityservicesd/NSCopying.h>

@class NSString, NSData, NSDictionary;

@interface IDSAuthenticateMessage : IDSBaseMessage <NSCopying> {

	NSString* _realm;
	NSData* _csr;
	NSDictionary* _authenticationInfo;
	NSString* _userID;
	NSData* _responseCertificate;
	NSString* _responseUserID;
	NSString* _protocolVersion;

}

@property (copy) NSString * realm;                               //@synthesize realm=_realm - In the implementation block
@property (copy) NSData * csr;                                   //@synthesize csr=_csr - In the implementation block
@property (copy) NSString * protocolVersion;                     //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (copy) NSString * userID;                              //@synthesize userID=_userID - In the implementation block
@property (copy) NSDictionary * authenticationInfo;              //@synthesize authenticationInfo=_authenticationInfo - In the implementation block
@property (copy) NSString * responseUserID;                      //@synthesize responseUserID=_responseUserID - In the implementation block
@property (copy) NSData * responseCertificate;                   //@synthesize responseCertificate=_responseCertificate - In the implementation block
-(NSData *)csr;
-(void)setCsr:(NSData *)arg1 ;
-(void)setUserID:(NSString *)arg1 ;
-(NSDictionary *)authenticationInfo;
-(void)setAuthenticationInfo:(NSDictionary *)arg1 ;
-(NSString *)responseUserID;
-(void)setResponseUserID:(NSString *)arg1 ;
-(NSData *)responseCertificate;
-(void)setResponseCertificate:(NSData *)arg1 ;
-(long long)command;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)protocolVersion;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(id)bagKey;
-(NSString *)userID;
-(BOOL)wantsHTTPHeaders;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsIDSServer;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsBagKey;
-(long long)responseCommand;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setRealm:(NSString *)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
-(NSString *)realm;
@end

