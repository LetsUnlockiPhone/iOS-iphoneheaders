/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBDaemonRequest : NSObject {

	/*^block*/ id _enabler;
	/*^block*/ id _disabler;

}

@property (nonatomic,copy) id enabler;               //@synthesize enabler=_enabler - In the implementation block
@property (nonatomic,copy) id disabler;              //@synthesize disabler=_disabler - In the implementation block
+(id)requestWithEnabler:(/*^block*/ id)arg1 disabler:(/*^block*/ id)arg2 ;
-(void)setEnabler:(/*^block*/ id)arg1 ;
-(void)setDisabler:(/*^block*/ id)arg1 ;
-(void)dispatchEnablerOnQueue:(id)arg1 ;
-(void)dispatchDisablerOnQueue:(id)arg1 ;
-(/*^block*/ id)enabler;
-(/*^block*/ id)disabler;
-(void)dealloc;
@end

