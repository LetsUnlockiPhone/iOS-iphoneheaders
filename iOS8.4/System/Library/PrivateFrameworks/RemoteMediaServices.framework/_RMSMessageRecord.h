/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _RMSMessageRecord : NSObject {

	unsigned short _messageType;
	id _responseBlock;

}

@property (assign,nonatomic) unsigned short messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) id responseBlock;                        //@synthesize responseBlock=_responseBlock - In the implementation block
-(unsigned short)messageType;
-(void)setMessageType:(unsigned short)arg1 ;
-(void)setResponseBlock:(id)arg1 ;
-(id)responseBlock;
@end

