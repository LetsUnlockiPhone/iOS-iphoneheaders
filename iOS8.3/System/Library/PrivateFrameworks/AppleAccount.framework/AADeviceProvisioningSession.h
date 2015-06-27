/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:40:23 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSString;

@interface AADeviceProvisioningSession : NSObject {

	NSString* _dsid;
	unsigned long long _dsidNumber;
	OpaqueCFHTTPCookieStorageRef _cookieStorageRef;

}
-(id)init;
-(void)addProvisioningInfoToAARequest:(id)arg1 ;
-(void)setCookieStorageRef:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(long)provisionDeviceWithData:(id)arg1 ;
-(long)synchronizeProvisioningWithData:(id)arg1 ;
-(long)eraseProvisioning;
-(void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(char)arg2 ;
-(id)deviceProvisioningInfo;
-(void)addProvisioningInfoToURLRequest:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)initWithDSID:(id)arg1 ;
@end
