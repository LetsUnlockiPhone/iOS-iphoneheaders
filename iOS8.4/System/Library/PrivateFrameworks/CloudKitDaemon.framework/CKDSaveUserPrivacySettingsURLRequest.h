/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest {

	NSString* _bundleID;
	long long _discoverableTrinary;

}

@property (nonatomic,copy) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) long long discoverableTrinary;              //@synthesize discoverableTrinary=_discoverableTrinary - In the implementation block
-(id)init;
-(NSString *)bundleID;
-(void)setDiscoverable:(BOOL)arg1 ;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setDiscoverableTrinary:(long long)arg1 ;
-(long long)discoverableTrinary;
-(int)operationType;
@end
