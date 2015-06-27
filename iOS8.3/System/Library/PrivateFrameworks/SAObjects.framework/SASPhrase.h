/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:29 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASPhrase : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * interpretations; 
@property (assign,nonatomic) char lowConfidence; 
@property (assign,nonatomic) char speechRepairApplied; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phraseWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)phrase;
-(id)af_speechInterpretations;
-(id)groupIdentifier;
-(NSArray *)interpretations;
-(id)encodedClassName;
-(void)setInterpretations:(NSArray *)arg1 ;
-(char)lowConfidence;
-(void)setLowConfidence:(char)arg1 ;
-(char)speechRepairApplied;
-(void)setSpeechRepairApplied:(char)arg1 ;
@end
