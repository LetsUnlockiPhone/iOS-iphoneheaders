/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSString, NSData;

@interface AADeviceProvisioningRequest : AARequest {

	NSString* _dsid;
	NSString* _url;
	NSData* _data;

}
-(id)urlString;
-(id)initWithDSID:(id)arg1 URLString:(id)arg2 requestData:(id)arg3 ;
-(id)urlRequest;
@end

