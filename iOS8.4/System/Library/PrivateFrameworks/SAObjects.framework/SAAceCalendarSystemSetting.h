/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAAceCalendarSystemSetting : SADomainObject

@property (nonatomic,copy) NSString * calendarType; 
+(id)aceCalendarSystemSetting;
+(id)aceCalendarSystemSettingWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setCalendarType:(NSString *)arg1 ;
-(NSString *)calendarType;
-(id)encodedClassName;
@end
