/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSMutableArray;

@interface CKDPShareRetrieveResponse : PBCodable <NSCopying> {

	NSMutableArray* _shares;

}

@property (nonatomic,retain) NSMutableArray * shares;              //@synthesize shares=_shares - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)shares;
-(void)addShare:(id)arg1 ;
-(unsigned)sharesCount;
-(void)clearShares;
-(id)shareAtIndex:(unsigned)arg1 ;
-(void)setShares:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

