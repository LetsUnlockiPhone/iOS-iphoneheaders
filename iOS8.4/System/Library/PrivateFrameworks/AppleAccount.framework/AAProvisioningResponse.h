/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAAuthenticationResponse.h>

@class NSDictionary, NSArray, NSString, NSNumber;

@interface AAProvisioningResponse : AAAuthenticationResponse {

	NSDictionary* _icloud;

}

@property (nonatomic,readonly) NSArray * provisionedDataclasses; 
@property (nonatomic,readonly) NSDictionary * dataclassProperties; 
@property (nonatomic,readonly) NSString * appleID; 
@property (nonatomic,readonly) NSArray * appleIDAliases; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSNumber * primaryEmailVerified; 
@property (nonatomic,readonly) NSString * iCloudAuthToken; 
@property (nonatomic,readonly) NSString * fmipAuthToken; 
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dataclassProperties;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSArray *)appleIDAliases;
-(NSNumber *)primaryEmailVerified;
-(NSString *)fmipAuthToken;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)iCloudAuthToken;
-(NSString *)primaryEmail;
-(NSArray *)provisionedDataclasses;
-(NSString *)appleID;
@end

