/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAFMIPAuthenticateResponse : AAResponse {

	NSDictionary* _tokens;
	NSDictionary* _appleAccountInfo;

}

@property (nonatomic,readonly) NSString * fmipWipeToken; 
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)fmipWipeToken;
@end

