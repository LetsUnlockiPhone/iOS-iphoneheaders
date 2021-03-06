/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/nanosystemsettingsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanosystemsettingsd/nanosystemsettingsd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <nanosystemsettingsd/NSCopying.h>

@class NSString;

@interface NSSLocalesInfoRespMsgDefaultCal : PBCodable <NSCopying> {

	NSString* _calendar;
	NSString* _locale;

}

@property (nonatomic,retain) NSString * locale;                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * calendar;              //@synthesize calendar=_calendar - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCalendar:(NSString *)arg1 ;
-(NSString *)calendar;
-(NSString *)locale;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

