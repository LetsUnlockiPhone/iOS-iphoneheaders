/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface SYRetryTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	double _interval;
	double _backoffFactor;
	int _maxRetries;
	int _numRetries;

}
-(void)cancel;
-(id)initWithInterval:(double)arg1 backoffFactor:(double)arg2 maxRetries:(int)arg3 queue:(id)arg4 callout:(/*^block*/id)arg5 ;
-(char)incrementBackoff;
@end

