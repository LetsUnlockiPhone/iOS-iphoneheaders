/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEOMapRegion, NSMutableArray, NSData;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying> {

	double _turnaroundTime;
	int _localSearchProviderID;
	GEOMapRegion* _mapRegion;
	NSMutableArray* _placeResults;
	NSMutableArray* _searchs;
	int _status;
	int _statusCodeInfo;
	NSMutableArray* _suggestionEntryLists;
	NSData* _suggestionMetadata;
	BOOL _abTestResponse;
	SCD_Struct_GE47 _has;

}

@property (assign,nonatomic) int status;                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * placeResults;                      //@synthesize placeResults=_placeResults - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                           //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchs;                           //@synthesize searchs=_searchs - In the implementation block
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                          //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
@property (assign,nonatomic) BOOL hasAbTestResponse; 
@property (assign,nonatomic) BOOL abTestResponse;                                //@synthesize abTestResponse=_abTestResponse - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestionEntryLists;              //@synthesize suggestionEntryLists=_suggestionEntryLists - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                        //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasStatusCodeInfo; 
@property (assign,nonatomic) int statusCodeInfo;                                 //@synthesize statusCodeInfo=_statusCodeInfo - In the implementation block
@property (assign,nonatomic) BOOL hasTurnaroundTime; 
@property (assign,nonatomic) double turnaroundTime;                              //@synthesize turnaroundTime=_turnaroundTime - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)hasMapRegion;
-(BOOL)hasLocalSearchProviderID;
-(int)localSearchProviderID;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(void)setPlaceResults:(id)arg1 ;
-(void)setSearchs:(id)arg1 ;
-(void)setSuggestionEntryLists:(id)arg1 ;
-(void)setSuggestionMetadata:(id)arg1 ;
-(void)addPlaceResult:(id)arg1 ;
-(void)addSearch:(id)arg1 ;
-(void)addSuggestionEntryLists:(id)arg1 ;
-(void)clearPlaceResults;
-(unsigned)searchsCount;
-(void)clearSearchs;
-(id)searchAtIndex:(unsigned)arg1 ;
-(BOOL)hasAbTestResponse;
-(BOOL)abTestResponse;
-(void)setAbTestResponse:(BOOL)arg1 ;
-(unsigned)suggestionEntryListsCount;
-(void)clearSuggestionEntryLists;
-(id)suggestionEntryListsAtIndex:(unsigned)arg1 ;
-(BOOL)hasSuggestionMetadata;
-(id)suggestionMetadata;
-(BOOL)hasStatusCodeInfo;
-(int)statusCodeInfo;
-(void)setStatusCodeInfo:(int)arg1 ;
-(BOOL)hasTurnaroundTime;
-(double)turnaroundTime;
-(void)setTurnaroundTime:(double)arg1 ;
-(void)setHasAbTestResponse:(BOOL)arg1 ;
-(void)setHasStatusCodeInfo:(BOOL)arg1 ;
-(void)setHasTurnaroundTime:(BOOL)arg1 ;
-(id)placeResults;
-(id)searchs;
-(id)suggestionEntryLists;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)placeResultsCount;
-(id)placeResultAtIndex:(unsigned)arg1 ;
-(id)mapRegion;
-(void)setMapRegion:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

