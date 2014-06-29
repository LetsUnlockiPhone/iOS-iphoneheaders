/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface TSUProgress : NSObject {

	NSMutableSet* mProgressObservers;
	NSObject<OS_dispatch_queue>* mProgressObserversQueue;
	NSString* mMessage;

}

@property (readonly) double value; 
@property (readonly) double maxValue; 
@property (getter=isIndeterminate,readonly) bool indeterminate; 
@property (copy) NSString * message; 
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)protected_progressDidChange;
-(bool)protected_hasProgressObservers;
-(double)protected_minProgressObserverValueInterval;
-(void)dealloc;
-(id)init;
-(double)value;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(bool)isIndeterminate;
-(double)maxValue;
-(void)removeProgressObserver:(id)arg1 ;
@end
