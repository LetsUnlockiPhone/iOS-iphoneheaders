/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface MBSSnapshotID : PBCodable {

	unsigned _snapshotID;
	SCD_Struct_MB4 _has;

}

@property (assign,nonatomic) char hasSnapshotID; 
@property (assign,nonatomic) unsigned snapshotID;              //@synthesize snapshotID=_snapshotID - In the implementation block
-(void)setSnapshotID:(unsigned)arg1 ;
-(char)hasSnapshotID;
-(void)setHasSnapshotID:(char)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)snapshotID;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
