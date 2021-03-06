/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/XMLSAXHTTPRequest.h>

@class NSMutableURLRequest;

@interface YTXMLHTTPRequest : XMLSAXHTTPRequest {

	NSMutableURLRequest* _deferredRequest;
	BOOL _needsAccountAuth;

}

@property (assign,nonatomic) BOOL needsAccountAuth;              //@synthesize needsAccountAuth=_needsAccountAuth - In the implementation block
-(void)dealloc;
-(void)loadRequest:(id)arg1 ;
-(BOOL)needsAccountAuth;
-(void)didAuthenticate:(id)arg1 ;
-(void)setNeedsAccountAuth:(BOOL)arg1 ;
-(void)failedToAuthenticate:(id)arg1 ;
-(void)listenForAuthenticationNotifications:(BOOL)arg1 ;
@end

