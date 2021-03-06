/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoMediaRemote/NSCopying.h>

@class NSMutableArray;

@interface _NMRSupportedCommandsProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _supportedCommands;

}

@property (nonatomic,retain) NSMutableArray * supportedCommands;              //@synthesize supportedCommands=_supportedCommands - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addSupportedCommand:(id)arg1 ;
-(unsigned)supportedCommandsCount;
-(void)clearSupportedCommands;
-(id)supportedCommandAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)supportedCommands;
-(void)setSupportedCommands:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

