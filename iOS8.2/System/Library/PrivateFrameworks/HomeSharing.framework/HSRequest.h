/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData, NSDictionary, NSMutableArray, NSURL;

@interface HSRequest : NSObject {

	NSString* _action;
	NSData* _bodyData;
	NSDictionary* _arguments;
	int _method;
	NSMutableArray* _cachedBodyDataBlocks;
	char _concurrent;
	char _excludeSessionIDFromURL;
	NSURL* _responseDataDestinationFileURL;

}

@property (nonatomic,readonly) NSString * action;                                //@synthesize action=_action - In the implementation block
@property (getter=isConcurrent,nonatomic,readonly) char concurrent;              //@synthesize concurrent=_concurrent - In the implementation block
@property (assign,nonatomic) int method;                                         //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) double timeoutInterval; 
@property (nonatomic,copy) NSData * bodyData;                                    //@synthesize bodyData=_bodyData - In the implementation block
@property (assign,nonatomic) char excludeSessionIDFromURL;                       //@synthesize excludeSessionIDFromURL=_excludeSessionIDFromURL - In the implementation block
@property (nonatomic,copy) NSURL * responseDataDestinationFileURL;               //@synthesize responseDataDestinationFileURL=_responseDataDestinationFileURL - In the implementation block
+(id)request;
-(id)initWithAction:(id)arg1 ;
-(void)setValue:(id)arg1 forArgument:(id)arg2 ;
-(NSData *)bodyData;
-(id)description;
-(NSString *)action;
-(int)method;
-(char)isConcurrent;
-(double)timeoutInterval;
-(void)cacheBodyDataBlock:(id)arg1 ;
-(unsigned)cachedBodyDataBlocksLength;
-(void)appendCachedBodyDataBlocksIntoData:(id)arg1 clearCache:(char)arg2 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(char)acceptsGzipEncoding;
-(id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned)arg2 ;
-(id)URLRequestForBaseURL:(id)arg1 sessionID:(unsigned)arg2 ;
-(char)excludeSessionIDFromURL;
-(void)setExcludeSessionIDFromURL:(char)arg1 ;
-(NSURL *)responseDataDestinationFileURL;
-(void)setResponseDataDestinationFileURL:(NSURL *)arg1 ;
-(void)setBodyData:(NSData *)arg1 ;
-(void)setMethod:(int)arg1 ;
@end

