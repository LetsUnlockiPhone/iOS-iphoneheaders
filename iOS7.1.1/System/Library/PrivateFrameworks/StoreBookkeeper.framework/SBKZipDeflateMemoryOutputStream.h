/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
@class NSMutableData;

@interface SBKZipDeflateMemoryOutputStream : NSObject {

	NSMutableData* deflatedData;
	z_stream_s* zstream;
	char* _outputBuffer;
	int _bufferingSize;

}
+(id)dataByDeflatingData:(id)arg1 ;
-(void)dealloc;
-(id)close;
-(void).cxx_destruct;
-(bool)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithBufferingSize:(int)arg1 compressionType:(unsigned long long)arg2 ;
@end

