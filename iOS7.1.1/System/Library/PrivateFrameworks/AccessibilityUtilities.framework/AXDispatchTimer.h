/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXTimer.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface AXDispatchTimer : NSObject <AXTimer> {

	bool _active;
	bool _pending;
	bool _cancelled;
	bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSObject<OS_dispatch_source>* _dispatchTimer;

}

@property (assign,getter=isCancelled,nonatomic) bool cancelled;                                       //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) bool automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (assign,getter=isActive,nonatomic) bool active;                                             //@synthesize active=_active - In the implementation block
@property (assign,getter=isPending,nonatomic) bool pending;                                           //@synthesize pending=_pending - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * dispatchQueue;                             //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_source> * dispatchTimer;                            //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
-(id)dispatchQueue;
-(void)dealloc;
-(id)init;
-(bool)isActive;
-(void)setCancelled:(bool)arg1 ;
-(bool)isCancelled;
-(void)cancel;
-(void)setActive:(bool)arg1 ;
-(void)_reallyCancel;
-(bool)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)setDispatchTimer:(id)arg1 ;
-(id)dispatchTimer;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/ id)arg2 ;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(bool)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/ id)arg2 cancelBlock:(/*^block*/ id)arg3 ;
-(id)initWithTargetSerialQueue:(id)arg1 ;
-(void)setPending:(bool)arg1 ;
-(bool)isPending;
-(void)setDispatchQueue:(id)arg1 ;
@end

