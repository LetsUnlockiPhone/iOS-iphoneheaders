/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSData, NSString, NSDate, NSDictionary;

@interface IMFileTransfer : NSObject {

	BOOL _isIncoming;
	BOOL _isDirectory;
	BOOL _shouldAttemptToResume;
	BOOL _wasRegisteredAsStandalone;
	BOOL _shouldForceArchive;
	BOOL _needsWrapper;
	unsigned short _hfsFlags;
	NSURL* _localURL;
	NSData* _localBookmark;
	NSString* _guid;
	NSString* _messageGUID;
	NSDate* _startDate;
	NSDate* _createdDate;
	int _transferState;
	NSString* _filename;
	NSURL* _transferDataURL;
	NSString* _utiType;
	NSString* _mimeType;
	unsigned long _hfsType;
	unsigned long _hfsCreator;
	NSString* _accountID;
	NSString* _otherPerson;
	int _error;
	NSString* _errorDescription;
	NSDictionary* _localUserInfo;
	NSString* _transferredFilename;
	NSDictionary* _transcoderUserInfo;
	double _lastUpdatedInterval;
	double _lastAveragedInterval;
	unsigned long long _lastAveragedBytes;
	unsigned long long _currentBytes;
	unsigned long long _totalBytes;
	unsigned long long _averageTransferRate;

}

