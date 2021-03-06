/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:30:39 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Search/NSCopying.h>

@class NSString, NSMutableOrderedSet;

@interface SPSearchResultSection : PBCodable <NSCopying> {

	NSString* _category;
	NSString* _displayIdentifier;
	unsigned _domain;
	int _flags;
	NSString* _icon;
	NSMutableOrderedSet* _resultSet;
	NSString* _scheme;
	SCD_Struct_SP5 _has;

}

@property (assign,nonatomic) char hasDomain; 
@property (assign,nonatomic) unsigned domain;                           //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) char hasIcon; 
@property (nonatomic,retain) NSString * icon;                           //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) char hasDisplayIdentifier; 
@property (nonatomic,retain) NSString * displayIdentifier;              //@synthesize displayIdentifier=_displayIdentifier - In the implementation block
@property (nonatomic,readonly) char hasCategory; 
@property (nonatomic,retain) NSString * category;                       //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) char hasScheme; 
@property (nonatomic,retain) NSString * scheme;                         //@synthesize scheme=_scheme - In the implementation block
@property (assign,nonatomic) char hasFlags; 
@property (assign,nonatomic) int flags;                                 //@synthesize flags=_flags - In the implementation block
-(void)setFlags:(int)arg1 ;
-(char)hasIcon;
-(unsigned)indexOfResult:(id)arg1 ;
-(NSString *)icon;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)displayIdentifier;
-(NSString *)scheme;
-(unsigned)domain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)results;
-(void)setIcon:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)resultsCount;
-(id)resultsAtIndex:(unsigned)arg1 ;
-(void)setScheme:(NSString *)arg1 ;
-(int)flags;
-(char)hasCategory;
-(void)setDomain:(unsigned)arg1 ;
-(void)addResults:(id)arg1 ;
-(void)setDisplayIdentifier:(NSString *)arg1 ;
-(void)clearResults;
-(char)hasDisplayIdentifier;
-(char)hasScheme;
-(void)addResults:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeResultsAtIndex:(unsigned)arg1 ;
-(char)hasEquivalentResults:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)resultSet;
-(void)setHasFlags:(char)arg1 ;
-(char)hasFlags;
-(void)setHasDomain:(char)arg1 ;
-(char)hasDomain;
@end

