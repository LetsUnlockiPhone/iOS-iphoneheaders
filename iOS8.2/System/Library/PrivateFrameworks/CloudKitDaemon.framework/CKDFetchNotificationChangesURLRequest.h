/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableArray, NSData, NSArray;

@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest {

	NSMutableArray* _resultChangedNotifications;
	char _moreComing;
	unsigned _resultsLimit;
	NSData* _resultServerChangeTokenData;
	NSData* _serverChangeTokenData;

}

@property (assign,nonatomic) unsigned resultsLimit;                               //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,retain) NSData * resultServerChangeTokenData;                //@synthesize resultServerChangeTokenData=_resultServerChangeTokenData - In the implementation block
@property (nonatomic,readonly) NSArray * resultChangedNotifications;              //@synthesize resultChangedNotifications=_resultChangedNotifications - In the implementation block
@property (assign,nonatomic) char moreComing;                                     //@synthesize moreComing=_moreComing - In the implementation block
@property (nonatomic,retain) NSData * serverChangeTokenData;                      //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
-(void)setResultsLimit:(unsigned)arg1 ;
-(char)moreComing;
-(unsigned)resultsLimit;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(NSArray *)resultChangedNotifications;
-(id)initWithServerChangeTokenData:(id)arg1 ;
-(NSData *)resultServerChangeTokenData;
-(void)setMoreComing:(char)arg1 ;
-(NSData *)serverChangeTokenData;
-(void)setResultServerChangeTokenData:(NSData *)arg1 ;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(int)operationType;
@end

