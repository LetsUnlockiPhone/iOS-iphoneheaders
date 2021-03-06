/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:43:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, StreamingUnzipper, NSObject;

@interface SZExtractor : NSObject {

	NSXPCConnection* _unzipServiceConnection;
	StreamingUnzipper* _inProcessUnzipper;
	NSObject*<OS_dispatch_queue> _inProcessUnzipQueue;
	char _errorOccurred;

}
+(void)enableDebugLogging;
-(id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 resumptionOffset:(unsigned long long*)arg4 ;
-(void)_errorOccurred;
-(void)_invalidateObject;
-(id)initForLocalExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3 ;
-(id)initForRemoteExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3 ;
-(id)initWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3 ;
-(id)initWithPath:(id)arg1 resumptionOffset:(unsigned long long*)arg2 ;
-(void)supplyBytes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)supplyDispatchData:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)suspendStreamWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)finishStreamWithCompletionBlock:(/*^block*/id)arg1 ;
@end

