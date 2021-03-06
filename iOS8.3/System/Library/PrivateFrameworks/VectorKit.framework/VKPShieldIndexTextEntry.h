/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:00:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <VectorKit/NSCopying.h>

@class NSString, NSMutableArray;

@interface VKPShieldIndexTextEntry : PBCodable <NSCopying> {

	NSString* _artworkIdentifier;
	NSMutableArray* _shieldTexts;
	int _shieldType;
	SCD_Struct_VK265 _has;

}

@property (nonatomic,readonly) char hasArtworkIdentifier; 
@property (nonatomic,retain) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (assign,nonatomic) char hasShieldType; 
@property (assign,nonatomic) int shieldType;                            //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,retain) NSMutableArray * shieldTexts;              //@synthesize shieldTexts=_shieldTexts - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)artworkIdentifier;
-(int)shieldType;
-(NSMutableArray *)shieldTexts;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(char)hasArtworkIdentifier;
-(void)setShieldTexts:(NSMutableArray *)arg1 ;
-(void)addShieldText:(id)arg1 ;
-(unsigned)shieldTextsCount;
-(void)clearShieldTexts;
-(id)shieldTextAtIndex:(unsigned)arg1 ;
-(void)setShieldType:(int)arg1 ;
-(void)setHasShieldType:(char)arg1 ;
-(char)hasShieldType;
@end

