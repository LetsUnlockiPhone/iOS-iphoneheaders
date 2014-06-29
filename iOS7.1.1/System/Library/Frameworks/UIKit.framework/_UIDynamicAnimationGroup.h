/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDynamicAnimation.h>

@class NSMutableArray, NSArray;

@interface _UIDynamicAnimationGroup : _UIDynamicAnimation {

	/*^block*/ id _applier;
	NSMutableArray* _animations;
	NSMutableArray* _runningAnimations;

}

@property (nonatomic,copy) NSArray * animations;              //@synthesize animations=_animations - In the implementation block
-(void)dealloc;
-(id)animations;
-(void)setAnimations:(id)arg1 ;
-(void)_stopAnimation;
-(bool)_animateForInterval:(double)arg1 ;
-(void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2 ;
-(void)runWithCompletion:(/*^block*/ id)arg1 ;
-(void)runWithGroupApplier:(/*^block*/ id)arg1 completion:(/*^block*/ id)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4 ;
-(void)runWithGroupApplier:(/*^block*/ id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)addAnimation:(id)arg1 ;
-(void)removeAnimation:(id)arg1 ;
@end
