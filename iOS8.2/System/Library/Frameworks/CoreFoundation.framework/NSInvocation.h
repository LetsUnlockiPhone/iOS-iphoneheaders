/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSMethodSignature;

@interface NSInvocation : NSObject {

	void* _frame;
	void* _retdata;
	id _signature;
	id _container;
	unsigned char _retainedArgs;
	unsigned char _reserved[15];

}

@property (retain,readonly) NSMethodSignature * methodSignature; 
@property (readonly) char argumentsRetained; 
@property (assign) id target; 
@property (assign) SEL selector; 
+(id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2 ;
+(id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2 arguments:(void*)arg3 ;
+(id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 ;
+(id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 ;
+(id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 ;
+(id)_invocationWithMethodSignature:(id)arg1 frame:(void*)arg2 ;
+(id)invocationWithMethodSignature:(id)arg1 ;
-(char)mf_shouldLogInvocation;
-(void)_webkit_invokeAndHandleException:(id)arg1 ;
-(char)wantsReturnValue;
-(char)_hasBlockArgument;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id)debugDescription;
-(char)argumentsRetained;
-(void)_addAttachedObject:(id)arg1 ;
-(void)invokeSuper;
-(void)dealloc;
-(id)init;
-(void)setArgument:(void*)arg1 atIndex:(int)arg2 ;
-(void)invoke;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)target;
-(SEL)selector;
-(void)retainArguments;
-(void)invokeWithTarget:(id)arg1 ;
-(void)getReturnValue:(void*)arg1 ;
-(NSMethodSignature *)methodSignature;
-(void)getArgument:(void*)arg1 atIndex:(int)arg2 ;
-(void)setReturnValue:(void*)arg1 ;
-(void)invokeUsingIMP:(/*function pointer*/void*)arg1 ;
@end
