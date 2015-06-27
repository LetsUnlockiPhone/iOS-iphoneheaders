/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:41:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface AAUIAcceptChildTransferRequest : AAFamilyRequest {

	NSString* _requestCode;

}

@property (nonatomic,copy) NSString * requestCode;              //@synthesize requestCode=_requestCode - In the implementation block
-(id)urlString;
-(char)isUserInitiated;
-(NSString *)requestCode;
-(void)setRequestCode:(NSString *)arg1 ;
-(id)urlRequest;
@end
