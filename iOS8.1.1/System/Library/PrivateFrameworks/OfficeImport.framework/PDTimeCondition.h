/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {

	BOOL mHasDelay;
	int mDelay;
	int mTriggerEvent;
	PDAnimationTarget* mTarget;

}
-(void)dealloc;
-(id)init;
-(void)setDelay:(int)arg1 ;
-(void)setTarget:(id)arg1 ;
-(int)delay;
-(id)target;
-(BOOL)hasDelay;
-(int)triggerEvent;
-(void)setTriggerEvent:(int)arg1 ;
@end

