/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:01:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCharacteristicWriteRequest.h>

@class NSMutableArray;

@interface HMDMappedCharacteristicWriteRequest : HMDCharacteristicWriteRequest {

	NSMutableArray* _requests;

}

@property (nonatomic,readonly) NSMutableArray * requests;              //@synthesize requests=_requests - In the implementation block
-(NSMutableArray *)requests;
-(void)addRequest:(id)arg1 ;
-(id)initWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 ;
@end
