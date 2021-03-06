/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>
#import <IDS/IDSBaseSocketPairConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSSet, IDSBaseSocketPairConnection, CUTWeakReference, NSObject;

@interface _IDSSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate> {

	id _delegateContext;
	NSString* _uniqueID;
	NSString* _accountID;
	NSSet* _destinations;
	IDSBaseSocketPairConnection* _unreliableSocketPairConnection;
	CUTWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _state;
	long long _transportType;
	int _socket;
	BOOL _isAudioEnabled;
	BOOL _isLegacy;
	long long _inviteTimeout;
	unsigned _sessionEndedReason;

}

@property (nonatomic,readonly) int socket; 
@property (nonatomic,readonly) unsigned state;                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long inviteTimeout; 
@property (nonatomic,readonly) unsigned sessionEndedReason; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)socket;
-(void)dealloc;
-(unsigned)state;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)endSession;
-(void)daemonDisconnected;
-(void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)session:(id)arg1 audioEnabled:(BOOL)arg2 ;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 delegateContext:(id)arg4 ;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5 ;
-(void)sendInvitationWithOptions:(id)arg1 ;
-(void)sendInvitationWithData:(id)arg1 declineOnError:(BOOL)arg2 ;
-(void)cancelInvitationWithData:(id)arg1 ;
-(void)acceptInvitationWithData:(id)arg1 ;
-(void)declineInvitationWithData:(id)arg1 ;
-(void)endSessionWithData:(id)arg1 ;
-(void)sendSessionMessage:(id)arg1 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)getAudioEnabled;
-(BOOL)sendData:(id)arg1 error:(id*)arg2 ;
-(void)setInviteTimeout:(long long)arg1 ;
-(long long)inviteTimeout;
-(unsigned)sessionEndedReason;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5 ;
-(void)_broadcastNewSessionToDaemon;
-(void)_cleanupSocketPairConnections;
-(void)_setupSocketPairToDaemon;
-(void)_setupUnreliableSocketPairConnection;
-(void)cancelInvitation;
-(void)acceptInvitation;
-(void)declineInvitation;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end

