/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:52:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/HealthKit.framework/healthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HDClient, HDDaemon, NSObject, NSMutableArray, NSUUID;

@interface HDAuthorizationServer : NSObject {

	HDClient* _client;
	HDDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _authorizationRequestIdentifiers;
	NSUUID* _transactionSessionIdentifier;
	int _invalidated;

}

@property (readonly) HDClient * client;                                                     //@synthesize client=_client - In the implementation block
@property (assign,nonatomic,__weak) HDDaemon * daemon;                                      //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * authorizationRequestIdentifiers;              //@synthesize authorizationRequestIdentifiers=_authorizationRequestIdentifiers - In the implementation block
@property (nonatomic,retain) NSUUID * transactionSessionIdentifier;                         //@synthesize transactionSessionIdentifier=_transactionSessionIdentifier - In the implementation block
@property (assign,nonatomic) int invalidated;                                               //@synthesize invalidated=_invalidated - In the implementation block
-(id)initWithClient:(id)arg1 daemon:(id)arg2 ;
-(id)authorizationStatusForType:(id)arg1 error:(id*)arg2 ;
-(void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 promptHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)allAuthorizationRecordsForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)allAuthorizationRecordsForType:(id)arg1 error:(id*)arg2 ;
-(void)requestAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 promptHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(char)resetAuthorizationStatusForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endAuthorizationRequestDelegateTransactionWithError:(id)arg1 ;
-(void)performIfAuthorizedToReadTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)performIfAuthorizedToSaveObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)performIfAuthorizedToDeleteObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)filterSamplesForReadAuthorization:(id)arg1 ;
-(char)isAuthorizationStatusDeterminedForTypes:(id)arg1 error:(id*)arg2 ;
-(char)isAuthorizedToReadType:(id)arg1 withRestrictedSourceIdentifier:(id*)arg2 ;
-(id)readAuthorizationWithTypes:(id)arg1 error:(id*)arg2 ;
-(void)_performIfAuthorizedForTypes:(id)arg1 sharing:(char)arg2 onQueue:(id)arg3 usingBlock:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(char)_shouldBypassAuthorization;
-(id)_authorizationStatusForTypes:(id)arg1 error:(id*)arg2 ;
-(id)clientSourceIdentifierWithError:(id*)arg1 ;
-(void)_queue_requestAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 promptHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(NSMutableArray *)authorizationRequestIdentifiers;
-(void)setAuthorizationRequestIdentifiers:(NSMutableArray *)arg1 ;
-(NSUUID *)transactionSessionIdentifier;
-(void)setTransactionSessionIdentifier:(NSUUID *)arg1 ;
-(int)invalidated;
-(void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDDaemon *)daemon;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDaemon:(HDDaemon *)arg1 ;
-(void)setInvalidated:(int)arg1 ;
-(HDClient *)client;
@end

