/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCListener, ServiceImpl;

@interface AnalyticsPortal : NSObject {

	NSXPCListener* listener;
	ServiceImpl* si;

}
+(id)sharedInstance;
+(void)shutdown;
+(void)setListeningPort:(const char*)arg1 queue:(id)arg2 ;
-(void)shutdown;
-(void)setListeningPort:(const char*)arg1 queue:(id)arg2 ;
@end
