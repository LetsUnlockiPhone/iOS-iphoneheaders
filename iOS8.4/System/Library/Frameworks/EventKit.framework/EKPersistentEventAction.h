/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class NSString, NSData, EKPersistentCalendarItem;

@interface EKPersistentEventAction : EKPersistentObject

@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModTag; 
@property (nonatomic,copy) NSString * externalFolderID; 
@property (nonatomic,copy) NSString * externalScheduleID; 
@property (nonatomic,copy) NSData * externalData; 
@property (nonatomic,retain) EKPersistentCalendarItem * owner; 
+(id)relations;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(NSData *)externalData;
-(void)setExternalData:(NSData *)arg1 ;
-(NSString *)externalFolderID;
-(void)setExternalFolderID:(NSString *)arg1 ;
-(NSString *)externalScheduleID;
-(void)setExternalScheduleID:(NSString *)arg1 ;
-(NSString *)externalModTag;
-(void)setExternalModTag:(NSString *)arg1 ;
-(int)entityType;
-(EKPersistentCalendarItem *)owner;
-(void)setOwner:(EKPersistentCalendarItem *)arg1 ;
@end

