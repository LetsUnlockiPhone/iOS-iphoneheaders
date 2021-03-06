/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardServices/SBSStatusBarStyleOverridesAssertionClient.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSXPCConnection, NSObject, NSString;

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <SBSStatusBarStyleOverridesAssertionClient> {

	NSHashTable* _assertions;
	NSXPCConnection* _sbXPCConnection;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,retain) NSHashTable * assertions;                                //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,retain) NSXPCConnection * sbXPCConnection;                       //@synthesize sbXPCConnection=_sbXPCConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeStatusBarStyleOverridesAssertion:(id)arg1 ;
-(void)addStatusBarStyleOverridesAssertion:(id)arg1 withHandler:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 ;
-(void)_reactivateAssertions;
-(void)_internalQueue_removeStatusBarStyleOverridesAssertionMatchingData:(id)arg1 invalidate:(BOOL)arg2 ;
-(void)_invalidateStatusBarStyleOverridesAssertionsWithData:(id)arg1 ;
-(void)setAssertions:(NSHashTable *)arg1 ;
-(NSXPCConnection *)sbXPCConnection;
-(void)setSbXPCConnection:(NSXPCConnection *)arg1 ;
-(void)_tearDownXPCConnection;
-(NSHashTable *)assertions;
@end

