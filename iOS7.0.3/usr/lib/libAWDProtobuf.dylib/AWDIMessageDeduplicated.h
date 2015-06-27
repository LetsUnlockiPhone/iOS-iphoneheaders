/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobuf.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobuf.dylib/libAWDProtobuf.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDIMessageDeduplicated : PBCodable {

	unsigned long long _timestamp;
	unsigned _deduplicationInterval;
	NSString* _guid;
	SCD_Struct_AW0 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                             //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDeduplicationInterval; 
@property (assign,nonatomic) unsigned deduplicationInterval;              //@synthesize deduplicationInterval=_deduplicationInterval - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(id)guid;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
-(BOOL)hasGuid;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDeduplicationInterval;
-(unsigned)deduplicationInterval;
-(void)setDeduplicationInterval:(unsigned)arg1 ;
-(void)setHasDeduplicationInterval:(BOOL)arg1 ;
@end
