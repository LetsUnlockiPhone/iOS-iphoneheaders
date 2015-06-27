/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SAHAAttributeValue;

@interface SAHAAction : SADomainObject

@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,retain) SAHAAttributeValue * value; 
+(id)action;
+(id)actionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)attribute;
-(id)groupIdentifier;
-(void)setValue:(SAHAAttributeValue *)arg1 ;
-(SAHAAttributeValue *)value;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(void)setAttribute:(NSString *)arg1 ;
@end
