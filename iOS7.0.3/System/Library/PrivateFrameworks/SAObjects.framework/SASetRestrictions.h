/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SASetRestrictions : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * restrictions; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)setRestrictions;
+(id)setRestrictionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)restrictions;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setRestrictions:(id)arg1 ;
@end

