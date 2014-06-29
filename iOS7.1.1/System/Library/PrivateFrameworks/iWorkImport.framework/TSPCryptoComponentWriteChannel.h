/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPComponentWriteChannel.h>

@protocol TSPComponentWriteChannel;
@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel> {

	<TSPComponentWriteChannel>* _writeChannel;
	CCCryptorRef _cryptor;
	char* _buffer;
	SCD_Struct_TS263 _ccHmacContext;

}
-(id)initWithWriteChannel:(id)arg1 encryptionKey:(id)arg2 ;
-(void)_writeData:(id)arg1 updateHmac:(bool)arg2 ;
-(void)dealloc;
-(void)close;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)writeData:(id)arg1 ;
@end
