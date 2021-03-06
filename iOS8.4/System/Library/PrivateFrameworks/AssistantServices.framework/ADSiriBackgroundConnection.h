/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistantd/assistantd-Structs.h>
#import <assistantd/ADStreamProviderDelegate.h>

@protocol ADSiriBackgroundConnectionDelegate, OS_dispatch_queue, ADStreamProvider, OS_dispatch_source;
@class NSObject, ADSiriConnectionInfo, NSMutableData, ADDataDecompressor, ADDataCompressor, NSMutableDictionary, ADPingInfo, NSString;

@interface ADSiriBackgroundConnection : NSObject <ADStreamProviderDelegate> {

	id<ADSiriBackgroundConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	id<ADStreamProvider> _streamProvider;
	CFReadStreamRef _readStream;
	CFWriteStreamRef _writeStream;
	ADSiriConnectionInfo* _connectionInfo;
	NSMutableData* _bufferedInputData;
	NSMutableData* _bufferedProviderHeaderOutputData;
	NSMutableData* _bufferedGeneralOutputData;
	unsigned char _readBuffer[10240];
	ADDataDecompressor* _inputDecompressor;
	ADDataCompressor* _outputCompressor;
	CFHTTPMessageRef _httpResponseHeader;
	BOOL _isOpened;
	BOOL _isCanceled;
	BOOL _hasFoundTrust;
	NSMutableDictionary* _errorsForConnectionMethods;
	NSObject*<OS_dispatch_source> _aceHeaderTimerSource;
	unsigned long long _aceHeaderTimerFireCount;
	NSObject*<OS_dispatch_source> _pingTimerSource;
	unsigned _currentPingIndex;
	ADPingInfo* _pingInfo;
	long long _connectionMethod;
	NSMutableData* _safetyNetBuffer;
	double _firstStartTime;
	double _currentStartTime;
	double _currentOpenTime;
	double _firstByteReadTime;
	unsigned long long _startCount;
	unsigned long long _metricsCount;

}

@property (assign,nonatomic,__weak) id<ADSiriBackgroundConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getConnectionMetrics:(/*^block*/id)arg1 ;
-(void)setSendPings:(BOOL)arg1 ;
-(void)sendCommand:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_handleAceObject:(id)arg1 ;
-(void)streamProvider:(id)arg1 receivedError:(id)arg2 ;
-(id)analysisInfo;
-(id)_connectionMetrics;
-(void)startWithConnectionInfo:(id)arg1 ;
-(long long)_nextConnectionMethod;
-(BOOL)_usingPeer;
-(BOOL)_usingLedBelly;
-(void)_fallBackToNextConnectionMethodWithError:(id)arg1 orElse:(/*^block*/id)arg2 ;
-(void)_sendProviderHeader;
-(void)_initializeAndSendBufferedGeneralOutputData;
-(void)_scheduleAceHeaderTimeoutTimerWithInterval:(double)arg1 ;
-(id)_headerDataForURL:(id)arg1 aceHost:(id)arg2 languageCode:(id)arg3 ;
-(void)_sendGeneralData:(id)arg1 ;
-(void)_closeConnectionAndPrepareForReconnect:(BOOL)arg1 ;
-(id)_bestErrorBetweenError:(id)arg1 peerError:(id)arg2 ;
-(BOOL)_canFallBackFromError:(id)arg1 ;
-(void)_fallBackToNextConnectionMethodWithError:(id)arg1 ;
-(BOOL)_tcpInfoIndicatesPoorLinkQuality;
-(BOOL)_wifiIsAvailable;
-(void)_aceHeaderTimeoutFired:(id)arg1 ;
-(BOOL)_hasReadACEHeader;
-(BOOL)_wifiMayBeBetterThanCurrentStream;
-(void)_pingTimerFired;
-(void)_resumePingTimer;
-(BOOL)_shouldDeferAcePingTimer;
-(void)_sendAcePingWithId:(unsigned)arg1 ;
-(BOOL)_hasReadHTTPHeader;
-(BOOL)_hasBufferedDataOrOutstandingPings;
-(BOOL)_tryReadingHTTPHeaderData:(id)arg1 withMessage:(CFHTTPMessageRef)arg2 remainingData:(id*)arg3 error:(id*)arg4 ;
-(id)_tryReadingAceHeaderFromData:(id)arg1 bytesParsed:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)_tryReadingParsedDataFromData:(id)arg1 bytesParsed:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)_handleParsedData:(id)arg1 ;
-(id)_readDataFromReadStream:(CFReadStreamRef)arg1 ;
-(BOOL)_handleHTTPHeaderWithData:(id)arg1 remainingData:(id*)arg2 error:(id*)arg3 ;
-(BOOL)_handleAceHeaderWithData:(id)arg1 remainingData:(id*)arg2 error:(id*)arg3 ;
-(BOOL)_handleAceDataWithData:(id)arg1 remainingData:(id*)arg2 error:(id*)arg3 ;
-(void)_tryToWriteBufferedOutputData;
-(id)_userAgent;
-(id)_activeBufferedOutputData;
-(void)_sendData:(id)arg1 bufferedOutputData:(id)arg2 ;
-(BOOL)_tryParsingHTTPHeaderData:(id)arg1 partialMessage:(CFHTTPMessageRef)arg2 statusCode:(long long*)arg3 remainingBody:(id*)arg4 error:(id*)arg5 ;
-(void)_handleAceNop;
-(void)_handleAcePing:(unsigned)arg1 ;
-(void)_handleAcePong:(unsigned)arg1 ;
-(void)_handleAceEnd;
-(void)_sendAcePongWithId:(unsigned)arg1 ;
-(void)_acknowledgePing:(unsigned)arg1 ;
-(void)_cancelForExtendedValidationFailureWithTrustInfo:(id)arg1 ;
-(void)_validateTrustInfo:(id)arg1 ;
-(BOOL)_usingNetwork;
-(void)_readStreamErrorOccurred;
-(void)_readStreamEndEncountered;
-(void)_readStreamHasBytesAvailable;
-(void)_writeStreamDidOpen;
-(void)_writeStreamHasSpaceAvailable;
-(void)_writeStreamErrorOccurred;
-(void)_writeStreamEndEncountered;
-(void)_validateTrustForStream:(id)arg1 ;
-(void)_didEncounterError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<ADSiriBackgroundConnectionDelegate>)arg1 ;
-(NSString *)description;
-(id<ADSiriBackgroundConnectionDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)_closeConnection;
-(id)_connectionType;
@end

