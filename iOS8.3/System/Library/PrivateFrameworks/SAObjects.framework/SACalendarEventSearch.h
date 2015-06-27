/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, NSDate, NSNumber, NSString, NSArray;

@interface SACalendarEventSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSURL * targetAppId; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSURL * eventId; 
@property (nonatomic,retain) NSNumber * limit; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSArray * participants; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * title; 
+(id)eventSearch;
+(id)eventSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)location;
-(void)setLimit:(NSNumber *)arg1 ;
-(NSNumber *)limit;
-(NSArray *)participants;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSURL *)eventId;
-(void)setEventId:(NSURL *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSURL *)targetAppId;
-(void)setTargetAppId:(NSURL *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end
