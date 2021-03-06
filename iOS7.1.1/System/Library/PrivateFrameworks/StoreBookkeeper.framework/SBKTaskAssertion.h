/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SBKProcessAssertion;

@interface SBKTaskAssertion : NSObject {

	/*^block*/ id _expireHandler;
	NSString* _debugInfo;
	SBKProcessAssertion* _processAssertion;

}
+(id)newBackgroundTaskWithExpirationHandler:(/*^block*/ id)arg1 debugInfo:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void).cxx_destruct;
-(id)initWithExpirationHandler:(/*^block*/ id)arg1 debugInfo:(id)arg2 ;
-(void)performExpirationHandler;
@end

