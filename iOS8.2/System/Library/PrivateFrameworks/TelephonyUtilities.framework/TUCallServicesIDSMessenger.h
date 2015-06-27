/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TUCallServicesIDSMessengerDelegate;
@class IDSService;

@interface TUCallServicesIDSMessenger : NSObject {

	id<TUCallServicesIDSMessengerDelegate> _delegate;
	IDSService* _idsService;

}

@property (assign,nonatomic,__weak) id<TUCallServicesIDSMessengerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IDSService * idsService;                                             //@synthesize idsService=_idsService - In the implementation block
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<TUCallServicesIDSMessengerDelegate>)arg1 ;
-(id<TUCallServicesIDSMessengerDelegate>)delegate;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
@end
