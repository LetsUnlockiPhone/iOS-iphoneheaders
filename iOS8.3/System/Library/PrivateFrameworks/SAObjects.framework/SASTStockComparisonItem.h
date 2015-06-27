/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:26:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SAUIDecoratedText;

@interface SASTStockComparisonItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * stockValueFacet; 
@property (nonatomic,retain) SAUIDecoratedText * subtitle; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (nonatomic,retain) SAUIDecoratedText * value; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stockComparisonItem;
+(id)stockComparisonItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)title;
-(SAUIDecoratedText *)value;
-(void)setValue:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)subtitle;
-(void)setSubtitle:(SAUIDecoratedText *)arg1 ;
-(id)encodedClassName;
-(NSString *)stockValueFacet;
-(void)setStockValueFacet:(NSString *)arg1 ;
@end
