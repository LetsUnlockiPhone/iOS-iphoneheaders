/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class BKSApplicationStateMonitor, NSString, NSXPCConnection;

@interface SUManagerServerClient : NSObject {

	BKSApplicationStateMonitor* _appStateMonitor;
	unsigned _lastAppState;
	int _type;
	int _pid;
	NSString* _identifier;
	BOOL _isApplication;
	BOOL _isMessagable;
	BOOL _isForeground;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int pid;                                         //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) BOOL isApplication;                              //@synthesize isApplication=_isApplication - In the implementation block
@property (nonatomic,readonly) BOOL isMessagable;                               //@synthesize isMessagable=_isMessagable - In the implementation block
@property (nonatomic,readonly) BOOL isForeground;                               //@synthesize isForeground=_isForeground - In the implementation block
@property (nonatomic,readonly) id<SUManagerClientInterface> proxy; 
-(BOOL)isMessagable;
-(void)_evaluateForegroundness;
-(void)wakeupIfNecessary;
-(BOOL)_isStateMessagable:(unsigned)arg1 ;
-(BOOL)_isStateForeground:(unsigned)arg1 ;
-(void)_evaluateMessagability;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSXPCConnection *)connection;
-(id<SUManagerClientInterface>)proxy;
-(BOOL)isForeground;
-(int)pid;
-(BOOL)isApplication;
-(id)initWithConnection:(id)arg1 ;
-(void)_applicationStateChanged:(id)arg1 ;
@end

