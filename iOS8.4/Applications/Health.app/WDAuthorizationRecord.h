/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _HKAuthorizationRecord;

@interface WDAuthorizationRecord : NSObject {

	_HKAuthorizationRecord* _internalAuthorizationRecord;
	int _status;

}

@property (assign) int status;              //@synthesize status=_status - In the implementation block
-(id)initWithInternalAuthorizationRecord:(id)arg1 ;
-(char)requestedSharing;
-(char)requestedReading;
-(id)init;
-(int)status;
-(void)setStatus:(int)arg1 ;
@end

