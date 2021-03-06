/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSURLDownloadDecoder.h>
#import <Foundation/NSURLDataDecoder.h>

@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder, NSURLDataDecoder> {

	z_stream_s* _stream;
	unsigned _modificationTime;
	NSString* _filename;
	BOOL _streamInitialized;
	BOOL _decodedHeader;
	BOOL _finishedInflating;
	BOOL _pad;

}
+(BOOL)decodeDownloadHeader:(id)arg1 headerLength:(int*)arg2 modificationTime:(unsigned*)arg3 filename:(id*)arg4 ;
+(BOOL)canDecodeDownloadHeaderData:(id)arg1 ;
+(id)MIMEType;
-(id)decodeData:(id)arg1 ;
-(BOOL)isFinishedDecoding;
-(BOOL)decodeDownloadData:(id)arg1 dataForkData:(id*)arg2 resourceForkData:(id*)arg3 ;
-(BOOL)finishDownloadDecoding;
-(id)filenameWithOriginalFilename:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)fileAttributes;
-(void)finalize;
@end

