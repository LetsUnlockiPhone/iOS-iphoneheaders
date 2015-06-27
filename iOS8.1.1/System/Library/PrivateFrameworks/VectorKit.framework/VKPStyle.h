/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <VectorKit/NSCopying.h>

@class NSMutableArray, NSData, NSString, VKPStyleProperties;

@interface VKPStyle : PBCodable <NSCopying> {

	SCD_Struct_VK64* _inherits;
	NSMutableArray* _attributes;
	NSData* _contents;
	NSString* _name;
	VKPStyleProperties* _properties;
	NSMutableArray* _zooms;

}

@property (nonatomic,readonly) unsigned long long inheritsCount; 
@property (nonatomic,readonly) unsigned* inherits; 
@property (nonatomic,retain) NSMutableArray * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) BOOL hasProperties; 
@property (nonatomic,retain) VKPStyleProperties * properties;                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSMutableArray * zooms;                          //@synthesize zooms=_zooms - In the implementation block
@property (nonatomic,readonly) BOOL hasContents; 
@property (nonatomic,retain) NSData * contents;                               //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSData *)contents;
-(void)setContents:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)attributes;
-(VKPStyleProperties *)properties;
-(void)setProperties:(VKPStyleProperties *)arg1 ;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setZooms:(NSMutableArray *)arg1 ;
-(void)addAttributes:(id)arg1 ;
-(void)addZooms:(id)arg1 ;
-(unsigned long long)inheritsCount;
-(void)clearInherits;
-(unsigned)inheritAtIndex:(unsigned long long)arg1 ;
-(void)addInherit:(unsigned)arg1 ;
-(unsigned long long)attributesCount;
-(void)clearAttributes;
-(id)attributesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)zoomsCount;
-(void)clearZooms;
-(id)zoomsAtIndex:(unsigned long long)arg1 ;
-(unsigned*)inherits;
-(void)setInherits:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasProperties;
-(BOOL)hasContents;
-(BOOL)hasName;
-(NSMutableArray *)zooms;
@end
