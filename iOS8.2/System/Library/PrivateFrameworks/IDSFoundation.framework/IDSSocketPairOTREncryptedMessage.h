/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairOTREncryptedMessage : IDSSocketPairMessage {

	unsigned _offset;
	unsigned char _versionNumber;
	char _encrypted;
	char _fileXfer;
	unsigned short _streamID;
	unsigned short _priority;
	unsigned _sequenceNumber;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned char versionNumber;              //@synthesize versionNumber=_versionNumber - In the implementation block
@property (nonatomic,readonly) char encrypted;                           //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) unsigned short streamID;                  //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,readonly) unsigned short priority;                  //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) unsigned sequenceNumber;                  //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) char fileXfer;                            //@synthesize fileXfer=_fileXfer - In the implementation block
@property (nonatomic,retain,readonly) NSData * data; 
-(unsigned char)versionNumber;
-(unsigned char)command;
-(void)dealloc;
-(NSData *)data;
-(unsigned short)priority;
-(char)encrypted;
-(unsigned short)streamID;
-(unsigned)sequenceNumber;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithVersion:(unsigned char)arg1 encrypted:(char)arg2 streamID:(unsigned short)arg3 priority:(unsigned short)arg4 sequenceNumber:(unsigned)arg5 fileXfer:(char)arg6 data:(id)arg7 ;
-(char)fileXfer;
@end
