/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MusicLibrary/NSCopying.h>

@class MIPArtist, NSString, MIPSeries;

@interface MIPPodcast : PBCodable <NSCopying> {

	MIPArtist* _artist;
	NSString* _externalGuid;
	NSString* _feedUrl;
	MIPSeries* _series;

}

@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                   //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasSeries; 
@property (nonatomic,retain) MIPSeries * series;                   //@synthesize series=_series - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalGuid; 
@property (nonatomic,retain) NSString * externalGuid;              //@synthesize externalGuid=_externalGuid - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedUrl; 
@property (nonatomic,retain) NSString * feedUrl;                   //@synthesize feedUrl=_feedUrl - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setArtist:(MIPArtist *)arg1 ;
-(void)setSeries:(MIPSeries *)arg1 ;
-(BOOL)hasArtist;
-(BOOL)hasSeries;
-(MIPArtist *)artist;
-(MIPSeries *)series;
-(void)setExternalGuid:(NSString *)arg1 ;
-(void)setFeedUrl:(NSString *)arg1 ;
-(BOOL)hasExternalGuid;
-(BOOL)hasFeedUrl;
-(NSString *)externalGuid;
-(NSString *)feedUrl;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

