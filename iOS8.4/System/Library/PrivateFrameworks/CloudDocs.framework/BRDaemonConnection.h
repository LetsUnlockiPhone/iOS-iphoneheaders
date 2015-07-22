/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {

	NSUUID* _uuid;
	BOOL _isUsingTokenService;

}
+(void)initialize;
+(id)defaultConnection;
+(id)secondaryConnection;
+(id)homeDirectoryURL;
+(id)mobileDocumentsURL;
+(id)cloudDocsAppSupportURL;
+(id)cloudDocsCachesURL;
+(id)t_connectionForUUID:(id)arg1 ;
+(void)t_setDefaultConnection:(id)arg1 ;
+(void)invalidateCachedURLProperties;
+(void)t_setMobileDocumentsURL:(id)arg1 ;
-(void)dealloc;
-(id)initUsingUserLocalDaemonTokenService;
-(BRXPCSyncProxy*)syncTokenProxy;
-(BRXPCSyncProxy*)syncProxy;
-(void)_setupAndResume;
-(id)initUsingUserLocalDaemon;
@end
