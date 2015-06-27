/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NFTransactionStartEvent : NSObject {

	unsigned short _status;
	NSString* _aid;

}

@property (nonatomic,readonly) NSString * aid;                     //@synthesize aid=_aid - In the implementation block
@property (nonatomic,readonly) unsigned short status;              //@synthesize status=_status - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned short)status;
-(NSString *)aid;
-(id)transactionId;
@end
