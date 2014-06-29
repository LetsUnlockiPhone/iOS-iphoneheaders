/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString, NSArray;

@interface SAConnectionPolicy : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * globalTimeout; 
@property (nonatomic,copy) NSString * policyId; 
@property (nonatomic,copy) NSArray * routes; 
@property (nonatomic,copy) NSNumber * timeToLive; 
+(id)connectionPolicy;
+(id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setRoutes:(id)arg1 ;
-(id)routes;
-(id)encodedClassName;
-(id)globalTimeout;
-(void)setGlobalTimeout:(id)arg1 ;
-(id)policyId;
-(void)setPolicyId:(id)arg1 ;
-(id)timeToLive;
-(void)setTimeToLive:(id)arg1 ;
@end
