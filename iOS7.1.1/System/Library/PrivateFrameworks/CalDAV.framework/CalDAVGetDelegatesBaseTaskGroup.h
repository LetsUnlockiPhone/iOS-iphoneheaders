/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>
#import <CoreDAV/CoreDAVTaskGroupDelegate.h>

@class NSURL, NSMutableArray, NSMutableSet, NSSet;

@interface CalDAVGetDelegatesBaseTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate> {

	bool _serverSupportsExpandPropertyReport;
	NSURL* _principalURL;
	NSMutableArray* _readPrincipalURLs;
	NSMutableArray* _writePrincipalURLs;
	NSMutableSet* _writeDetails;
	NSMutableSet* _readDetails;

}

@property (assign) bool serverSupportsExpandPropertyReport;              //@synthesize serverSupportsExpandPropertyReport=_serverSupportsExpandPropertyReport - In the implementation block
@property (readonly) NSSet * readOnlyPrincipalDetails; 
@property (readonly) NSSet * readWritePrincipalDetails; 
@property (retain) NSURL * principalURL;                                 //@synthesize principalURL=_principalURL - In the implementation block
@property (retain) NSMutableArray * readPrincipalURLs;                   //@synthesize readPrincipalURLs=_readPrincipalURLs - In the implementation block
@property (retain) NSMutableArray * writePrincipalURLs;                  //@synthesize writePrincipalURLs=_writePrincipalURLs - In the implementation block
@property (retain) NSMutableSet * writeDetails;                          //@synthesize writeDetails=_writeDetails - In the implementation block
@property (retain) NSMutableSet * readDetails;                           //@synthesize readDetails=_readDetails - In the implementation block
-(void)dealloc;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(id)_mappingsForPrincipalDetails;
-(id)_popFromArray:(id)arg1 ;
-(id)readPrincipalURLs;
-(void)_getPrincipalDetailsForURL:(id)arg1 ;
-(id)writePrincipalURLs;
-(bool)serverSupportsExpandPropertyReport;
-(void)_processDetailsFromMultiStatus:(id)arg1 allowWrite:(bool)arg2 ;
-(id)writeDetails;
-(id)readDetails;
-(void)setReadDetails:(id)arg1 ;
-(void)setWriteDetails:(id)arg1 ;
-(void)setReadPrincipalURLs:(id)arg1 ;
-(void)setWritePrincipalURLs:(id)arg1 ;
-(id)readOnlyPrincipalDetails;
-(id)readWritePrincipalDetails;
-(void)setServerSupportsExpandPropertyReport:(bool)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setPrincipalURL:(id)arg1 ;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)principalURL;
@end

