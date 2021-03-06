/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPDate;

@interface CKDPLocationCoordinate : PBCodable <NSCopying> {

	double _altitude;
	double _course;
	double _horizontalAccuracy;
	double _latitude;
	double _longitude;
	double _speed;
	double _verticalAccuracy;
	CKDPDate* _timestamp;
	SCD_Struct_CK11 _has;

}

@property (assign,nonatomic) char hasLatitude; 
@property (assign,nonatomic) double latitude;                         //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) char hasLongitude; 
@property (assign,nonatomic) double longitude;                        //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) char hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy;               //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) char hasAltitude; 
@property (assign,nonatomic) double altitude;                         //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) char hasVerticalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy;                 //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) char hasCourse; 
@property (assign,nonatomic) double course;                           //@synthesize course=_course - In the implementation block
@property (assign,nonatomic) char hasSpeed; 
@property (assign,nonatomic) double speed;                            //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) char hasTimestamp; 
@property (nonatomic,retain) CKDPDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setSpeed:(double)arg1 ;
-(CKDPDate *)timestamp;
-(void)setTimestamp:(CKDPDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)speed;
-(id)dictionaryRepresentation;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(void)setCourse:(double)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)setHasLatitude:(char)arg1 ;
-(char)hasLatitude;
-(void)setHasLongitude:(char)arg1 ;
-(char)hasLongitude;
-(void)setHasHorizontalAccuracy:(char)arg1 ;
-(char)hasHorizontalAccuracy;
-(void)setHasAltitude:(char)arg1 ;
-(char)hasAltitude;
-(void)setHasVerticalAccuracy:(char)arg1 ;
-(char)hasVerticalAccuracy;
-(void)setHasCourse:(char)arg1 ;
-(char)hasCourse;
-(void)setHasSpeed:(char)arg1 ;
-(char)hasSpeed;
-(char)hasTimestamp;
-(double)horizontalAccuracy;
-(double)verticalAccuracy;
-(double)altitude;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)course;
@end

