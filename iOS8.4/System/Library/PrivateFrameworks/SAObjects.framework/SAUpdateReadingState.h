/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAUpdateReadingState : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * readingStateId; 
@property (assign,nonatomic) long long updatedGroupIndex; 
@property (assign,nonatomic) long long updatedItemIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)updateReadingState;
+(id)updateReadingStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)readingStateId;
-(void)setReadingStateId:(NSString *)arg1 ;
-(long long)updatedGroupIndex;
-(void)setUpdatedGroupIndex:(long long)arg1 ;
-(long long)updatedItemIndex;
-(void)setUpdatedItemIndex:(long long)arg1 ;
@end