@property (nonatomic,readonly) BOOL canBeAccepted; 
@property (nonatomic,readonly) BOOL isFinished; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) BOOL existsAtLocalPath; 
@property (nonatomic,retain) NSString * guid;                                                               //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * messageGUID;                                                        //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,retain) NSDate * createdDate;                                                          //@synthesize createdDate=_createdDate - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                            //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) int transferState;                                                             //@synthesize transferState=_transferState - In the implementation block
@property (assign,nonatomic) BOOL isIncoming;                                                               //@synthesize isIncoming=_isIncoming - In the implementation block
@property (nonatomic,retain) NSString * filename;                                                           //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) NSString * transferredFilename;                                                //@synthesize transferredFilename=_transferredFilename - In the implementation block
@property (nonatomic,retain) NSString * localPath; 
@property (nonatomic,retain) NSString * type;                                                               //@synthesize utiType=_utiType - In the implementation block
@property (nonatomic,readonly) NSString * mimeType;                                                         //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,retain) NSURL * localURL; 
@property (nonatomic,retain) NSURL * transferDataURL;                                                       //@synthesize transferDataURL=_transferDataURL - In the implementation block
@property (nonatomic,readonly) NSURL * localURLWithoutBookmarkResolution;                                   //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,retain) NSData * localBookmark;                                                        //@synthesize localBookmark=_localBookmark - In the implementation block
@property (assign,nonatomic) unsigned long hfsType;                                                         //@synthesize hfsType=_hfsType - In the implementation block
@property (assign,nonatomic) unsigned long hfsCreator;                                                      //@synthesize hfsCreator=_hfsCreator - In the implementation block
@property (assign,nonatomic) unsigned short hfsFlags;                                                       //@synthesize hfsFlags=_hfsFlags - In the implementation block
@property (nonatomic,retain) NSString * accountID;                                                          //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSString * otherPerson;                                                        //@synthesize otherPerson=_otherPerson - In the implementation block
@property (assign,nonatomic) unsigned long long currentBytes;                                               //@synthesize currentBytes=_currentBytes - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytes;                                                 //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long averageTransferRate;                                        //@synthesize averageTransferRate=_averageTransferRate - In the implementation block
@property (assign,nonatomic) BOOL isDirectory;                                                              //@synthesize isDirectory=_isDirectory - In the implementation block
@property (assign,nonatomic) BOOL shouldAttemptToResume;                                                    //@synthesize shouldAttemptToResume=_shouldAttemptToResume - In the implementation block
@property (assign,nonatomic) BOOL shouldForceArchive;                                                       //@synthesize shouldForceArchive=_shouldForceArchive - In the implementation block
@property (assign,nonatomic) int error;                                                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * errorDescription;                                                   //@synthesize errorDescription=_errorDescription - In the implementation block
@property (nonatomic,retain) NSDictionary * transcoderUserInfo;                                             //@synthesize transcoderUserInfo=_transcoderUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                                       //@synthesize localUserInfo=_localUserInfo - In the implementation block
@property (assign,setter=setRegisteredAsStandalone:,nonatomic) BOOL wasRegisteredAsStandalone;              //@synthesize wasRegisteredAsStandalone=_wasRegisteredAsStandalone - In the implementation block
@property (assign,setter=_setLastUpdatedInterval:,nonatomic) double _lastUpdatedInterval;                   //@synthesize lastUpdatedInterval=_lastUpdatedInterval - In the implementation block
@property (assign,setter=_setLastAveragedInterval:,nonatomic) double _lastAveragedInterval;                 //@synthesize lastAveragedInterval=_lastAveragedInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long _lastAveragedBytes;                                       //@synthesize lastAveragedBytes=_lastAveragedBytes - In the implementation block
@property (assign,setter=_setNeedsWrapper:,nonatomic) BOOL _needsWrapper;                                   //@synthesize needsWrapper=_needsWrapper - In the implementation block
+(BOOL)_doesLocalURLRequireArchiving:(id)arg1 ;
+(id)_invalidCharactersForFileTransferName;
-(BOOL)isDirectory;
-(void)_clear;
-(void)_setError:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)userInfo;
-(id)mimeType;
-(id)displayName;
-(id)localURL;
-(void)setUserInfo:(id)arg1 ;
-(BOOL)isFinished;
-(id)messageGUID;
-(void)setMessageGUID:(id)arg1 ;
-(id)transcoderUserInfo;
-(void)setTranscoderUserInfo:(id)arg1 ;
-(unsigned long long)currentBytes;
-(id)_initWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(BOOL)arg3 localURL:(id)arg4 account:(id)arg5 otherPerson:(id)arg6 totalBytes:(unsigned long long)arg7 hfsType:(unsigned long)arg8 hfsCreator:(unsigned long)arg9 hfsFlags:(unsigned short)arg10 isIncoming:(BOOL)arg11 ;
-(void)_setAccount:(id)arg1 otherPerson:(id)arg2 ;
-(id)_dictionaryRepresentation;
-(void)_setForceArchive:(BOOL)arg1 ;
-(void)_setTransferState:(int)arg1 ;
-(void)_setLocalURL:(id)arg1 ;
-(id)otherPerson;
-(void)setRegisteredAsStandalone:(BOOL)arg1 ;
-(BOOL)_updateWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)wasRegisteredAsStandalone;
-(void)_setCurrentBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2 ;
-(void)_setAveragedTransferRate:(unsigned long long)arg1 lastAveragedInterval:(double)arg2 lastAveragedBytes:(unsigned long long)arg3 ;
-(BOOL)isIncoming;
-(int)transferState;
-(id)localPath;
-(id)guid;
-(void)setAccountID:(id)arg1 ;
-(void)setCurrentBytes:(unsigned long long)arg1 ;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(void)_setLocalPath:(id)arg1 ;
-(unsigned short)hfsFlags;
-(void)_calculateTypeInformation;
-(id)transferredFilename;
-(void)_setStartDate:(id)arg1 ;
-(void)_setDirectory:(BOOL)arg1 hfsType:(unsigned long)arg2 hfsCreator:(unsigned long)arg3 hfsFlags:(unsigned short)arg4 ;
-(BOOL)canBeAccepted;
-(BOOL)existsAtLocalPath;
-(void)_setTransferDataURL:(id)arg1 ;
-(unsigned long)hfsType;
-(id)localURLWithoutBookmarkResolution;
-(id)localBookmark;
-(void)setLocalBookmark:(id)arg1 ;
-(double)_lastUpdatedInterval;
-(void)_setLastUpdatedInterval:(double)arg1 ;
-(double)_lastAveragedInterval;
-(void)_setLastAveragedInterval:(double)arg1 ;
-(unsigned long long)_lastAveragedBytes;
-(id)createdDate;
-(void)setCreatedDate:(id)arg1 ;
-(void)setIsIncoming:(BOOL)arg1 ;
-(id)transferDataURL;
-(void)setHfsType:(unsigned long)arg1 ;
-(void)setHfsFlags:(unsigned short)arg1 ;
-(unsigned long)hfsCreator;
-(void)setHfsCreator:(unsigned long)arg1 ;
-(void)setOtherPerson:(id)arg1 ;
-(unsigned long long)averageTransferRate;
-(void)setAverageTransferRate:(unsigned long long)arg1 ;
-(void)setIsDirectory:(BOOL)arg1 ;
-(BOOL)shouldAttemptToResume;
-(void)setShouldAttemptToResume:(BOOL)arg1 ;
-(id)errorDescription;
-(void)_setErrorDescription:(id)arg1 ;
-(BOOL)shouldForceArchive;
-(BOOL)_needsWrapper;
-(void)_setNeedsWrapper:(BOOL)arg1 ;
-(void)setTransferredFilename:(id)arg1 ;
-(id)accountID;
-(unsigned long long)totalBytes;
-(id)startDate;
-(id)filename;
-(void)setFilename:(id)arg1 ;
-(int)error;
-(void)setGuid:(id)arg1 ;
@end

