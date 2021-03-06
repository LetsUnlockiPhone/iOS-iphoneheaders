/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DATokenRegistrationDelegate.h>

@protocol DARefreshManagerDelegate;
@class NSDate, PCConnectionManager, NSMutableSet, NSTimer;

@interface DARefreshWrapper : NSObject <DATokenRegistrationDelegate> {

	int _pushState;
	int _curStyle;
	id<DARefreshManagerDelegate> _delegate;
	NSDate* _pushRegistrationTime;
	PCConnectionManager* _manager;
	NSMutableSet* _tokenRegistrations;
	NSTimer* _retryTimer;
	NSTimer* _dailyRefreshTimer;

}

@property (assign,nonatomic,__weak) id<DARefreshManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int pushState;                                             //@synthesize pushState=_pushState - In the implementation block
@property (nonatomic,retain) NSDate * pushRegistrationTime;                             //@synthesize pushRegistrationTime=_pushRegistrationTime - In the implementation block
@property (nonatomic,retain) PCConnectionManager * manager;                             //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) int curStyle;                                              //@synthesize curStyle=_curStyle - In the implementation block
@property (nonatomic,retain) NSMutableSet * tokenRegistrations;                         //@synthesize tokenRegistrations=_tokenRegistrations - In the implementation block
@property (nonatomic,retain) NSTimer * retryTimer;                                      //@synthesize retryTimer=_retryTimer - In the implementation block
@property (nonatomic,retain) NSTimer * dailyRefreshTimer;                               //@synthesize dailyRefreshTimer=_dailyRefreshTimer - In the implementation block
-(void)setDelegate:(id<DARefreshManagerDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<DARefreshManagerDelegate>)delegate;
-(PCConnectionManager *)manager;
-(void)shutdown;
-(NSDate *)pushRegistrationTime;
-(void)performTokenRegistrationRequestsWithToken:(id)arg1 onBehalfOf:(id)arg2 ;
-(void)setPushState:(int)arg1 ;
-(void)setPushRegistrationTime:(NSDate *)arg1 ;
-(int)curStyle;
-(void)setCurStyle:(int)arg1 ;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2 ;
-(void)retryCollections:(id)arg1 after:(double)arg2 reason:(int)arg3 ;
-(void)tokenRegistrationRequest:(id)arg1 finishedWithError:(id)arg2 ;
-(void)setTokenRegistrations:(NSMutableSet *)arg1 ;
-(NSTimer *)retryTimer;
-(void)setRetryTimer:(NSTimer *)arg1 ;
-(NSTimer *)dailyRefreshTimer;
-(void)setDailyRefreshTimer:(NSTimer *)arg1 ;
-(void)_dailyRefreshTimerFired:(id)arg1 ;
-(void)cancelRetryTimer;
-(void)cancelDailyRefreshTimer;
-(void)cancelAllTokenRegistrations;
-(id)_stringForStyle:(int)arg1 ;
-(NSMutableSet *)tokenRegistrations;
-(void)startDailyRefreshTimer;
-(void)_retryTimerFired:(id)arg1 ;
-(void)setManager:(PCConnectionManager *)arg1 ;
-(int)pushState;
@end

